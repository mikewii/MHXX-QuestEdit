#include "pSUPPanel.h"
#include "Tools/fshelp.hpp"
#include "Tools/wxBoxHelp.hpp"

pSUPPanel::pSUPPanel( wxWindow* parent )
:
SUPPanel( parent )
{
	setItems(m_comboBoxItems);
}

void pSUPPanel::SaveItem( wxCommandEvent& event ) {
	int i = m_listBox3->GetSelection();
	
	item[i].ItemID = m_comboBoxItems->GetSelection();
	item[i].Num = m_spinCtrlNum->GetValue();
	item[i].Label = m_spinCtrlLabel->GetValue();
}

void pSUPPanel::Open( wxFileDirPickerEvent& event ) {
	wxString path = event.GetPath();
	current = path.mb_str().data();
	item.clear();
	m_listBox3->Clear();
	
	
	std::vector<char> buf;
	fshelp::ReadFile(buf, current);

	if (sup::read(buf, item)) {
		for (int i = 0; i < 40; i++) {
			wxString name = "item_";
			name << i;
			m_listBox3->Append(name);
		}
	}
}

void pSUPPanel::Save( wxCommandEvent& event ) {
	if (current.empty()) return;
	std::vector<char> buf;

	sup::save(buf, item);
	fshelp::CreateFile(buf, current);
}

void pSUPPanel::SaveAs( wxFileDirPickerEvent& event )
{
// TODO: Implement SaveAs
}

void pSUPPanel::OnSelection(wxCommandEvent& event) {
	int i = m_listBox3->GetSelection();
	
	supplyItem_s *itm = (supplyItem_s*)&item[i];
	
	
	m_comboBoxItems->SetSelection(itm->ItemID);
	m_spinCtrlID->SetValue(itm->ItemID);
	m_spinCtrlNum->SetValue(itm->Num);
	m_spinCtrlLabel->SetValue(itm->Label);
}

void pSUPPanel::OnCboxID(wxCommandEvent& event) {
	m_spinCtrlID->SetValue(m_comboBoxItems->GetSelection());
}

void pSUPPanel::OnCtrlID(wxSpinEvent& event) {
	m_comboBoxItems->SetSelection(m_spinCtrlID->GetValue());
}