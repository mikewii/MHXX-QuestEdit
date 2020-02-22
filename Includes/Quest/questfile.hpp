#pragma once
#include "types.h"

const int QUEST_POS = 0xF874;
const int QUEST_POS_MHGU = 0xF899;
const int QUEST_SIZE = 0x1400;
const int QUEST_SIZE_MHGU = 0x1C00;
const int QUEST_KEY_SIZE = 0x218;
const int QUEST_KEY_USED_SIZE = 0x100;

class questfile
{
protected:
#pragma pack(push, 1)
	struct header_s {
		uint32_t	QuestID;
		uint32_t	ArcDataSize; // some kind of lock key
		// ARC data:
		// publickey: | or actually rsa key because its 256 in size, located at end of quest data place
	};
#pragma pack(pop)
public:
	questfile(){};
	~questfile(){};
	
	/* [0] Title
	 * [1] Client
	 * [2] Description
	 * [3] Main Monster
	 * [4] Main Goal
	 * [5] Failure
	 * [6] Sub Goal
	 * [7] filename
	 **/
};

/*
 * LR:
 * 0:	0 1 2 3
 * 8:	18 7 8 9 A B
 * 10:	D */