#pragma once
#include "..\wxGUI.h"

class pSEMPanel : public SEMPanel
{
protected:
	virtual void Open( wxFileDirPickerEvent& event ) override;
	virtual void Save( wxCommandEvent& event ) override;
	virtual void SaveAs( wxFileDirPickerEvent& event ) override;
	std::string		current;
public:
	pSEMPanel( wxWindow* parent );

};