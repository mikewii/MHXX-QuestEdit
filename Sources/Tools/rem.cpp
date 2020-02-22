#include <Extention/rem.hpp>

bool rem::read(std::vector<char> &source, std::vector<rewardItem_s> &item) {
	rem_s* header = (rem_s*)&source.data()[0];
	if (header->Magic != REM_MAGIC) return false;
	
	for (int i = 0; i < REM_ITEMS; i++) {
		item.push_back(header->Item[i]);
	}
	return true;
}

void rem::readFlag(std::vector<char> &source, std::vector<rewardFlag_s> &flags) {
	rem_s* header = (rem_s*)&source.data()[0];
	if (header->Magic != REM_MAGIC) return;
	
	for (int i = 0; i < REM_FLAGS; i++) {
		flags.push_back(header->Flag[i]);
	}
}

void rem::save(std::vector<char> &dest, std::vector<rewardItem_s> &item) {
	dest.resize(sizeof(rem_s));
	rem_s* header = (rem_s*)&dest.data()[0];
	
	header->Magic = REM_MAGIC;
	header->Version = 1;
	for (int i = 0; i < REM_ITEMS; i++) {
		header->Item[i] = item[i];
	}
}