/* Represent structures for reward files */
#pragma once
#include "types.h"
#include <vector>

const uint32_t	REM_MAGIC = 0x3F800000;
const uint32_t	REM_ITEMS = 40;
const uint32_t	REM_FLAGS = 4;

struct rewardFlag_s {
	uint8_t		Flag; // was 1 2 3
	uint8_t		ItemNum;
};

struct rewardItem_s {
	uint16_t	ItemID;
	uint8_t		Num;
	uint8_t		Rate;
};

struct rem_s {
	uint32_t		Magic;
	uint32_t		Version;
	rewardFlag_s	Flag[REM_FLAGS];
	uint8_t			FlagNum[8]; // unknown, 0 so far
	rewardItem_s	Item[REM_ITEMS];
};

class rem // TODO: saveFlag
{
public:
	static bool read(std::vector<char> &source, std::vector<rewardItem_s> &item);
	static void readFlag(std::vector<char> &source, std::vector<rewardFlag_s> &flags);
	
	// save missing flags for now
	static void save(std::vector<char> &dest, std::vector<rewardItem_s> &item);
};