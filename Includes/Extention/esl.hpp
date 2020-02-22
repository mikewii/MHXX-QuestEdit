#pragma once
#include "types.h"

const uint32_t ESL_MAGIC = 0x006C7365; // els

struct emSetList_s {
	uint32_t	Magic = ESL_MAGIC;
	uint32_t	Version;
	uint32_t	FileName[14];
};

// Fix this one