#pragma once

#include "..\wxGUI.h"

class pEXTPanel : public EXTPanel
{
protected:
	virtual void Open( wxFileDirPickerEvent& event ) override;
	virtual void Save( wxCommandEvent& event ) override;
	virtual void SaveAs( wxFileDirPickerEvent& event ) override;
	virtual void BossSelect(wxCommandEvent& event) override;
	std::string			current;
	std::vector<char>	buf;
public:
	pEXTPanel( wxWindow* parent );
};