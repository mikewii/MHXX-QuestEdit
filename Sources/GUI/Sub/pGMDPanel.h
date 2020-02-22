#pragma once
#include "..\wxGUI.h"

class pGMDPanel : public GMDPanel
{
protected:
	virtual void EditFilename(wxCommandEvent& event) override;
	virtual void Open( wxFileDirPickerEvent& event ) override;
	virtual void Save( wxCommandEvent& event ) override;
	virtual void SaveAs( wxFileDirPickerEvent& event ) override;
	uint32_t	currentLock;
	std::string current;
public:
	pGMDPanel( wxWindow* parent );

};