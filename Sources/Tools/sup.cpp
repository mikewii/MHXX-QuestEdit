#include "Extention/sup.hpp"

bool sup::read(std::vector<char> &source, std::vector<supplyItem_s> &item) {
	sup_s* header = (sup_s*)&source.data()[0];
	if (header->Magic != SUP_MAGIC) return false;
	
	for (int i = 0; i < 40; i++) {
		item.push_back(header->Item[i]);
	}
	return true;
}

void sup::save(std::vector<char> &dest, std::vector<supplyItem_s> &item) {
	dest.resize(sizeof(sup_s));
	sup_s* header = (sup_s*)&dest.data()[0];
	
	header->Magic = SUP_MAGIC;
	header->Version = 1;
	for (int i = 0; i < 40; i++) {
		header->Item[i] = item[i];
	}
}