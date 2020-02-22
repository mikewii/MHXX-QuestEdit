#include <Save/savefile.hpp>
#include <Quest/questfile.hpp>
#include "Tools/buffer.hpp"
#include "Tools/arc.hpp"
#include "Tools/fshelp.hpp"
#include <wx/string.h>
#include "Tools/crypto.hpp"

savefile::savefile() {
	header = (header_s*)(&(buffer::systemSaveBuffer.data()[0]));
}
savefile::~savefile() {
}

void savefile::SaveSlotExtract(int ID, std::vector<char> &dest) {
	int pos = (uint64_t)header->pSaveSlot[ID];
	buffer::extract(pos, SAVE_SLOT_SIZE, buffer::systemSaveBuffer, dest);
}

void savefile::SaveSlotInsert(int ID, std::vector<char> &dest) {
	int pos = (uint64_t)header->pSaveSlot[ID];
	buffer::insert(pos, dest.size(), dest, buffer::systemSaveBuffer);
}

std::string savefile::QuestExtract(
	int ID,
	std::vector<char> &dest,
	bool asARC,
	bool trim,
	bool key) {
		int pos = QUEST_POS + (QUEST_SIZE * ID);
		buffer::extract(pos, QUEST_SIZE, buffer::systemSaveBuffer, dest);
		
		std::string name = "q";
		name += QuestExtractName(dest);
		
		if (trim || key) {
			ARC::arc_s *header = (ARC::arc_s*)&dest.data()[8];
			ARC::arcFile_s *file = (ARC::arcFile_s*)&header->Files[header->FilesNum - 1];
			int pos = (uint64_t)file->pDataPosition;
			int res = file->CompressedSize + pos + 8;
			
			if (key) {
				FILE* fo;
				FILE* fo100;
				std::string name2 = "Out\\" + name + ".arc_key";
				std::string name100 = name2 + "_100";
				fo = fopen(name2.c_str(), "wb");
				fo100 = fopen(name100.c_str(), "wb");
				fwrite(dest.data() + res, 1, QUEST_KEY_SIZE, fo);
				fwrite(dest.data() + res, 1, 0x100, fo100);
				fclose(fo);
				fclose(fo100);
			}
			if (trim ) dest.resize(res);
		}
		
		if (asARC) {
			dest.erase(dest.begin(), dest.begin() + 8);
			name += ".arc";
		}
		
		return name;
}

std::string savefile::QuestExtractSign(
	int ID,
	std::vector<char> &dest) {
		std::string empty;
		std::string name;
		int pos = QUEST_POS + (QUEST_SIZE * ID);
		if ((int)buffer::systemSaveBuffer.data()[pos] != 0) {
			int decName = *(int*)&buffer::systemSaveBuffer.data()[pos];
			name = std::to_string(decName);
			buffer::extract(pos + 0x1300, 0x100, buffer::systemSaveBuffer, dest);
			return name;
		}
		
		return empty;
}


void savefile::QuestInsert(int ID, std::vector<char> &source, std::string &path) {
	int pos = QUEST_POS + (QUEST_SIZE * ID);
	
	ARC::arc_s* header = (ARC::arc_s*)&source.data()[0];
	
	if (header->Magic == ARC_MAGIC) {
		std::vector<int>buf;
		std::vector<char>buf2;
		int posS = path.find_last_of('\\');
		posS++;
		wxString name = path.substr(posS, path.size() - posS);
		unsigned long nameInt = 0;
		int size = source.size();
		
		int t = name.find('q');
		name.Remove(t, 1);
		t = name.find('.');
		name.Remove(t, name.size() - t);
		name.ToCULong(&nameInt);
		
		buf.push_back(nameInt);
		buf.push_back(size);
		
		for (int i = 0; i < 8; i++) {
			char *data = (char*)&buf.front() + i;
			buf2.push_back(*data);
		}

		buffer::insert(pos, buf2.size(), buf2, buffer::systemSaveBuffer);
		pos += 8;
	}
	
	crypto::validateQuestKey(source.data() + 0x1300);
	buffer::insert(pos, source.size(), source, buffer::systemSaveBuffer);
}

void savefile::ChangeFlags() {
	std::vector<char> buf(sizeof(flags_s));
	flags_s *flags = (flags_s*)&buf.data()[0];
	for (int i = 0; i < 5; i++) {
		flags->event[i] = 0xFFFFFFFF;
	}
	
	int pos = (uint64_t)header->pFlags;
	buffer::insert(pos, buf.size(), buf, buffer::systemSaveBuffer);
}

std::string savefile::QuestExtractName(std::vector<char> &source) {
	uint32_t *name = (uint32_t*)source.data();
	std::string name_S = std::to_string(*name);
	return name_S;
}

void savefile::QuestInsertKey(int ID, std::vector<char> &dest) {
	int pos = QUEST_POS + (QUEST_SIZE * ID) + (QUEST_SIZE - QUEST_KEY_USED_SIZE);
	
	if (dest.size() == QUEST_KEY_SIZE) dest.resize(QUEST_KEY_USED_SIZE);
	buffer::insert(pos, dest.size(), dest, buffer::systemSaveBuffer);
}

std::string savefile::QuestExtractMHGU(
	int ID,
	std::vector<char> &dest) {
	
		int pos = QUEST_POS_MHGU + (QUEST_SIZE_MHGU * ID);
		buffer::extract(pos, QUEST_SIZE_MHGU, buffer::systemSaveBuffer, dest);
		
		std::string name = "q";
		name += QuestExtractName(dest);
		
		return name;
}