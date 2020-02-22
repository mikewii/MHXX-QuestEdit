#include "Extention/gmd.hpp"

int gmd::read(wxArrayString &names, wxArrayString &labels, std::vector<char> &source, uint32_t hash) {
	gmd_s *header = (gmd_s*)&source.data()[0];
	if (header->Magic != GMD_MAGIC) return false;
	if (hash != 0) {
		if (header->Hash != hash) return false;
	}
	bool adv = false;
	char* namesPos;
	char* labelsPos;
	
	if (header->LabelsN != 0) adv = true;
	if (!adv) {
		namesPos = (char*)&source.data()[0x28 + header->FilenameSize + 1];
	} else {
		labelsPos = (char*)&source.data()[
			0x28 + header->FilenameSize + 1 + (sizeof(gmdAdv_s) * header->LabelsN) + sizeof(gmdAdv2_s)];
		namesPos = labelsPos + header->LabelsSize;
		int test = sizeof(gmdAdv_s) * header->LabelsN;
		int test2 = sizeof(gmdAdv2_s);
	}
	
	
	for (int i = 0; i < header->ItemsN; i++)
	{
		names.push_back(namesPos);
		namesPos += names[i].size() + 1;
	}
	
	if (adv)
	{
		for (int i = 0; i < header->LabelsN; i++)
		{
			labels.push_back(labelsPos);
			labelsPos += labels[i].size() + 1;
		}
	}
	
	names.push_back((char *)header->Filename);
	return header->Hash;
	
	
}

void gmd::save(wxArrayString &names, std::vector<char> &dest, uint32_t hash, bool asTxt) {
	dest.resize(sizeof(gmd_s));
	gmd_s* header = (gmd_s*)&dest.data()[0];
	int count = names.Count();
	
	header->Magic = GMD_MAGIC;
	header->Version = GMD_VERSION;
	header->Hash = hash;
	header->ItemsN = count - 1; // minus filename
	header->FilenameSize = names[count - 1].size();
	
	// filename goes first
	if(!asTxt) {
		for (int i = 0; i < names[count - 1].size(); i++) {
			dest.push_back(names[count - 1].at(i));
		}
	}
	
	if (!asTxt) dest.push_back('\0');
	for (int i = 0; i < count - 1; i++)
	{
		if (asTxt) dest.push_back('\"');
		for (int p = 0; p < names[i].size(); p++)
		{
			char data = names[i].at(p);
			if (data == '\n') dest.push_back('\r');
			if (data != '\r') dest.push_back(data);
		}
		if (!asTxt) dest.push_back('\0');
		if (asTxt) {
			dest.push_back('\"');
			dest.push_back(',');
			dest.push_back('\n');
		}
	}
	if (asTxt) {
		dest.erase(dest.begin(), dest.begin() + sizeof(gmd_s));
		return;
	} else {
		header = (gmd_s*)&dest.data()[0];
		int total = dest.size() - sizeof(gmd_s) - header->FilenameSize - 1;
		header->ItemsSize = total;
	}
	
}