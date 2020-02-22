#include "pEXTPanel.h"
#include "Tools/fshelp.hpp"
#include "Extention/ext.hpp"

#include "Strings/common.hpp"
#include "Strings/monsters.hpp"

pEXTPanel::pEXTPanel( wxWindow* parent )
:
EXTPanel( parent )
{
	m_QuestLv->Set(wxQuestLv);
	m_Map->Set(wxMaps);
	m_Entry0->Set(wxEntryType);
	m_Entry1->Set(wxEntryType);
	m_MonLv->Set(wxMonsterLv);
	m_MonsterType->Set(wxMonsters);
	m_StartType->Set(wxStartType);
	m_ClearType->Set(wxClearType);
}

void pEXTPanel::Open( wxFileDirPickerEvent& event ) {
	wxString path = event.GetPath();
	current = path.mb_str().data();
	
	fshelp::ReadFile(buf, current);
	ext::readGeneral(
		buf,
		m_questID,
		m_QuestNo,
		m_QuestType,
		m_ReqVillage,
		m_QuestLv,
		m_MonLv,
		m_Map,
		m_StartType,
		m_Time,
		m_QuestLives,
		m_AcEquipSetNo,
		m_BGMType,
		m_GatheringLv,
		m_CarvingLv,
		m_FishingLv);
	
	ext::readValues(
		buf,
		m_Fee,
		m_MReward,
		m_MSubReward,
		m_VReward,
		m_VSubReward,
		m_vPenalty,
		m_hReward,
		m_hSubReward);
	
	ext::readBoss(
		buf,
		0,
		m_MonsterType,
		m_SubType,
		m_Aura,
		m_RestoreNum,
		m_HpTbl,
		m_AtkTbl,
		m_StmTbl,
		m_OtherTbl,
		m_Size,
		m_SizeTbl);
	
	ext::readFlags(
		buf,
		m_Entry0,
		m_Entry1,
		m_EntryCombo,
		m_RemAddFrame0,
		m_RemAddFrame1,
		m_RemAddLotMax,
		m_ClearType,
		m_GekitaiHp,
		m_ClearParam0,
		m_ClearID0,
		m_ClearNum0,
		m_ClearParam1,
		m_ClearID1,
		m_ClearNum1,
		m_ClearSubType,
		m_ClearSubID,
		m_ClearSubNum,
		m_BossRush);
	
	ext::readSupply(
		buf,
		m_SupplyLabel,
		m_SupplyType,
		m_SupplyTarget,
		m_SupplyNum,
		m_SupplyLabel1,
		m_SupplyType1,
		m_SupplyTarget1,
		m_SupplyNum1);
	
	ext::readSmallEm(
		buf,
		m_SmallEmHP,
		m_SmallEmAtk,
		m_SmallEmOther);
	
	ext::readEmSet(
		buf,
		m_EmSetType,
		m_EmSetTargetID,
		m_EmSetTargetNum,
		m_EmSetType1,
		m_EmSetTargetID1,
		m_EmSetTargetNum1);
}

void pEXTPanel::Save( wxCommandEvent& event )
{
// TODO: Implement Save
}

void pEXTPanel::SaveAs( wxFileDirPickerEvent& event )
{
// TODO: Implement SaveAs
}

void pEXTPanel::BossSelect(wxCommandEvent& event) {
	int ID = m_BossSwitch->GetSelection();
	ext::readBoss(
		buf,
		ID,
		m_MonsterType,
		m_SubType,
		m_Aura,
		m_RestoreNum,
		m_HpTbl,
		m_AtkTbl,
		m_StmTbl,
		m_OtherTbl,
		m_Size,
		m_SizeTbl);
}