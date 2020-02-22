#pragma once
#include "types.h"
#include <string>
#include <vector>

const int SAVE_SIZE = 0x481D88;
const int SAVE_SIZE_MHGU = 0x4EB8BC;
const int SAVE_SLOT_SIZE = 0x11E7C0;
/* cheat sheet:
 * quest1 = F874		publickey = FF99
 * quest2 = 10C74		publickey = 11774
 * quest3 = 12074		publickey = 129C0
 * quest4 = 13474		publickey = 13F8B
 * 
 * publickey size = 0x218 = 536
 * key is probably sha512
 * 
 * dlc flags at sFestaDownload_v + 0xED0
 **/

class savefile
{
protected:
#pragma pack(push, 1)
	struct flags_s {
		uint32_t		unk[19];
		uint32_t		challenge[2];
		uint32_t		event[5];
	};

	struct header_s {
		uint32_t	version; // ?
		bool		isSlotUsed[3];
		uint8_t		SelectedSlot;
		uint32_t	headerSize; // or pointer to data after header?
		uint32_t*	pFlags;
		uint32_t*	pSaveSlot[3];
		uint32_t	unk2[15894];
		// here starts quests data, each of size 0x1400
	};
#pragma pack(pop)
private:
	header_s *header;
public:
	savefile();
	~savefile();
	virtual void SaveSlotExtract(int ID, std::vector<char> &dest);
	virtual void SaveSlotInsert(int ID, std::vector<char> &dest);
	virtual std::string QuestExtract(
		int ID,
		std::vector<char> &dest,
		bool asARC = false,
		bool trim = false,
		bool key = false);
	virtual std::string QuestExtractMHGU(
		int ID,
		std::vector<char> &dest);
	virtual std::string QuestExtractSign(
		int ID,
		std::vector<char> &dest);
	virtual std::string QuestExtractName(std::vector<char> &source);
	virtual void QuestInsert(int ID, std::vector<char> &dest, std::string &path);
	virtual void QuestInsertKey(int ID, std::vector<char> &dest);
	virtual void ChangeFlags();
};