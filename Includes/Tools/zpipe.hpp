#pragma once
#include <iostream>
#include <zlib.h>
#include <vector>

class zlib_mem
{
private:
	static const int CHUNK = 16384;
public:
	static int inflate_mem(std::vector<char> &buffer, std::vector<char> &bufferOut);
	static int inflatePipe(FILE* source, FILE* dest);
	static int deflatePipe(FILE *source, std::vector<char> &dest, int level = Z_DEFAULT_COMPRESSION);
};