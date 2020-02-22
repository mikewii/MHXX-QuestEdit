#include "pSEMPanel.h"
#include "Tools/fshelp.hpp"
#include "Extention/sem.hpp"

pSEMPanel::pSEMPanel( wxWindow* parent )
:
SEMPanel( parent )
{

}

void pSEMPanel::Open( wxFileDirPickerEvent& event ) {
	std::vector<char> buf;
	
	wxString path = event.GetPath();
	current = path.mb_str().data();
	
	fshelp::ReadFile(buf, current);
	
	setEmMain_s* file = (setEmMain_s*)&buf.data()[0];
	
	m_spinCtrlRoundNo->SetValue(file->RoundNo);
	m_spinCtrlAreaNo->SetValue(file->AreaNo);
	m_PosX->SetValue(file->PosX);
	m_PosY->SetValue(file->PosY);
	m_PosZ->SetValue(file->PosZ);
	m_Angle->SetValue(file->Angle);
}

void pSEMPanel::Save( wxCommandEvent& event ) {
	if (current.empty()) return;
	
	std::vector<char> buf(sizeof(setEmMain_s));
	setEmMain_s* file = (setEmMain_s*)&buf.data()[0];
	file->Magic = SEM_MAGIC;
	file->Version = 1;
	file->RoundNo = m_spinCtrlRoundNo->GetValue();
	file->AreaNo = m_spinCtrlAreaNo->GetValue();
	file->Angle = m_Angle->GetValue();
	file->PosX = m_PosX->GetValue();
	file->PosY = m_PosY->GetValue();
	file->PosZ = m_PosZ->GetValue();
	
	fshelp::CreateFile(buf, current);
}

void pSEMPanel::SaveAs( wxFileDirPickerEvent& event )
{
// TODO: Implement SaveAs
}
