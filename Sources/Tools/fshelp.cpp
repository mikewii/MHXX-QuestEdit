#include "Tools/fshelp.hpp"
#include <io.h>

std::string* fshelp::str = new std::string();
std::string fshelp::getcwdir() {
	//char* dummyChar;
	*str = getcwd(NULL, -1);
	return *str;
}

void	fshelp::CreateFile(std::vector<char> &source, std::string filePath) {
	FILE* fo;
	fo = fopen(filePath.c_str(), "wb");
	fwrite(source.data(), 1, source.size(), fo);
	fclose(fo);
}

void	fshelp::ReadFile(std::vector<char> &dest, std::string filePath) {
	FILE* fi;
	
	fi = fopen(filePath.c_str(), "rb");
	
	fseek(fi, 0, SEEK_END);
	int fiSize = ftell(fi);
	rewind(fi);
	
	dest.resize(fiSize);
	
	fread(dest.data(), 1, fiSize, fi);
	fclose(fi);
}