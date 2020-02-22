#pragma once
#include "types.h"
#include <vector>

const uint32_t	SEM_MAGIC = 0x3F800000;

/* Filename Format:
 * XX = mapID
 * YYY = monsterID
 * ZZ = monsterSubID
 * b_mXXemYYY_ZZ
 **/

struct setEmMain_s {
	uint32_t	Magic;
	uint32_t	Version;
	uint32_t	RoundNo;
	uint32_t	AreaNo;
	float		Angle;
	float		PosX;
	float		PosY;
	float		PosZ;
};

class sem
{
	static void read(std::vector<char> &source, std::vector<setEmMain_s> &dest);
};