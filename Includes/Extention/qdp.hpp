#pragma once
#include "types.h"

const uint32_t	QDP_MAGIC = 0x3F800000;

struct questPlus_s {
	uint32_t	Magic;
	uint32_t	Version;
	uint8_t		isRail;
	uint8_t		isRailStart;
	uint16_t	RailOpenTime;
	uint16_t	RailStartTime;
	uint16_t	RailReuseTime;
	uint16_t	isGekiryu;
	uint16_t	GekiryuStartTime;
	uint16_t	GekiryuReuseTime;
	uint16_t	FortHpS;
	uint16_t	FortHpL;
};