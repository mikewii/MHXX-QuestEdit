#pragma once
#include "..\wxGUI.h"
#include <wx/arrstr.h>

class pGMDStandalone : public GMDStandalone
{
protected:
	virtual void ItemSelected( wxCommandEvent& event ) override;
	virtual void SaveItem(wxCommandEvent& event) override;
	virtual void Open(wxFileDirPickerEvent& event) override;
	virtual void Save(wxCommandEvent& event) override;
	virtual void SaveAs(wxFileDirPickerEvent& event) override;
	virtual void EditFilename(wxCommandEvent& event) override;
	std::vector<int>	edited;
	int					currentLock;
	std::string			current;
	wxArrayString		names;
	wxArrayString		labels;

  public:
	pGMDStandalone( wxWindow* parent );

};