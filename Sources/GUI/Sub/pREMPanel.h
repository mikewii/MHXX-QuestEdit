#pragma once
#include "..\wxGUI.h"
#include "Extention/rem.hpp"

class pREMPanel : public REMPanel
{
protected:
	virtual void OnSelection( wxCommandEvent& event ) override;
	virtual void OnCboxID(wxCommandEvent& event) override;
	virtual void OnCtrlID(wxSpinEvent& event) override;
	virtual void SaveItem(wxCommandEvent& event) override;
	virtual void Open(wxFileDirPickerEvent& event) override;
	virtual void Save(wxCommandEvent& event) override;
	virtual void SaveAs(wxFileDirPickerEvent& event) override;
	std::string	 current;
	std::vector<rewardItem_s> item;
	std::vector<rewardFlag_s> flags;
public:
	pREMPanel( wxWindow* parent );

};