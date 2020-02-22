#pragma once
#include "..\wxGUI.h"

class pFloatTool : public FloatTool
{
protected:
	virtual void AsHex0Change( wxCommandEvent& event ) override;
	virtual void AsHex1Change( wxCommandEvent& event ) override;
	virtual void AsHex2Change( wxCommandEvent& event ) override;
	virtual void AsHex3Change( wxCommandEvent& event ) override;
	virtual void AsDecChange( wxCommandEvent& event ) override;
	virtual void HexConvert(int id, wxTextCtrl* ctrl);
	unsigned char	PreviousFloatHex[4];
	float			PreviousFloat;
public:
	pFloatTool( wxWindow* parent );

};
