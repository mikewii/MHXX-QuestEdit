#pragma once
#include "..\wxGUI.h"
#include <string>
#include "Extention/sup.hpp"
#include <vector>

class pSUPPanel : public SUPPanel
{
protected:
	virtual void SaveItem( wxCommandEvent& event ) override;
	virtual void Open(wxFileDirPickerEvent& event) override;
	virtual void Save(wxCommandEvent& event) override;
	virtual void SaveAs(wxFileDirPickerEvent& event) override;
	virtual void OnSelection(wxCommandEvent& event) override;
	virtual void OnCboxID(wxCommandEvent& event) override;
	virtual void OnCtrlID(wxSpinEvent& event) override;
	std::string	 current;
	std::vector<supplyItem_s> item;
public:
	pSUPPanel( wxWindow* parent );

};