// also known as .mib
#pragma once
#include "types.h"
#include <vector>

#include <wx/spinctrl.h>
#include <wx/choice.h>

const uint32_t EXT_MAGIC = 0x434B0000;

#pragma pack(push, 1)
struct clear_s {
	uint8_t		isClearParam;
	uint16_t	ClearID;
	uint16_t	ClearNum;
};

struct supply_s {
	uint8_t		SuppLabel;
	uint8_t		SuppType;
	uint16_t	SuppTarget;
	uint16_t	SuppTargetNum;
};

struct boss_s {
	uint16_t	EmType;
	uint8_t		EmSubType;
	uint8_t		AuraType;
	uint8_t		RestoreNum;
	uint8_t		VitalTblNo;
	uint8_t		AttackTblNo;
	uint8_t		OtherTblNo;
	uint8_t		Difficulty;
	uint16_t	Scale;
	uint8_t		ScaleTbl;
	uint8_t		StaminaTbl;
};

struct em_s {
	uint8_t		EmSetType;
	uint16_t	EmSetTargetID;
	uint16_t	EmSetTargetNum;
};

struct appear_s {
	uint8_t		AppearType;
	uint16_t	AppearTargetType;
	uint16_t	AppearTargetNum;
};

struct questData_s {
	// done
	uint32_t	Magic = EXT_MAGIC;
	uint32_t	Version;
	uint32_t	Index;
	uint32_t	QuestID;
	uint8_t		QuestType;
	uint8_t		RequestVillage;
	uint8_t		QuestLv;
	uint8_t		MonsterLv;
	uint8_t		MapNo;
	uint8_t		StartType;
	uint8_t		QuestTime;
	uint8_t		QuestLife;
	uint8_t		AcEquipSetNo;
	uint8_t		BGMType;
	
	// done
	uint8_t		EntryType[2];
	uint8_t		isEntryType_combo;
	
	// done
	uint8_t		ClearType;
	uint8_t		GekitaiHp;
	clear_s 	Clear[2]; // second u8 is u16 ?
	uint8_t		ClearType_sub; // is u16 ?
	uint16_t	ClearID_sub;
	uint16_t	ClearNum_sub;
	
	// done
	uint8_t		CarvingLv;
	uint8_t		GatherLv;
	uint8_t		FishingLv; // is u16 ?
	
	// done
	uint32_t	EntryFee;
	uint32_t	VillagePoint;
	uint32_t	MainReward;
	uint32_t	SubRewardMoney;
	uint32_t	ClearRemVillagePoint;
	uint32_t	FailedRemVillagePoint;
	uint32_t	SubRemVillagePoint;
	uint32_t	ClearRemHunterPoint;
	uint32_t	SubRemHunterPoint;
	
	// done
	// flags for reward panels
	uint8_t		RemAddFrame[2];
	uint8_t		RemAddLotMax;
	
	// done
	supply_s	Supply[2];
	
	// done
	boss_s		Boss[5];
	
	// done
	uint8_t		SmallEmHP;	// also known as Zako
	uint8_t		SmallEmAttack;
	uint8_t		SmallEmOther;
	
	// done
	em_s		Em[2];
	uint8_t		BossRushType;
	
	appear_s	Appear[5];
	uint8_t		StrayRand;
	uint8_t		StrayStartTime;
	uint8_t		StrayStartRand;
	uint8_t		StrayLimit[3];
	uint8_t		StrayRand2[2];
	uint8_t		ExtraTicketNum;
	uint8_t		Icon[5];
	uint32_t	ProgNo;
	uint32_t	Resource;
	uint32_t	Message;
	uint32_t	VillagePointG;
	uint8_t		Flag;
};
#pragma pack(pop)

class ext
{
public:
	static void readBoss(
		std::vector<char>	&source,
		int					ID,
		wxChoice*			wxType,
		wxSpinCtrl*			wxSubType,
		wxSpinCtrl*			wxAura,
		wxSpinCtrl*			wxRestoreNum,
		wxSpinCtrl*			wxHpTbl,
		wxSpinCtrl*			wxAtkTbl,
		wxSpinCtrl*			wxStaminaTbl,
		wxSpinCtrl*			wxOtherTbl,
		wxSpinCtrl*			wxSize,
		wxSpinCtrl*			wxSizeTbl);
	
	static void readGeneral(
		std::vector<char>	&source,
		wxSpinCtrl*			wxID,
		wxSpinCtrl*			wxQuestNo,
		wxSpinCtrl*			wxQuestType,
		wxSpinCtrl*			wxRequestVillage,
		wxChoice*			wxQuestLv,
		wxChoice*			wxMonsterLv,
		wxChoice*			wxMap,
		wxChoice*			wxStartType,
		wxSpinCtrl*			wxTime,
		wxSpinCtrl*			wxQuestLives,
		wxSpinCtrl*			wxAcEquipSetNo,
		wxSpinCtrl*			wxBGMType,
		wxSpinCtrl*			wxGatheringLv,
		wxSpinCtrl*			wxCarvingLv,
		wxSpinCtrl*			wxFishingLv);
	
	static void readValues(
		std::vector<char>	&source,
		wxSpinCtrl*			wxFee,
		wxSpinCtrl*			wxMainReward,
		wxSpinCtrl*			wxSubReward,
		wxSpinCtrl*			wxVMainReward,
		wxSpinCtrl*			wxVSubReward,
		wxSpinCtrl*			wxVPenalty,
		wxSpinCtrl*			wxHMainReward,
		wxSpinCtrl*			wxHSubReward);
	
	static void readFlags(
		std::vector<char>	&source,
		wxChoice*			wxEntry0,
		wxChoice*			wxEntry1,
		wxSpinCtrl*			wxEntryCombo,
		wxSpinCtrl*			wxRemAddFrame0,
		wxSpinCtrl*			wxRemAddFrame1,
		wxSpinCtrl*			wxRemAddLotMax,
		wxChoice*			wxClearType,
		wxSpinCtrl*			wxGekitaiHP,
		wxSpinCtrl*			wxClear0Param,
		wxSpinCtrl*			wxClear0ID,
		wxSpinCtrl*			wxClear0Num,
		wxSpinCtrl*			wxClear1Param,
		wxSpinCtrl*			wxClear1ID,
		wxSpinCtrl*			wxClear1Num,
		wxSpinCtrl*			wxClearSubType,
		wxSpinCtrl*			wxClearSubID,
		wxSpinCtrl*			wxClearSubNum,
		wxSpinCtrl*			wxIsBossRushType);
	
	static void readSupply(
		std::vector<char>	&source,
		wxSpinCtrl*			wxLabel0,
		wxSpinCtrl*			wxType0,
		wxSpinCtrl*			wxTarget0,
		wxSpinCtrl*			wxNum0,
		wxSpinCtrl*			wxLabel1,
		wxSpinCtrl*			wxType1,
		wxSpinCtrl*			wxTarget1,
		wxSpinCtrl*			wxNum1);
	
	static void readSmallEm(
		std::vector<char>	&source,
		wxSpinCtrl*			wxHP,
		wxSpinCtrl*			wxAtk,
		wxSpinCtrl*			wxOther);
	
	static void readEmSet(
		std::vector<char>	&source,
		wxSpinCtrl*			wxEmSet0Type,
		wxSpinCtrl*			wxEmSet0TargetID,
		wxSpinCtrl*			wxEmSet0TargetNum,
		wxSpinCtrl*			wxEmSet1Type,
		wxSpinCtrl*			wxEmSet1TargetID,
		wxSpinCtrl*			wxEmSet1TargetNum);
	
};