#include "pGMDPanel.h"
#include "Tools/fshelp.hpp"
#include "Extention/gmd.hpp"

pGMDPanel::pGMDPanel( wxWindow* parent )
:
GMDPanel( parent )
{

}

void pGMDPanel::Open( wxFileDirPickerEvent& event )
{
	wxString path = event.GetPath();
	current = path.mb_str().data();
	
	std::vector<char> inBuf;
	fshelp::ReadFile(inBuf, current);
	
	wxArrayString names, labels;
	currentLock = gmd::read(names, labels, inBuf);
	
	m_textCtrlTitle->SetValue(names[0]);
	m_textCtrlClient->SetValue(names[1]);
	m_textCtrlDesc->SetValue(names[2]);
	m_textCtrlMainMon->SetValue(names[3]);
	m_textCtrlMainGoal->SetValue(names[4]);
	m_textCtrlFailure->SetValue(names[5]);
	m_textCtrlSubGoal->SetValue(names[6]);
	m_textCtrlFilename->SetValue(names[7]);
	
}

void pGMDPanel::Save( wxCommandEvent& event ) {
	if (current.empty()) return;
	
	wxArrayString names;
	names.push_back(m_textCtrlTitle->GetValue());
	names.push_back(m_textCtrlClient->GetValue());
	names.push_back(m_textCtrlDesc->GetValue());
	names.push_back(m_textCtrlMainMon->GetValue());
	names.push_back(m_textCtrlMainGoal->GetValue());
	names.push_back(m_textCtrlFailure->GetValue());
	names.push_back(m_textCtrlSubGoal->GetValue());
	names.push_back(m_textCtrlFilename->GetValue());
	
	std::vector<char> buf;
	gmd::save(names, buf, currentLock);
	
	fshelp::CreateFile(buf, current);
}

void pGMDPanel::SaveAs( wxFileDirPickerEvent& event )
{
// TODO: Implement SaveAs
}

void pGMDPanel::EditFilename(wxCommandEvent& event)
{
	bool res = event.IsChecked();
	if (res) m_textCtrlFilename->Enable();
	if (!res) m_textCtrlFilename->Disable();
}