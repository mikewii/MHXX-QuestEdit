#pragma once
#include <types.h>
#include <vector>

const uint32_t	SUP_MAGIC = 0x3F800000;

struct supplyItem_s {
	uint16_t	ItemID;
	uint8_t		Num;
	uint8_t		Label; // ??
};

struct sup_s {
	uint32_t		Magic = SUP_MAGIC;
	uint32_t		Version;
	supplyItem_s	Item[40];
};

class sup
{
public:
	static bool read(std::vector<char> &source, std::vector<supplyItem_s> &item);
	static void save(std::vector<char> &dest, std::vector<supplyItem_s> &item);
};