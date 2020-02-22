#include "pFloatTool.h"

pFloatTool::pFloatTool( wxWindow* parent )
:
FloatTool( parent )
{

}

void pFloatTool::AsHex0Change( wxCommandEvent& event ) {
	HexConvert(0, m_AsHex0);
}

void pFloatTool::AsHex1Change( wxCommandEvent& event ) {
	HexConvert(1, m_AsHex1);
}

void pFloatTool::AsHex2Change( wxCommandEvent& event ) {
	HexConvert(2, m_AsHex2);
}

void pFloatTool::AsHex3Change( wxCommandEvent& event ) {
	HexConvert(3, m_AsHex3);
}

#include <wx/string.h>
void pFloatTool::AsDecChange( wxCommandEvent& event ) {
	wxString DoubleStr;
	double asDouble;
	float asFloat;
	unsigned char *p;
	
	DoubleStr = m_AsDec->GetValue();
	DoubleStr.ToDouble(&asDouble);
	asFloat = asDouble;
	if (PreviousFloat == asFloat) return;
	PreviousFloat = asFloat;
	
	p = (unsigned char*)&asFloat;
	
	m_AsHex0->SetValue(wxString::Format("%X", p[3]));
	m_AsHex1->SetValue(wxString::Format("%X", p[2]));
	m_AsHex2->SetValue(wxString::Format("%X", p[1]));
	m_AsHex3->SetValue(wxString::Format("%X", p[0]));
	
}

void pFloatTool::HexConvert(int id, wxTextCtrl* ctrl) {
	wxString value;
	wxString resStr, a, b, c;
	unsigned char *p;
	unsigned long asHex;
	unsigned long res[3];
	unsigned char asHexRes[4];
	
	value = ctrl->GetValue();
	value.ToULong(&asHex, 16);
	if (PreviousFloatHex[id] == asHex) return;
	PreviousFloatHex[id] = asHex;
	
	if (id == 0) {
		a = m_AsHex1->GetValue();
		b = m_AsHex2->GetValue();
		c = m_AsHex3->GetValue();
		
		a.ToULong(&res[0], 16);
		b.ToULong(&res[1], 16);
		c.ToULong(&res[2], 16);
		
		asHexRes[3] = asHex;
		asHexRes[2] = res[0];
		asHexRes[1] = res[1];
		asHexRes[0] = res[2];
	}
	if (id == 1) {
		a = m_AsHex0->GetValue();
		b = m_AsHex2->GetValue();
		c = m_AsHex3->GetValue();
		
		a.ToULong(&res[0], 16);
		b.ToULong(&res[1], 16);
		c.ToULong(&res[2], 16);
		
		asHexRes[3] = res[0];
		asHexRes[2] = asHex;
		asHexRes[1] = res[1];
		asHexRes[0] = res[2];
	}
	if (id == 2) {
		a = m_AsHex0->GetValue();
		b = m_AsHex1->GetValue();
		c = m_AsHex3->GetValue();
		
		a.ToULong(&res[0], 16);
		b.ToULong(&res[1], 16);
		c.ToULong(&res[2], 16);
		
		asHexRes[3] = res[0];
		asHexRes[2] = res[1];
		asHexRes[1] = asHex;
		asHexRes[0] = res[2];
	}
	if (id == 3) {
		a = m_AsHex0->GetValue();
		b = m_AsHex1->GetValue();
		c = m_AsHex2->GetValue();
		
		a.ToULong(&res[0], 16);
		b.ToULong(&res[1], 16);
		c.ToULong(&res[2], 16);
		
		asHexRes[3] = res[0];
		asHexRes[2] = res[1];
		asHexRes[1] = res[2];
		asHexRes[0] = asHex;
	}
	
	float *f = (float*)asHexRes;
	
	resStr = wxString::Format("%f", *f);
	
	m_AsDec->SetValue(resStr);
}