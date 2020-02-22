#include "Extention/ext.hpp"

void ext::readBoss(
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
	wxSpinCtrl*			wxSizeTbl){
		
		questData_s* header = (questData_s*)&source.data()[0];
		
		int type = header->Boss[ID].EmType;
		int subType = header->Boss[ID].EmSubType;
		int aura = header->Boss[ID].AuraType;
		int restoreNum = header->Boss[ID].RestoreNum;
		int hpTbl = header->Boss[ID].VitalTblNo;
		int atkTbl = header->Boss[ID].AttackTblNo;
		int staminaTbl = header->Boss[ID].StaminaTbl;
		int otherTbl = header->Boss[ID].OtherTblNo;
		int size = header->Boss[ID].Scale;
		int sizeTbl = header->Boss[ID].ScaleTbl;
		
		wxType->SetSelection(type);
		wxSubType->SetValue(subType);
		wxAura->SetValue(aura);
		wxRestoreNum->SetValue(restoreNum);
		wxHpTbl->SetValue(hpTbl);
		wxAtkTbl->SetValue(atkTbl);
		wxStaminaTbl->SetValue(staminaTbl);
		wxOtherTbl->SetValue(otherTbl);
		wxSize->SetValue(size);
		wxSizeTbl->SetValue(sizeTbl);
}

void ext::readGeneral(
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
	wxSpinCtrl*			wxFishingLv) {
		
		questData_s* header = (questData_s*)&source.data()[0];
		
		int id = header->Index;
		int questNo = header->QuestID;
		int questType = header->QuestType;
		int reqVil = header->RequestVillage;
		int questLv = header->QuestLv;
		int monLv = header->MonsterLv;
		int map = header->MapNo;
		int startType = header->StartType;
		int time = header->QuestTime;
		int acequip = header->AcEquipSetNo;
		int bgm = header->BGMType;
		int gatherlv = header->GatherLv;
		int carvinglv = header->CarvingLv;
		int fishinglv = header->FishingLv;
		
		wxID->SetValue(id);
		wxQuestNo->SetValue(questNo);
		wxQuestType->SetValue(questType);
		wxRequestVillage->SetValue(reqVil);
		wxQuestLv->SetSelection(questLv);
		wxMonsterLv->SetSelection(monLv);
		wxMap->SetSelection(map);
		wxStartType->SetSelection(startType);
		wxTime->SetValue(time);
		wxAcEquipSetNo->SetValue(acequip);
		wxBGMType->SetValue(bgm);
		wxGatheringLv->SetValue(gatherlv);
		wxCarvingLv->SetValue(carvinglv);
		wxFishingLv->SetValue(fishinglv);
}

void ext::readValues(
	std::vector<char>	&source,
	wxSpinCtrl*			wxFee,
	wxSpinCtrl*			wxMainReward,
	wxSpinCtrl*			wxSubReward,
	wxSpinCtrl*			wxVMainReward,
	wxSpinCtrl*			wxVSubReward,
	wxSpinCtrl*			wxVPenalty,
	wxSpinCtrl*			wxHMainReward,
	wxSpinCtrl*			wxHSubReward) {
		
		questData_s* header = (questData_s*)&source.data()[0];
		
		int fee = header->EntryFee;
		int reward = header->MainReward;
		int subReward = header->SubRewardMoney;
		int vreward = header->ClearRemVillagePoint;
		int vsubReward = header->SubRemVillagePoint;
		int vpenalty = header->FailedRemVillagePoint;
		int hreward = header->ClearRemHunterPoint;
		int hsubReward = header->SubRemHunterPoint;
		
		wxFee->SetValue(fee);
		wxMainReward->SetValue(reward);
		wxSubReward->SetValue(subReward);
		wxVMainReward->SetValue(vreward);
		wxVSubReward->SetValue(vsubReward);
		wxVPenalty->SetValue(vpenalty);
		wxHMainReward->SetValue(hreward);
		wxHSubReward->SetValue(hsubReward);
}

