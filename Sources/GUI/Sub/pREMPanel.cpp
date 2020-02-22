#include "pREMPanel.h"
#include "Tools/fshelp.hpp"
#include "Tools/wxBoxHelp.hpp"

pREMPanel::pREMPanel( wxWindow* parent )
:
REMPanel( parent )
{
	setItems(m_comboBoxItems);
}

void pREMPanel::OnSelection( wxCommandEvent& event ) {
	int i = m_listBox3->GetSelection();
	
	rewardItem_s *itm = (rewardItem_s*)&item[i];
	
	
	m_comboBoxItems->SetSelection(itm->ItemID);
	m_spinCtrlID->SetValue(itm->ItemID);
	m_spinCtrlNum->SetValue(itm->Num);
	m_spinCtrlRate->SetValue(itm->Rate);
}

void pREMPanel::OnCboxID( wxCommandEvent& event ) {
	m_spinCtrlID->SetValue(m_comboBoxItems->GetSelection());
}

void pREMPanel::OnCtrlID( wxSpinEvent& event ) {
	m_comboBoxItems->SetSelection(m_spinCtrlID->GetValue());
}

void pREMPanel::SaveItem( wxCommandEvent& event ) {
	int i = m_listBox3->GetSelection();
	
	item[i].ItemID = m_comboBoxItems->GetSelection();
	item[i].Num = m_spinCtrlNum->GetValue();
	item[i].Rate = m_spinCtrlRate->GetValue();
}

void pREMPanel::Open( wxFileDirPickerEvent& event ) {
	wxString path = event.GetPath();
	current = path.mb_str().data();
	item.clear();
	m_listBox3->Clear();
	
	
	std::vector<char> buf;
	fshelp::ReadFile(buf, current);

	if (rem::read(buf, item)) {
		wxArrayString itemslist;
		for (int i = 0; i < REM_ITEMS; i++) {
			wxString name = "item_";
			name << i;
			itemslist.push_back(name);
		}
		m_listBox3->Set(itemslist);
		
		rem::readFlag(buf, flags);
		rem_s *header = (rem_s*)&buf.data()[0];
		
		m_Flag0->SetValue(flags[0].Flag);
		m_Flag1->SetValue(flags[1].ItemNum);
		m_Flag2->SetValue(flags[2].Flag);
		m_Flag3->SetValue(flags[3].ItemNum);
		m_Flag4->SetValue(flags[4].Flag);
		m_Flag5->SetValue(flags[5].ItemNum);
		m_Flag6->SetValue(flags[6].Flag);
		m_Flag7->SetValue(flags[7].ItemNum);
		
		m_FlagNum0->SetValue(header->FlagNum[0]);
		m_FlagNum1->SetValue(header->FlagNum[1]);
		m_FlagNum2->SetValue(header->FlagNum[2]);
		m_FlagNum3->SetValue(header->FlagNum[3]);
		m_FlagNum4->SetValue(header->FlagNum[4]);
		m_FlagNum5->SetValue(header->FlagNum[5]);
		m_FlagNum6->SetValue(header->FlagNum[6]);
		m_FlagNum7->SetValue(header->FlagNum[7]);
	}
}

void pREMPanel::Save( wxCommandEvent& event ) {
	if (current.empty()) return;
	std::vector<char> buf;

	rem::save(buf, item);
	fshelp::CreateFile(buf, current);
}

void pREMPanel::SaveAs( wxFileDirPickerEvent& event )
{
// TODO: Implement SaveAs
}
