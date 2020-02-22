#include "pGMDStandalone.h"
#include "Tools/fshelp.hpp"
#include "Tools/buffer.hpp"
#include "Extention/gmd.hpp"

pGMDStandalone::pGMDStandalone( wxWindow* parent )
:
GMDStandalone( parent )
{

}

void pGMDStandalone::ItemSelected( wxCommandEvent& event ){
	int i = m_listBox2->GetSelection();
	m_textCtrl24->SetValue(names[i]);
}

void pGMDStandalone::SaveItem( wxCommandEvent& event ) {
	int i = m_listBox2->GetSelection();
	names[i] = m_textCtrl24->GetValue();
	
	for (int p = 0; p < edited.size(); p++) { // check if edited ID already in buffer
		if(edited[p] == i) return;
	}
	edited.push_back(i);
}

void pGMDStandalone::Open( wxFileDirPickerEvent& event ) {
	names.Clear();
	labels.Clear();
	edited.clear();
	m_listBox2->Clear();
	
	std::vector<char> buf;
	wxString path = event.GetPath();
	current = path.mb_str().data();
	
	fshelp::ReadFile(buf, current);
	currentLock = gmd::read(names, labels, buf);
	bool adv = false;
	if (!labels.IsEmpty()) adv = true;
	if (!names.IsEmpty())
	{
		for (int i = 0; i < names.Count() - 1; i++) {
			if (!adv) {
				wxString item = "item_";
				item << i;
				m_listBox2->Append(item);
			} else {
				m_listBox2->Append(labels[i]);
			}
		}
		m_textCtrlFilename->SetValue(names[names.Count() - 1]);
	}
	
}

void pGMDStandalone::Save( wxCommandEvent& event ) {
	if (current.empty()) return;
	std::vector<char> namesBuf;;
	if (m_checkBoxItemData->IsChecked()) {
		//wxArrayString temp;
		//for (int i = 0; i < names.Count(); i++) {
		//	if ((i % 2) == 0) {
		//		temp.push_back(names[i]);
		//	}
		//}
		
		gmd::save(names, namesBuf, currentLock, true);
		fshelp::CreateFile(namesBuf, current + ".txt");
		
		if (!labels.IsEmpty()) {
			std::vector<char> labelsBuf;
			gmd::save(labels,
				labelsBuf,
				currentLock,
				true);
			fshelp::CreateFile(labelsBuf, current + ".labels.txt");
		}
		return;
	}
	
	gmd::save(names, namesBuf, currentLock);
	fshelp::CreateFile(namesBuf, current);
}

void pGMDStandalone::SaveAs( wxFileDirPickerEvent& event )
{
// TODO: Implement SaveAs
}

void pGMDStandalone::EditFilename(wxCommandEvent& event) {
	bool res = event.IsChecked();
	if (res) m_textCtrlFilename->Enable();
	if (!res) m_textCtrlFilename->Disable();
}