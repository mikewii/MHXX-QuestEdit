#include  "Extention/sem.hpp"

void sem::read(std::vector<char> &source, std::vector<setEmMain_s> &dest) {
	dest.resize(sizeof(setEmMain_s));
	setEmMain_s* src = (setEmMain_s*)&source.data()[0];
	setEmMain_s* dst = (setEmMain_s*)&dest.data()[0];
	
	return;
	
}