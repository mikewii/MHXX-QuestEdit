#pragma once
#include "types.h"

const uint32_t	QDL_MAGIC = 0x434B0000;

struct questlinkItem_s {
	uint32_t	Resource;
	char		Name[16];
};

struct questlink_s {
	uint32_t			Magic = QDL_MAGIC;
	uint32_t			Version;
	uint32_t			Resource;
	questlinkItem_s		BossSetRes[5];
	questlinkItem_s		EmSetList[3];
	questlinkItem_s		RemTbl[2];
	questlinkItem_s		RemTblAdd[2];
	questlinkItem_s		RemTblSub;
	questlinkItem_s		SuppTbl;
	questlinkItem_s		QuestPlus;
};