void ext::readFlags(
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
	wxSpinCtrl*			wxIsBossRushType) {
		
		questData_s* header = (questData_s*)&source.data()[0];
		
		int entry0 = header->EntryType[0];
		int entry1 = header->EntryType[1];
		int entrycmb = header->isEntryType_combo;
		int remaddframe0 = header->RemAddFrame[0];
		int remaddframe1 = header->RemAddFrame[1];
		int remaddlotmax = header->RemAddLotMax;
		int cleartype = header->ClearType;
		int gekitaihp = header->GekitaiHp;
		int clear0param = header->Clear[0].isClearParam;
		int clear0id = header->Clear[0].ClearID;
		int clear0num = header->Clear[0].ClearNum;
		int clear1param = header->Clear[1].isClearParam;
		int clear1id = header->Clear[1].ClearID;
		int clear1num = header->Clear[1].ClearNum;
		int clearsubtype = header->ClearType_sub;
		int clearsubid = header->ClearID_sub;
		int clearsubnum = header->ClearNum_sub;
		int isrush = header->BossRushType;
		
		wxEntry0->SetSelection(entry0);
		wxEntry1->SetSelection(entry1);
		wxEntryCombo->SetValue(entrycmb);
		wxRemAddFrame0->SetValue(remaddframe0);
		wxRemAddFrame1->SetValue(remaddframe1);
		wxRemAddLotMax->SetValue(remaddlotmax);
		wxClearType->SetSelection(cleartype);
		wxGekitaiHP->SetValue(gekitaihp);
		wxClear0Param->SetValue(clear0param);
		wxClear0ID->SetValue(clear0id);
		wxClear0Num->SetValue(clear0num);
		wxClear1Param->SetValue(clear1param);
		wxClear1ID->SetValue(clear1id);
		wxClear1Num->SetValue(clear1num);
		wxClearSubType->SetValue(clearsubtype);
		wxClearSubID->SetValue(clearsubid);
		wxClearSubNum->SetValue(clearsubnum);
		wxIsBossRushType->SetValue(isrush);
}

void ext::readSupply(
	std::vector<char>	&source,
	wxSpinCtrl*			wxLabel0,
	wxSpinCtrl*			wxType0,
	wxSpinCtrl*			wxTarget0,
	wxSpinCtrl*			wxNum0,
	wxSpinCtrl*			wxLabel1,
	wxSpinCtrl*			wxType1,
	wxSpinCtrl*			wxTarget1,
	wxSpinCtrl*			wxNum1) {
		
		questData_s* header = (questData_s*)&source.data()[0];
		
		int label0 = header->Supply[0].SuppLabel;
		int type0 = header->Supply[0].SuppType;
		int target0 = header->Supply[0].SuppTarget;
		int num0 = header->Supply[0].SuppTargetNum;
		int label1 = header->Supply[1].SuppLabel;
		int type1 = header->Supply[1].SuppType;
		int target1 = header->Supply[1].SuppTarget;
		int num1 = header->Supply[1].SuppTargetNum;
		
		wxLabel0->SetValue(label0);
		wxType0->SetValue(type0);
		wxTarget0->SetValue(target0);
		wxNum0->SetValue(num0);
		wxLabel1->SetValue(label1);
		wxType1->SetValue(type1);
		wxTarget1->SetValue(target1);
		wxNum1->SetValue(num1);
}

void ext::readSmallEm(
		std::vector<char>	&source,
	wxSpinCtrl*			wxHP,
	wxSpinCtrl*			wxAtk,
	wxSpinCtrl*			wxOther) {
		
		questData_s* header = (questData_s*)&source.data()[0];
		
		int hp = header->SmallEmHP;
		int atk = header->SmallEmAttack;
		int other = header->SmallEmOther;
		
		wxHP->SetValue(hp);
		wxAtk->SetValue(atk);
		wxOther->SetValue(other);
}

void ext::readEmSet(
		std::vector<char>	&source,
	wxSpinCtrl*			wxEmSet0Type,
	wxSpinCtrl*			wxEmSet0TargetID,
	wxSpinCtrl*			wxEmSet0TargetNum,
	wxSpinCtrl*			wxEmSet1Type,
	wxSpinCtrl*			wxEmSet1TargetID,
	wxSpinCtrl*			wxEmSet1TargetNum) {
		
		questData_s* header = (questData_s*)&source.data()[0];
		
		int em0type = header->Em[0].EmSetType;
		int em0id = header->Em[0].EmSetTargetID;
		int em0num = header->Em[0].EmSetTargetNum;
		int em1type = header->Em[1].EmSetType;
		int em1id = header->Em[1].EmSetTargetID;
		int em1num = header->Em[1].EmSetTargetNum;
		
		wxEmSet0Type->SetValue(em0type);
		wxEmSet0TargetID->SetValue(em0id);
		wxEmSet0TargetNum->SetValue(em0num);
		wxEmSet1Type->SetValue(em1type);
		wxEmSet1TargetID->SetValue(em1id);
		wxEmSet1TargetNum->SetValue(em1num);
}