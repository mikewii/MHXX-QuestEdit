///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxGUI.h"

///////////////////////////////////////////////////////////////////////////

MainMenu::MainMenu( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );

	m_menubar1 = new wxMenuBar( 0 );
	m_menu1 = new wxMenu();
	wxMenuItem* m_menuItem1;
	m_menuItem1 = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("Float Tool") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuItem1 );

	m_menubar1->Append( m_menu1, wxT("Tools") );

	this->SetMenuBar( m_menubar1 );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer23;
	fgSizer23 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer23->SetFlexibleDirection( wxBOTH );
	fgSizer23->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED|wxTAB_TRAVERSAL );
	m_panel1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_staticText2 = new wxStaticText( m_panel1, wxID_ANY, wxT(".arc"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer4->Add( m_staticText2, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer21;
	fgSizer21 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer21->SetFlexibleDirection( wxBOTH );
	fgSizer21->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button2 = new wxButton( m_panel1, wxID_ANY, wxT("Decrypt"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer21->Add( m_button2, 0, wxALL, 5 );

	m_filePicker1 = new wxFilePickerCtrl( m_panel1, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.arc*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer21->Add( m_filePicker1, 0, wxALL, 5 );


	fgSizer2->Add( fgSizer21, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button3 = new wxButton( m_panel1, wxID_ANY, wxT("Encrypt"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_button3, 0, wxALL, 5 );

	m_dirPickerEnc = new wxDirPickerCtrl( m_panel1, wxID_ANY, wxEmptyString, wxT("Select a folder"), wxDefaultPosition, wxDefaultSize, wxDIRP_CHANGE_DIR|wxDIRP_DIR_MUST_EXIST );
	fgSizer3->Add( m_dirPickerEnc, 0, wxALL, 5 );


	fgSizer2->Add( fgSizer3, 1, wxEXPAND, 5 );


	bSizer4->Add( fgSizer2, 1, wxEXPAND, 5 );


	m_panel1->SetSizer( bSizer4 );
	m_panel1->Layout();
	bSizer4->Fit( m_panel1 );
	fgSizer23->Add( m_panel1, 0, wxALL, 5 );

	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED|wxTAB_TRAVERSAL );
	m_panel2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_staticText21 = new wxStaticText( m_panel2, wxID_ANY, wxT("zlib stream file:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	bSizer3->Add( m_staticText21, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer5;
	fgSizer5 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer5->SetFlexibleDirection( wxBOTH );
	fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_filePicker5 = new wxFilePickerCtrl( m_panel2, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer5->Add( m_filePicker5, 0, wxALL, 5 );


	fgSizer4->Add( fgSizer5, 1, wxEXPAND, 5 );


	bSizer3->Add( fgSizer4, 1, wxEXPAND, 5 );


	m_panel2->SetSizer( bSizer3 );
	m_panel2->Layout();
	bSizer3->Fit( m_panel2 );
	fgSizer23->Add( m_panel2, 0, wxALL, 5 );

	m_panel21 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED|wxTAB_TRAVERSAL );
	m_panel21->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );

	m_staticText211 = new wxStaticText( m_panel21, wxID_ANY, wxT("generate keys"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText211->Wrap( -1 );
	bSizer31->Add( m_staticText211, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer41;
	fgSizer41 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer41->SetFlexibleDirection( wxBOTH );
	fgSizer41->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer51;
	fgSizer51 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer51->SetFlexibleDirection( wxBOTH );
	fgSizer51->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_filePicker51 = new wxFilePickerCtrl( m_panel21, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer51->Add( m_filePicker51, 0, wxALL, 5 );


	fgSizer41->Add( fgSizer51, 1, wxEXPAND, 5 );


	bSizer31->Add( fgSizer41, 1, wxEXPAND, 5 );


	m_panel21->SetSizer( bSizer31 );
	m_panel21->Layout();
	bSizer31->Fit( m_panel21 );
	fgSizer23->Add( m_panel21, 0, wxALL, 5 );


	bSizer1->Add( fgSizer23, 0, 0, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer24;
	fgSizer24 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer24->SetFlexibleDirection( wxBOTH );
	fgSizer24->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_panel3 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED|wxTAB_TRAVERSAL );
	m_panel3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxVERTICAL );

	m_staticText3 = new wxStaticText( m_panel3, wxID_ANY, wxT("System save file"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer41->Add( m_staticText3, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer6;
	fgSizer6 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer6->SetFlexibleDirection( wxBOTH );
	fgSizer6->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer7;
	fgSizer7 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer7->SetFlexibleDirection( wxBOTH );
	fgSizer7->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_filePicker6 = new wxFilePickerCtrl( m_panel3, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer7->Add( m_filePicker6, 0, wxALL, 5 );

	m_gauge1 = new wxGauge( m_panel3, wxID_ANY, 100, wxDefaultPosition, wxSize( 50,-1 ), wxGA_HORIZONTAL );
	m_gauge1->SetValue( 0 );
	fgSizer7->Add( m_gauge1, 0, wxALL, 5 );


	fgSizer6->Add( fgSizer7, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer13;
	fgSizer13 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer13->SetFlexibleDirection( wxBOTH );
	fgSizer13->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button4 = new wxButton( m_panel3, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer13->Add( m_button4, 0, wxALL, 5 );


	fgSizer6->Add( fgSizer13, 1, wxEXPAND, 5 );


	bSizer41->Add( fgSizer6, 1, wxEXPAND, 5 );


	m_panel3->SetSizer( bSizer41 );
	m_panel3->Layout();
	bSizer41->Fit( m_panel3 );
	fgSizer24->Add( m_panel3, 0, wxALL, 5 );

	m_panel5 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED|wxTAB_TRAVERSAL );
	m_panel5->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	m_staticText5 = new wxStaticText( m_panel5, wxID_ANY, wxT("Save Slot operations"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer5->Add( m_staticText5, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer12;
	fgSizer12 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer12->SetFlexibleDirection( wxBOTH );
	fgSizer12->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer10;
	fgSizer10 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer10->SetFlexibleDirection( wxBOTH );
	fgSizer10->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer8;
	fgSizer8 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer8->SetFlexibleDirection( wxBOTH );
	fgSizer8->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText7 = new wxStaticText( m_panel5, wxID_ANY, wxT("Extract:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer8->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSaveSlotExtChoices[] = { wxT("1"), wxT("2"), wxT("3") };
	int m_choiceSaveSlotExtNChoices = sizeof( m_choiceSaveSlotExtChoices ) / sizeof( wxString );
	m_choiceSaveSlotExt = new wxChoice( m_panel5, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSaveSlotExtNChoices, m_choiceSaveSlotExtChoices, 0 );
	m_choiceSaveSlotExt->SetSelection( 0 );
	fgSizer8->Add( m_choiceSaveSlotExt, 0, wxALL, 5 );

	m_button31 = new wxButton( m_panel5, wxID_ANY, wxT("Extract"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer8->Add( m_button31, 0, wxALL, 5 );


	fgSizer10->Add( fgSizer8, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer9;
	fgSizer9 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer9->SetFlexibleDirection( wxBOTH );
	fgSizer9->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText6 = new wxStaticText( m_panel5, wxID_ANY, wxT("Insert:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer9->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSaveSlotInsChoices[] = { wxT("1"), wxT("2"), wxT("3") };
	int m_choiceSaveSlotInsNChoices = sizeof( m_choiceSaveSlotInsChoices ) / sizeof( wxString );
	m_choiceSaveSlotIns = new wxChoice( m_panel5, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSaveSlotInsNChoices, m_choiceSaveSlotInsChoices, 0 );
	m_choiceSaveSlotIns->SetSelection( 0 );
	fgSizer9->Add( m_choiceSaveSlotIns, 0, wxALL, 5 );

	m_filePickerSaveSlot = new wxFilePickerCtrl( m_panel5, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer9->Add( m_filePickerSaveSlot, 0, wxALL, 5 );


	fgSizer10->Add( fgSizer9, 1, wxEXPAND, 5 );


	fgSizer12->Add( fgSizer10, 1, wxEXPAND, 5 );


	bSizer5->Add( fgSizer12, 1, wxEXPAND, 5 );


	m_panel5->SetSizer( bSizer5 );
	m_panel5->Layout();
	bSizer5->Fit( m_panel5 );
	fgSizer24->Add( m_panel5, 0, wxALL, 5 );


	bSizer10->Add( fgSizer24, 0, 0, 5 );

	m_panel6 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED|wxTAB_TRAVERSAL );
	m_panel6->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	m_staticText9 = new wxStaticText( m_panel6, wxID_ANY, wxT("Quest operations"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer6->Add( m_staticText9, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer121;
	fgSizer121 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer121->SetFlexibleDirection( wxBOTH );
	fgSizer121->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer101;
	fgSizer101 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer101->SetFlexibleDirection( wxBOTH );
	fgSizer101->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer81;
	fgSizer81 = new wxFlexGridSizer( 0, 6, 0, 0 );
	fgSizer81->SetFlexibleDirection( wxBOTH );
	fgSizer81->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText71 = new wxStaticText( m_panel6, wxID_ANY, wxT("Extract:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	fgSizer81->Add( m_staticText71, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlQuestExt = new wxSpinCtrl( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 999, 0 );
	fgSizer81->Add( m_spinCtrlQuestExt, 0, wxALL, 5 );

	m_button311 = new wxButton( m_panel6, wxID_ANY, wxT("Extract"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer81->Add( m_button311, 0, wxALL, 5 );

	m_checkBoxAsArc = new wxCheckBox( m_panel6, wxID_ANY, wxT("as .arc"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer81->Add( m_checkBoxAsArc, 0, wxALL, 5 );

	m_checkBoxTrim = new wxCheckBox( m_panel6, wxID_ANY, wxT("trim"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer81->Add( m_checkBoxTrim, 0, wxALL, 5 );

	m_checkBoxKey = new wxCheckBox( m_panel6, wxID_ANY, wxT("with key"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer81->Add( m_checkBoxKey, 0, wxALL, 5 );


	fgSizer101->Add( fgSizer81, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer91;
	fgSizer91 = new wxFlexGridSizer( 0, 7, 0, 0 );
	fgSizer91->SetFlexibleDirection( wxBOTH );
	fgSizer91->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText61 = new wxStaticText( m_panel6, wxID_ANY, wxT("Insert:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	fgSizer91->Add( m_staticText61, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlQuestIns = new wxSpinCtrl( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 999, 0 );
	fgSizer91->Add( m_spinCtrlQuestIns, 0, wxALL, 5 );

	m_filePickerQuestIns = new wxFilePickerCtrl( m_panel6, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer91->Add( m_filePickerQuestIns, 0, wxALL, 5 );

	m_staticline9 = new wxStaticLine( m_panel6, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer91->Add( m_staticline9, 0, wxEXPAND | wxALL, 5 );

	m_staticText75 = new wxStaticText( m_panel6, wxID_ANY, wxT("Insert Key:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText75->Wrap( -1 );
	fgSizer91->Add( m_staticText75, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePicker16 = new wxFilePickerCtrl( m_panel6, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer91->Add( m_filePicker16, 0, wxALL, 5 );


	fgSizer101->Add( fgSizer91, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer157;
	fgSizer157 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer157->SetFlexibleDirection( wxBOTH );
	fgSizer157->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button15 = new wxButton( m_panel6, wxID_ANY, wxT("Fix Flags"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer157->Add( m_button15, 0, wxALL, 5 );

	m_button18 = new wxButton( m_panel6, wxID_ANY, wxT("Extract Signs"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer157->Add( m_button18, 0, wxALL, 5 );

	m_button19 = new wxButton( m_panel6, wxID_ANY, wxT("Extract All (MHGU)"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer157->Add( m_button19, 0, wxALL, 5 );


	fgSizer101->Add( fgSizer157, 1, wxEXPAND, 5 );


	fgSizer121->Add( fgSizer101, 1, wxEXPAND, 5 );


	bSizer6->Add( fgSizer121, 1, wxEXPAND, 5 );


	m_panel6->SetSizer( bSizer6 );
	m_panel6->Layout();
	bSizer6->Fit( m_panel6 );
	bSizer10->Add( m_panel6, 0, wxALL, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );


	bSizer10->Add( bSizer17, 0, 0, 5 );

	wxFlexGridSizer* fgSizer162;
	fgSizer162 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer162->SetFlexibleDirection( wxBOTH );
	fgSizer162->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_panel17 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED|wxTAB_TRAVERSAL );
	m_panel17->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxVERTICAL );

	m_staticText37 = new wxStaticText( m_panel17, wxID_ANY, wxT("Standalone tools"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText37->Wrap( -1 );
	bSizer18->Add( m_staticText37, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer56;
	fgSizer56 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer56->SetFlexibleDirection( wxBOTH );
	fgSizer56->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_panel18 = new wxPanel( m_panel17, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED|wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );

	m_staticText38 = new wxStaticText( m_panel18, wxID_ANY, wxT(".gmd"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText38->Wrap( -1 );
	bSizer19->Add( m_staticText38, 0, wxALL, 5 );

	m_button9 = new wxButton( m_panel18, wxID_ANY, wxT("Open"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_button9, 0, wxALL, 5 );


	m_panel18->SetSizer( bSizer19 );
	m_panel18->Layout();
	bSizer19->Fit( m_panel18 );
	fgSizer56->Add( m_panel18, 1, wxEXPAND | wxALL, 5 );

	m_panel181 = new wxPanel( m_panel17, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED|wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer191;
	bSizer191 = new wxBoxSizer( wxVERTICAL );

	m_staticText381 = new wxStaticText( m_panel181, wxID_ANY, wxT("Quest Editor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText381->Wrap( -1 );
	bSizer191->Add( m_staticText381, 0, wxALL, 5 );

	m_button91 = new wxButton( m_panel181, wxID_ANY, wxT("Open"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer191->Add( m_button91, 0, wxALL, 5 );


	m_panel181->SetSizer( bSizer191 );
	m_panel181->Layout();
	bSizer191->Fit( m_panel181 );
	fgSizer56->Add( m_panel181, 1, wxEXPAND | wxALL, 5 );


	bSizer18->Add( fgSizer56, 1, wxEXPAND, 5 );


	m_panel17->SetSizer( bSizer18 );
	m_panel17->Layout();
	bSizer18->Fit( m_panel17 );
	fgSizer162->Add( m_panel17, 1, wxEXPAND | wxALL, 5 );

	m_panel22 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED|wxTAB_TRAVERSAL );
	m_panel22->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );

	m_staticText212 = new wxStaticText( m_panel22, wxID_ANY, wxT("quest rebuild sim"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText212->Wrap( -1 );
	bSizer32->Add( m_staticText212, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer42;
	fgSizer42 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer42->SetFlexibleDirection( wxBOTH );
	fgSizer42->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer52;
	fgSizer52 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer52->SetFlexibleDirection( wxBOTH );
	fgSizer52->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_filePicker52 = new wxFilePickerCtrl( m_panel22, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer52->Add( m_filePicker52, 0, wxALL, 5 );

	m_checkBoxMHXX = new wxCheckBox( m_panel22, wxID_ANY, wxT("mhxx"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer52->Add( m_checkBoxMHXX, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	fgSizer42->Add( fgSizer52, 1, wxEXPAND, 5 );


	bSizer32->Add( fgSizer42, 1, wxEXPAND, 5 );


	m_panel22->SetSizer( bSizer32 );
	m_panel22->Layout();
	bSizer32->Fit( m_panel22 );
	fgSizer162->Add( m_panel22, 1, wxEXPAND | wxALL, 5 );


	bSizer10->Add( fgSizer162, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer10, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainMenu::NewFloatTool ), this, m_menuItem1->GetId());
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::ArcDec ), NULL, this );
	m_filePicker1->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::ArcDecompress ), NULL, this );
	m_button3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::ArcEnc ), NULL, this );
	m_dirPickerEnc->Connect( wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::ArcCompress ), NULL, this );
	m_filePicker5->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::ZDecompress ), NULL, this );
	m_filePicker51->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::GenerateKeys ), NULL, this );
	m_filePicker6->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::OpenSystemSave ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::WriteSystemSave ), NULL, this );
	m_button31->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::SaveSlotExtract ), NULL, this );
	m_filePickerSaveSlot->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::SaveSlotInsert ), NULL, this );
	m_button311->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::QuestExtract ), NULL, this );
	m_filePickerQuestIns->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::QuestInsert ), NULL, this );
	m_filePicker16->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::QuestInsertKey ), NULL, this );
	m_button15->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::OnFixQuestFlags ), NULL, this );
	m_button18->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::QuestExtractSignsAll ), NULL, this );
	m_button19->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::QuestExtractAllMHGU ), NULL, this );
	m_button9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::NewGMD ), NULL, this );
	m_button91->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::NewQuestMenu ), NULL, this );
	m_filePicker52->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::SimulationRebuildQuestForMHGU ), NULL, this );
}

MainMenu::~MainMenu()
{
	// Disconnect Events
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::ArcDec ), NULL, this );
	m_filePicker1->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::ArcDecompress ), NULL, this );
	m_button3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::ArcEnc ), NULL, this );
	m_dirPickerEnc->Disconnect( wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::ArcCompress ), NULL, this );
	m_filePicker5->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::ZDecompress ), NULL, this );
	m_filePicker51->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::GenerateKeys ), NULL, this );
	m_filePicker6->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::OpenSystemSave ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::WriteSystemSave ), NULL, this );
	m_button31->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::SaveSlotExtract ), NULL, this );
	m_filePickerSaveSlot->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::SaveSlotInsert ), NULL, this );
	m_button311->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::QuestExtract ), NULL, this );
	m_filePickerQuestIns->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::QuestInsert ), NULL, this );
	m_filePicker16->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::QuestInsertKey ), NULL, this );
	m_button15->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::OnFixQuestFlags ), NULL, this );
	m_button18->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::QuestExtractSignsAll ), NULL, this );
	m_button19->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::QuestExtractAllMHGU ), NULL, this );
	m_button9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::NewGMD ), NULL, this );
	m_button91->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainMenu::NewQuestMenu ), NULL, this );
	m_filePicker52->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MainMenu::SimulationRebuildQuestForMHGU ), NULL, this );

}

QuestMenu::QuestMenu( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	m_notebook = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_notebook->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );


	bSizer7->Add( m_notebook, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer7 );
	this->Layout();

	this->Centre( wxBOTH );
}

QuestMenu::~QuestMenu()
{
}

GMDStandalone::GMDStandalone( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );

	m_splitter2 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_splitter2->Connect( wxEVT_IDLE, wxIdleEventHandler( GMDStandalone::m_splitter2OnIdle ), NULL, this );

	m_panel19 = new wxPanel( m_splitter2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );

	m_listBox2 = new wxListBox( m_panel19, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_ALWAYS_SB );
	bSizer21->Add( m_listBox2, 1, wxALL|wxEXPAND, 5 );


	m_panel19->SetSizer( bSizer21 );
	m_panel19->Layout();
	bSizer21->Fit( m_panel19 );
	m_panel20 = new wxPanel( m_splitter2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxVERTICAL );

	m_textCtrl24 = new wxTextCtrl( m_panel20, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	bSizer22->Add( m_textCtrl24, 1, wxALL|wxEXPAND, 5 );

	m_button10 = new wxButton( m_panel20, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_button10, 0, wxALL, 5 );


	m_panel20->SetSizer( bSizer22 );
	m_panel20->Layout();
	bSizer22->Fit( m_panel20 );
	m_splitter2->SplitVertically( m_panel19, m_panel20, 200 );
	bSizer20->Add( m_splitter2, 1, wxEXPAND, 5 );

	m_staticline12 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer20->Add( m_staticline12, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );

	wxFlexGridSizer* fgSizer64;
	fgSizer64 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer64->SetFlexibleDirection( wxBOTH );
	fgSizer64->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_textCtrlFilename = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	m_textCtrlFilename->Enable( false );

	fgSizer64->Add( m_textCtrlFilename, 0, wxALL, 5 );

	m_checkBoxFilenameEdit = new wxCheckBox( this, wxID_ANY, wxT("Edit"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer64->Add( m_checkBoxFilenameEdit, 0, wxALL, 5 );


	bSizer20->Add( fgSizer64, 0, 0, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer52;
	fgSizer52 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer52->SetFlexibleDirection( wxBOTH );
	fgSizer52->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer54;
	fgSizer54 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer54->SetFlexibleDirection( wxBOTH );
	fgSizer54->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("Open:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	fgSizer54->Add( m_staticText36, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePicker8 = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer54->Add( m_filePicker8, 0, wxALL, 5 );


	fgSizer52->Add( fgSizer54, 1, wxEXPAND, 5 );

	m_staticline7 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer52->Add( m_staticline7, 0, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer53;
	fgSizer53 = new wxFlexGridSizer( 0, 10, 0, 0 );
	fgSizer53->SetFlexibleDirection( wxBOTH );
	fgSizer53->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer53->Add( m_buttonSave, 0, wxALL, 5 );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("Save as:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	fgSizer53->Add( m_staticText35, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePickerSaveAs = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Save as"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_SAVE|wxFLP_SMALL );
	fgSizer53->Add( m_filePickerSaveAs, 0, wxALL, 5 );

	m_checkBoxItemData = new wxCheckBox( this, wxID_ANY, wxT("itemData"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer53->Add( m_checkBoxItemData, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	fgSizer52->Add( fgSizer53, 1, wxEXPAND, 5 );


	bSizer16->Add( fgSizer52, 1, wxEXPAND, 5 );


	bSizer20->Add( bSizer16, 0, 0, 5 );


	this->SetSizer( bSizer20 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_listBox2->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( GMDStandalone::ItemSelected ), NULL, this );
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GMDStandalone::SaveItem ), NULL, this );
	m_checkBoxFilenameEdit->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GMDStandalone::EditFilename ), NULL, this );
	m_filePicker8->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( GMDStandalone::Open ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GMDStandalone::Save ), NULL, this );
	m_filePickerSaveAs->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( GMDStandalone::SaveAs ), NULL, this );
}

GMDStandalone::~GMDStandalone()
{
	// Disconnect Events
	m_listBox2->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( GMDStandalone::ItemSelected ), NULL, this );
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GMDStandalone::SaveItem ), NULL, this );
	m_checkBoxFilenameEdit->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GMDStandalone::EditFilename ), NULL, this );
	m_filePicker8->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( GMDStandalone::Open ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GMDStandalone::Save ), NULL, this );
	m_filePickerSaveAs->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( GMDStandalone::SaveAs ), NULL, this );

}

FloatTool::FloatTool( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );

	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxVERTICAL );

	m_staticText157 = new wxStaticText( this, wxID_ANY, wxT("HEX:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText157->Wrap( -1 );
	bSizer56->Add( m_staticText157, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizerAsHex;
	fgSizerAsHex = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerAsHex->SetFlexibleDirection( wxBOTH );
	fgSizerAsHex->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText159 = new wxStaticText( this, wxID_ANY, wxT("0x"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText159->Wrap( -1 );
	fgSizerAsHex->Add( m_staticText159, 0, wxALIGN_CENTER_VERTICAL|wxALL|wxALIGN_RIGHT, 5 );

	m_AsHex0 = new wxTextCtrl( this, wxID_ANY, wxT("3F"), wxDefaultPosition, wxSize( 30,-1 ), 0 );
	#ifdef __WXGTK__
	if ( !m_AsHex0->HasFlag( wxTE_MULTILINE ) )
	{
	m_AsHex0->SetMaxLength( 2 );
	}
	#else
	m_AsHex0->SetMaxLength( 2 );
	#endif
	fgSizerAsHex->Add( m_AsHex0, 0, wxALL, 5 );

	m_AsHex1 = new wxTextCtrl( this, wxID_ANY, wxT("80"), wxDefaultPosition, wxSize( 30,-1 ), 0 );
	#ifdef __WXGTK__
	if ( !m_AsHex1->HasFlag( wxTE_MULTILINE ) )
	{
	m_AsHex1->SetMaxLength( 2 );
	}
	#else
	m_AsHex1->SetMaxLength( 2 );
	#endif
	fgSizerAsHex->Add( m_AsHex1, 0, wxALL, 5 );

	m_AsHex2 = new wxTextCtrl( this, wxID_ANY, wxT("00"), wxDefaultPosition, wxSize( 30,-1 ), 0 );
	#ifdef __WXGTK__
	if ( !m_AsHex2->HasFlag( wxTE_MULTILINE ) )
	{
	m_AsHex2->SetMaxLength( 2 );
	}
	#else
	m_AsHex2->SetMaxLength( 2 );
	#endif
	fgSizerAsHex->Add( m_AsHex2, 0, wxALL, 5 );

	m_AsHex3 = new wxTextCtrl( this, wxID_ANY, wxT("00"), wxDefaultPosition, wxSize( 30,-1 ), 0 );
	#ifdef __WXGTK__
	if ( !m_AsHex3->HasFlag( wxTE_MULTILINE ) )
	{
	m_AsHex3->SetMaxLength( 2 );
	}
	#else
	m_AsHex3->SetMaxLength( 2 );
	#endif
	fgSizerAsHex->Add( m_AsHex3, 0, wxALL, 5 );


	bSizer56->Add( fgSizerAsHex, 0, 0, 5 );


	bSizer55->Add( bSizer56, 0, wxEXPAND, 5 );

	m_staticline16 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer55->Add( m_staticline16, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );

	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxVERTICAL );

	m_staticText158 = new wxStaticText( this, wxID_ANY, wxT("DEC:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText158->Wrap( -1 );
	bSizer57->Add( m_staticText158, 0, wxALL, 5 );

	m_AsDec = new wxTextCtrl( this, wxID_ANY, wxT("1.5"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer57->Add( m_AsDec, 0, wxALL, 5 );


	bSizer55->Add( bSizer57, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer55 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_AsHex0->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FloatTool::AsHex0Change ), NULL, this );
	m_AsHex1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FloatTool::AsHex1Change ), NULL, this );
	m_AsHex2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FloatTool::AsHex2Change ), NULL, this );
	m_AsHex3->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FloatTool::AsHex3Change ), NULL, this );
	m_AsDec->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FloatTool::AsDecChange ), NULL, this );
}

FloatTool::~FloatTool()
{
	// Disconnect Events
	m_AsHex0->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FloatTool::AsHex0Change ), NULL, this );
	m_AsHex1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FloatTool::AsHex1Change ), NULL, this );
	m_AsHex2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FloatTool::AsHex2Change ), NULL, this );
	m_AsHex3->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FloatTool::AsHex3Change ), NULL, this );
	m_AsDec->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FloatTool::AsDecChange ), NULL, this );

}

GMDPanel::GMDPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer55;
	fgSizer55 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer55->SetFlexibleDirection( wxBOTH );
	fgSizer55->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_textCtrlFilename = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), 0 );
	m_textCtrlFilename->Enable( false );

	fgSizer55->Add( m_textCtrlFilename, 0, wxALL, 5 );

	m_checkBoxFilenameEdit = new wxCheckBox( this, wxID_ANY, wxT("edit"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer55->Add( m_checkBoxFilenameEdit, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer9->Add( fgSizer55, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTop;
	fgSizerTop = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerTop->SetFlexibleDirection( wxBOTH );
	fgSizerTop->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerTitle;
	fgSizerTitle = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerTitle->SetFlexibleDirection( wxBOTH );
	fgSizerTitle->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("Title:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	fgSizerTitle->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrlTitle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 150,-1 ), 0 );
	fgSizerTitle->Add( m_textCtrlTitle, 0, wxALL, 5 );


	fgSizerTop->Add( fgSizerTitle, 0, 0, 5 );

	wxFlexGridSizer* fgSizerClient;
	fgSizerClient = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerClient->SetFlexibleDirection( wxBOTH );
	fgSizerClient->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("Client:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	fgSizerClient->Add( m_staticText14, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrlClient = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 150,-1 ), 0 );
	fgSizerClient->Add( m_textCtrlClient, 0, wxALL, 5 );


	fgSizerTop->Add( fgSizerClient, 0, 0, 5 );


	bSizer9->Add( fgSizerTop, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerMid;
	fgSizerMid = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerMid->SetFlexibleDirection( wxBOTH );
	fgSizerMid->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerMainGoal;
	fgSizerMainGoal = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerMainGoal->SetFlexibleDirection( wxBOTH );
	fgSizerMainGoal->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Main Goal:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	fgSizerMainGoal->Add( m_staticText15, 0, wxALL, 5 );

	m_textCtrlMainGoal = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 180,40 ), wxTE_MULTILINE|wxTE_NO_VSCROLL );
	fgSizerMainGoal->Add( m_textCtrlMainGoal, 0, wxALL, 5 );


	fgSizerMid->Add( fgSizerMainGoal, 0, wxALIGN_RIGHT, 5 );

	wxFlexGridSizer* fgSizerSubGoal;
	fgSizerSubGoal = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSubGoal->SetFlexibleDirection( wxBOTH );
	fgSizerSubGoal->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Sub Goal:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	fgSizerSubGoal->Add( m_staticText16, 0, wxALL, 5 );

	m_textCtrlSubGoal = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 180,40 ), wxTE_MULTILINE|wxTE_NO_VSCROLL );
	fgSizerSubGoal->Add( m_textCtrlSubGoal, 0, wxALL, 5 );


	fgSizerMid->Add( fgSizerSubGoal, 0, wxALIGN_RIGHT, 5 );

	wxFlexGridSizer* fgSizerMainMonster;
	fgSizerMainMonster = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerMainMonster->SetFlexibleDirection( wxBOTH );
	fgSizerMainMonster->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Main Monster:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	fgSizerMainMonster->Add( m_staticText17, 0, wxALL, 5 );

	m_textCtrlMainMon = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 180,40 ), wxTE_MULTILINE|wxTE_NO_VSCROLL );
	fgSizerMainMonster->Add( m_textCtrlMainMon, 0, wxALL, 5 );


	fgSizerMid->Add( fgSizerMainMonster, 0, wxALIGN_RIGHT, 5 );

	wxFlexGridSizer* fgSizerFailure;
	fgSizerFailure = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerFailure->SetFlexibleDirection( wxBOTH );
	fgSizerFailure->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("Failure:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	fgSizerFailure->Add( m_staticText18, 0, wxALL, 5 );

	m_textCtrlFailure = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 180,40 ), wxTE_MULTILINE|wxTE_NO_VSCROLL );
	fgSizerFailure->Add( m_textCtrlFailure, 0, wxALL, 5 );


	fgSizerMid->Add( fgSizerFailure, 0, wxALIGN_RIGHT, 5 );


	bSizer9->Add( fgSizerMid, 0, wxEXPAND, 5 );

	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer9->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizerBot;
	fgSizerBot = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerBot->SetFlexibleDirection( wxBOTH );
	fgSizerBot->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("Description:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	fgSizerBot->Add( m_staticText19, 0, wxALL, 5 );

	m_textCtrlDesc = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 300,120 ), wxTE_MULTILINE|wxTE_NO_VSCROLL );
	fgSizerBot->Add( m_textCtrlDesc, 0, wxALL, 5 );


	bSizer9->Add( fgSizerBot, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	m_staticline6 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer16->Add( m_staticline6, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );

	wxFlexGridSizer* fgSizer52;
	fgSizer52 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer52->SetFlexibleDirection( wxBOTH );
	fgSizer52->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer54;
	fgSizer54 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer54->SetFlexibleDirection( wxBOTH );
	fgSizer54->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("Open:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	fgSizer54->Add( m_staticText36, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePicker8 = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer54->Add( m_filePicker8, 0, wxALL, 5 );


	fgSizer52->Add( fgSizer54, 1, wxEXPAND, 5 );

	m_staticline7 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer52->Add( m_staticline7, 0, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer53;
	fgSizer53 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer53->SetFlexibleDirection( wxBOTH );
	fgSizer53->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer53->Add( m_buttonSave, 0, wxALL, 5 );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("Save as:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	fgSizer53->Add( m_staticText35, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePickerSaveAs = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Save as"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_SAVE|wxFLP_SMALL );
	fgSizer53->Add( m_filePickerSaveAs, 0, wxALL, 5 );


	fgSizer52->Add( fgSizer53, 1, wxEXPAND, 5 );


	bSizer16->Add( fgSizer52, 1, wxEXPAND, 5 );


	bSizer9->Add( bSizer16, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer9 );
	this->Layout();

	// Connect Events
	m_checkBoxFilenameEdit->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GMDPanel::EditFilename ), NULL, this );
	m_filePicker8->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( GMDPanel::Open ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GMDPanel::Save ), NULL, this );
	m_filePickerSaveAs->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( GMDPanel::SaveAs ), NULL, this );
}

GMDPanel::~GMDPanel()
{
	// Disconnect Events
	m_checkBoxFilenameEdit->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GMDPanel::EditFilename ), NULL, this );
	m_filePicker8->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( GMDPanel::Open ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GMDPanel::Save ), NULL, this );
	m_filePickerSaveAs->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( GMDPanel::SaveAs ), NULL, this );

}

SUPPanel::SUPPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxVERTICAL );

	m_splitter3 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_splitter3->Connect( wxEVT_IDLE, wxIdleEventHandler( SUPPanel::m_splitter3OnIdle ), NULL, this );

	m_panel24 = new wxPanel( m_splitter3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxVERTICAL );

	m_listBox3 = new wxListBox( m_panel24, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	bSizer29->Add( m_listBox3, 1, wxALL|wxEXPAND, 5 );


	m_panel24->SetSizer( bSizer29 );
	m_panel24->Layout();
	bSizer29->Fit( m_panel24 );
	m_panel25 = new wxPanel( m_splitter3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );

	m_comboBoxItems = new wxComboBox( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxItems->SetSelection( 0 );
	bSizer30->Add( m_comboBoxItems, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer65;
	fgSizer65 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer65->SetFlexibleDirection( wxBOTH );
	fgSizer65->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText45 = new wxStaticText( m_panel25, wxID_ANY, wxT("ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	fgSizer65->Add( m_staticText45, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlID = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 3000, 0 );
	fgSizer65->Add( m_spinCtrlID, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer30->Add( fgSizer65, 0, 0, 5 );

	wxFlexGridSizer* fgSizer66;
	fgSizer66 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer66->SetFlexibleDirection( wxBOTH );
	fgSizer66->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText46 = new wxStaticText( m_panel25, wxID_ANY, wxT("Num:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46->Wrap( -1 );
	fgSizer66->Add( m_staticText46, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlNum = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	fgSizer66->Add( m_spinCtrlNum, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer30->Add( fgSizer66, 0, 0, 5 );

	wxFlexGridSizer* fgSizer67;
	fgSizer67 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer67->SetFlexibleDirection( wxBOTH );
	fgSizer67->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText47 = new wxStaticText( m_panel25, wxID_ANY, wxT("Label:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	fgSizer67->Add( m_staticText47, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlLabel = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	fgSizer67->Add( m_spinCtrlLabel, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer30->Add( fgSizer67, 1, wxEXPAND, 5 );

	m_button17 = new wxButton( m_panel25, wxID_ANY, wxT("Save Item"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer30->Add( m_button17, 0, wxALL, 5 );


	m_panel25->SetSizer( bSizer30 );
	m_panel25->Layout();
	bSizer30->Fit( m_panel25 );
	m_splitter3->SplitVertically( m_panel24, m_panel25, 200 );
	bSizer28->Add( m_splitter3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer52;
	fgSizer52 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer52->SetFlexibleDirection( wxBOTH );
	fgSizer52->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer54;
	fgSizer54 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer54->SetFlexibleDirection( wxBOTH );
	fgSizer54->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("Open:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	fgSizer54->Add( m_staticText36, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePicker8 = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer54->Add( m_filePicker8, 0, wxALL, 5 );


	fgSizer52->Add( fgSizer54, 1, wxEXPAND, 5 );

	m_staticline7 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer52->Add( m_staticline7, 0, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer53;
	fgSizer53 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer53->SetFlexibleDirection( wxBOTH );
	fgSizer53->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer53->Add( m_buttonSave, 0, wxALL, 5 );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("Save as:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	fgSizer53->Add( m_staticText35, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePickerSaveAs = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Save as"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_SAVE|wxFLP_SMALL );
	fgSizer53->Add( m_filePickerSaveAs, 0, wxALL, 5 );


	fgSizer52->Add( fgSizer53, 1, wxEXPAND, 5 );


	bSizer16->Add( fgSizer52, 1, wxEXPAND, 5 );


	bSizer28->Add( bSizer16, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer28 );
	this->Layout();

	// Connect Events
	m_listBox3->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( SUPPanel::OnSelection ), NULL, this );
	m_comboBoxItems->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( SUPPanel::OnCboxID ), NULL, this );
	m_spinCtrlID->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SUPPanel::OnCtrlID ), NULL, this );
	m_button17->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SUPPanel::SaveItem ), NULL, this );
	m_filePicker8->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( SUPPanel::Open ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SUPPanel::Save ), NULL, this );
	m_filePickerSaveAs->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( SUPPanel::SaveAs ), NULL, this );
}

SUPPanel::~SUPPanel()
{
	// Disconnect Events
	m_listBox3->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( SUPPanel::OnSelection ), NULL, this );
	m_comboBoxItems->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( SUPPanel::OnCboxID ), NULL, this );
	m_spinCtrlID->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SUPPanel::OnCtrlID ), NULL, this );
	m_button17->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SUPPanel::SaveItem ), NULL, this );
	m_filePicker8->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( SUPPanel::Open ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SUPPanel::Save ), NULL, this );
	m_filePickerSaveAs->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( SUPPanel::SaveAs ), NULL, this );

}

SEMPanel::SEMPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer50;
	bSizer50 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer112;
	fgSizer112 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer112->SetFlexibleDirection( wxBOTH );
	fgSizer112->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer113;
	fgSizer113 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer113->SetFlexibleDirection( wxBOTH );
	fgSizer113->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText82 = new wxStaticText( this, wxID_ANY, wxT("RoundNo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText82->Wrap( -1 );
	fgSizer113->Add( m_staticText82, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlRoundNo = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizer113->Add( m_spinCtrlRoundNo, 0, wxALL, 5 );


	fgSizer112->Add( fgSizer113, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1131;
	fgSizer1131 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1131->SetFlexibleDirection( wxBOTH );
	fgSizer1131->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText821 = new wxStaticText( this, wxID_ANY, wxT("AreaNo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText821->Wrap( -1 );
	fgSizer1131->Add( m_staticText821, 0, wxALL, 5 );

	m_spinCtrlAreaNo = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizer1131->Add( m_spinCtrlAreaNo, 0, wxALL, 5 );


	fgSizer112->Add( fgSizer1131, 1, wxEXPAND, 5 );


	bSizer50->Add( fgSizer112, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxFlexGridSizer* fgSizer117;
	fgSizer117 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer117->SetFlexibleDirection( wxBOTH );
	fgSizer117->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer1132;
	fgSizer1132 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1132->SetFlexibleDirection( wxBOTH );
	fgSizer1132->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText822 = new wxStaticText( this, wxID_ANY, wxT("PosX:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText822->Wrap( -1 );
	fgSizer1132->Add( m_staticText822, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_PosX = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, -999999, 999999, 0.000000, 1 );
	m_PosX->SetDigits( 0 );
	fgSizer1132->Add( m_PosX, 0, wxALL, 5 );


	fgSizer117->Add( fgSizer1132, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1133;
	fgSizer1133 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1133->SetFlexibleDirection( wxBOTH );
	fgSizer1133->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText823 = new wxStaticText( this, wxID_ANY, wxT("PosY:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText823->Wrap( -1 );
	fgSizer1133->Add( m_staticText823, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_PosY = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, -999999, 999999, 0, 1 );
	m_PosY->SetDigits( 0 );
	fgSizer1133->Add( m_PosY, 0, wxALL, 5 );


	fgSizer117->Add( fgSizer1133, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1134;
	fgSizer1134 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1134->SetFlexibleDirection( wxBOTH );
	fgSizer1134->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText824 = new wxStaticText( this, wxID_ANY, wxT("PosZ:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText824->Wrap( -1 );
	fgSizer1134->Add( m_staticText824, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_PosZ = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, -999999, 999999, 0, 1 );
	m_PosZ->SetDigits( 0 );
	fgSizer1134->Add( m_PosZ, 0, wxALL, 5 );


	fgSizer117->Add( fgSizer1134, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1135;
	fgSizer1135 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1135->SetFlexibleDirection( wxBOTH );
	fgSizer1135->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText825 = new wxStaticText( this, wxID_ANY, wxT("Angle:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText825->Wrap( -1 );
	fgSizer1135->Add( m_staticText825, 0, wxALL, 5 );

	m_Angle = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, -999999, 999999, 0, 1 );
	m_Angle->SetDigits( 0 );
	fgSizer1135->Add( m_Angle, 0, wxALL, 5 );


	fgSizer117->Add( fgSizer1135, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer50->Add( fgSizer117, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer52;
	fgSizer52 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer52->SetFlexibleDirection( wxBOTH );
	fgSizer52->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer54;
	fgSizer54 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer54->SetFlexibleDirection( wxBOTH );
	fgSizer54->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("Open:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	fgSizer54->Add( m_staticText36, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePicker8 = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer54->Add( m_filePicker8, 0, wxALL, 5 );


	fgSizer52->Add( fgSizer54, 1, wxEXPAND, 5 );

	m_staticline7 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer52->Add( m_staticline7, 0, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer53;
	fgSizer53 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer53->SetFlexibleDirection( wxBOTH );
	fgSizer53->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer53->Add( m_buttonSave, 0, wxALL, 5 );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("Save as:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	fgSizer53->Add( m_staticText35, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePickerSaveAs = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Save as"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_SAVE|wxFLP_SMALL );
	fgSizer53->Add( m_filePickerSaveAs, 0, wxALL, 5 );


	fgSizer52->Add( fgSizer53, 1, wxEXPAND, 5 );


	bSizer16->Add( fgSizer52, 1, wxEXPAND, 5 );


	bSizer50->Add( bSizer16, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer50 );
	this->Layout();

	// Connect Events
	m_filePicker8->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( SEMPanel::Open ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SEMPanel::Save ), NULL, this );
	m_filePickerSaveAs->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( SEMPanel::SaveAs ), NULL, this );
}

SEMPanel::~SEMPanel()
{
	// Disconnect Events
	m_filePicker8->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( SEMPanel::Open ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SEMPanel::Save ), NULL, this );
	m_filePickerSaveAs->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( SEMPanel::SaveAs ), NULL, this );

}

EXTPanel::EXTPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxVERTICAL );

	m_notebook3 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panelGeneral = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer171;
	fgSizer171 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer171->SetFlexibleDirection( wxBOTH );
	fgSizer171->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer166;
	fgSizer166 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer166->SetFlexibleDirection( wxBOTH );
	fgSizer166->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText111 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111->Wrap( -1 );
	fgSizer166->Add( m_staticText111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_questID = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer166->Add( m_questID, 0, wxALL, 5 );


	fgSizer171->Add( fgSizer166, 0, 0, 5 );

	wxFlexGridSizer* fgSizer1661;
	fgSizer1661 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1661->SetFlexibleDirection( wxBOTH );
	fgSizer1661->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1111 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("QuestNo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1111->Wrap( -1 );
	fgSizer1661->Add( m_staticText1111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_QuestNo = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1661->Add( m_QuestNo, 0, wxALL, 5 );


	fgSizer171->Add( fgSizer1661, 0, 0, 5 );


	bSizer59->Add( fgSizer171, 0, 0, 5 );

	wxFlexGridSizer* fgSizer172;
	fgSizer172 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer172->SetFlexibleDirection( wxBOTH );
	fgSizer172->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer16611;
	fgSizer16611 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer16611->SetFlexibleDirection( wxBOTH );
	fgSizer16611->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer209;
	fgSizer209 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer209->SetFlexibleDirection( wxBOTH );
	fgSizer209->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText11111 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Quest Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11111->Wrap( -1 );
	fgSizer209->Add( m_staticText11111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_QuestType = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer209->Add( m_QuestType, 0, wxALL, 5 );


	fgSizer16611->Add( fgSizer209, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer2091;
	fgSizer2091 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer2091->SetFlexibleDirection( wxBOTH );
	fgSizer2091->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1111113 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Hunt-a-ton:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1111113->Wrap( -1 );
	fgSizer2091->Add( m_staticText1111113, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_BossRush = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer2091->Add( m_BossRush, 0, wxALL, 5 );


	fgSizer16611->Add( fgSizer2091, 1, wxEXPAND, 5 );


	fgSizer172->Add( fgSizer16611, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer166111;
	fgSizer166111 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer166111->SetFlexibleDirection( wxBOTH );
	fgSizer166111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText111111 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Request Village:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111111->Wrap( -1 );
	fgSizer166111->Add( m_staticText111111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_ReqVillage = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer166111->Add( m_ReqVillage, 0, wxALL, 5 );


	fgSizer172->Add( fgSizer166111, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer166112;
	fgSizer166112 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer166112->SetFlexibleDirection( wxBOTH );
	fgSizer166112->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText111112 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Quest Lv:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111112->Wrap( -1 );
	fgSizer166112->Add( m_staticText111112, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_QuestLvChoices;
	m_QuestLv = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxSize( 200,-1 ), m_QuestLvChoices, 0 );
	m_QuestLv->SetSelection( 0 );
	fgSizer166112->Add( m_QuestLv, 0, wxALL, 5 );


	fgSizer172->Add( fgSizer166112, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer166113;
	fgSizer166113 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer166113->SetFlexibleDirection( wxBOTH );
	fgSizer166113->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText111113 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Monster Lv:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111113->Wrap( -1 );
	fgSizer166113->Add( m_staticText111113, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_MonLvChoices;
	m_MonLv = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_MonLvChoices, 0 );
	m_MonLv->SetSelection( 0 );
	fgSizer166113->Add( m_MonLv, 0, wxALL, 5 );


	fgSizer172->Add( fgSizer166113, 1, wxEXPAND, 5 );


	bSizer59->Add( fgSizer172, 0, 0, 5 );

	wxFlexGridSizer* fgSizer181;
	fgSizer181 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer181->SetFlexibleDirection( wxBOTH );
	fgSizer181->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer166114;
	fgSizer166114 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer166114->SetFlexibleDirection( wxBOTH );
	fgSizer166114->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText111114 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Map:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111114->Wrap( -1 );
	fgSizer166114->Add( m_staticText111114, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_MapChoices;
	m_Map = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxSize( 220,-1 ), m_MapChoices, 0 );
	m_Map->SetSelection( 0 );
	fgSizer166114->Add( m_Map, 0, wxALL, 5 );


	fgSizer181->Add( fgSizer166114, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer166115;
	fgSizer166115 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer166115->SetFlexibleDirection( wxBOTH );
	fgSizer166115->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText111115 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Start Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111115->Wrap( -1 );
	fgSizer166115->Add( m_staticText111115, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_StartTypeChoices;
	m_StartType = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_StartTypeChoices, 0 );
	m_StartType->SetSelection( 0 );
	fgSizer166115->Add( m_StartType, 0, wxALL, 5 );


	fgSizer181->Add( fgSizer166115, 1, wxEXPAND, 5 );


	bSizer59->Add( fgSizer181, 0, 0, 5 );

	wxFlexGridSizer* fgSizer190;
	fgSizer190 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer190->SetFlexibleDirection( wxBOTH );
	fgSizer190->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer166118;
	fgSizer166118 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer166118->SetFlexibleDirection( wxBOTH );
	fgSizer166118->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText111118 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("AcEquipSetNo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111118->Wrap( -1 );
	fgSizer166118->Add( m_staticText111118, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_AcEquipSetNo = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer166118->Add( m_AcEquipSetNo, 0, wxALL, 5 );


	fgSizer190->Add( fgSizer166118, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer166119;
	fgSizer166119 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer166119->SetFlexibleDirection( wxBOTH );
	fgSizer166119->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText111119 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("BGM Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111119->Wrap( -1 );
	fgSizer166119->Add( m_staticText111119, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_BGMType = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer166119->Add( m_BGMType, 0, wxALL, 5 );


	fgSizer190->Add( fgSizer166119, 1, wxEXPAND, 5 );


	bSizer59->Add( fgSizer190, 0, 0, 5 );

	wxFlexGridSizer* fgSizer198;
	fgSizer198 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer198->SetFlexibleDirection( wxBOTH );
	fgSizer198->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer166116;
	fgSizer166116 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer166116->SetFlexibleDirection( wxBOTH );
	fgSizer166116->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText111116 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Time:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111116->Wrap( -1 );
	fgSizer166116->Add( m_staticText111116, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_Time = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer166116->Add( m_Time, 0, wxALL, 5 );


	fgSizer198->Add( fgSizer166116, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer166117;
	fgSizer166117 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer166117->SetFlexibleDirection( wxBOTH );
	fgSizer166117->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText111117 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Lives:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111117->Wrap( -1 );
	fgSizer166117->Add( m_staticText111117, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_QuestLives = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer166117->Add( m_QuestLives, 0, wxALL, 5 );


	fgSizer198->Add( fgSizer166117, 1, wxEXPAND, 5 );


	bSizer59->Add( fgSizer198, 0, 0, 5 );

	wxFlexGridSizer* fgSizer199;
	fgSizer199 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer199->SetFlexibleDirection( wxBOTH );
	fgSizer199->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer1661161;
	fgSizer1661161 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1661161->SetFlexibleDirection( wxBOTH );
	fgSizer1661161->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1111161 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("GatheringLv:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1111161->Wrap( -1 );
	fgSizer1661161->Add( m_staticText1111161, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_GatheringLv = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1661161->Add( m_GatheringLv, 0, wxALL, 5 );


	fgSizer199->Add( fgSizer1661161, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1661162;
	fgSizer1661162 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1661162->SetFlexibleDirection( wxBOTH );
	fgSizer1661162->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1111162 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("CarvingLv:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1111162->Wrap( -1 );
	fgSizer1661162->Add( m_staticText1111162, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_CarvingLv = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1661162->Add( m_CarvingLv, 0, wxALL, 5 );


	fgSizer199->Add( fgSizer1661162, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1661163;
	fgSizer1661163 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1661163->SetFlexibleDirection( wxBOTH );
	fgSizer1661163->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1111163 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("FishingLv:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1111163->Wrap( -1 );
	fgSizer1661163->Add( m_staticText1111163, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_FishingLv = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1661163->Add( m_FishingLv, 0, wxALL, 5 );


	fgSizer199->Add( fgSizer1661163, 1, wxEXPAND, 5 );


	bSizer59->Add( fgSizer199, 0, 0, 5 );


	m_panelGeneral->SetSizer( bSizer59 );
	m_panelGeneral->Layout();
	bSizer59->Fit( m_panelGeneral );
	m_notebook3->AddPage( m_panelGeneral, wxT("General"), false );
	m_panelBoss = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxVERTICAL );

	wxString m_BossSwitchChoices[] = { wxT("1"), wxT("2"), wxT("3"), wxT("4"), wxT("5") };
	int m_BossSwitchNChoices = sizeof( m_BossSwitchChoices ) / sizeof( wxString );
	m_BossSwitch = new wxRadioBox( m_panelBoss, wxID_ANY, wxT("Boss"), wxDefaultPosition, wxDefaultSize, m_BossSwitchNChoices, m_BossSwitchChoices, 5, wxRA_SPECIFY_COLS );
	m_BossSwitch->SetSelection( 1 );
	bSizer55->Add( m_BossSwitch, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer138;
	fgSizer138 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer138->SetFlexibleDirection( wxBOTH );
	fgSizer138->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer246;
	fgSizer246 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer246->SetFlexibleDirection( wxBOTH );
	fgSizer246->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxArrayString m_MonsterTypeChoices;
	m_MonsterType = new wxChoice( m_panelBoss, wxID_ANY, wxDefaultPosition, wxSize( 180,-1 ), m_MonsterTypeChoices, 0 );
	m_MonsterType->SetSelection( 0 );
	fgSizer246->Add( m_MonsterType, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer1341;
	fgSizer1341 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1341->SetFlexibleDirection( wxBOTH );
	fgSizer1341->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText941 = new wxStaticText( m_panelBoss, wxID_ANY, wxT("SubType:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText941->Wrap( -1 );
	fgSizer1341->Add( m_staticText941, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_SubType = new wxSpinCtrl( m_panelBoss, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	fgSizer1341->Add( m_SubType, 0, wxALL, 5 );


	fgSizer246->Add( fgSizer1341, 1, wxEXPAND, 5 );


	fgSizer138->Add( fgSizer246, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer13411;
	fgSizer13411 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer13411->SetFlexibleDirection( wxBOTH );
	fgSizer13411->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9411 = new wxStaticText( m_panelBoss, wxID_ANY, wxT("Aura:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9411->Wrap( -1 );
	fgSizer13411->Add( m_staticText9411, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_Aura = new wxSpinCtrl( m_panelBoss, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	fgSizer13411->Add( m_Aura, 0, wxALL, 5 );


	fgSizer138->Add( fgSizer13411, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer13412;
	fgSizer13412 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer13412->SetFlexibleDirection( wxBOTH );
	fgSizer13412->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9412 = new wxStaticText( m_panelBoss, wxID_ANY, wxT("RestoreNum:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9412->Wrap( -1 );
	fgSizer13412->Add( m_staticText9412, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_RestoreNum = new wxSpinCtrl( m_panelBoss, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	fgSizer13412->Add( m_RestoreNum, 0, wxALL, 5 );


	fgSizer138->Add( fgSizer13412, 1, wxEXPAND, 5 );


	bSizer55->Add( fgSizer138, 0, 0, 5 );

	wxFlexGridSizer* fgSizer144;
	fgSizer144 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer144->SetFlexibleDirection( wxBOTH );
	fgSizer144->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer13413;
	fgSizer13413 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer13413->SetFlexibleDirection( wxBOTH );
	fgSizer13413->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9413 = new wxStaticText( m_panelBoss, wxID_ANY, wxT("HP Table:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9413->Wrap( -1 );
	fgSizer13413->Add( m_staticText9413, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_HpTbl = new wxSpinCtrl( m_panelBoss, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	fgSizer13413->Add( m_HpTbl, 0, wxALL, 5 );


	fgSizer144->Add( fgSizer13413, 0, 0, 5 );

	wxFlexGridSizer* fgSizer13414;
	fgSizer13414 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer13414->SetFlexibleDirection( wxBOTH );
	fgSizer13414->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9414 = new wxStaticText( m_panelBoss, wxID_ANY, wxT("Atk Table:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9414->Wrap( -1 );
	fgSizer13414->Add( m_staticText9414, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_AtkTbl = new wxSpinCtrl( m_panelBoss, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	fgSizer13414->Add( m_AtkTbl, 0, wxALL, 5 );


	fgSizer144->Add( fgSizer13414, 0, 0, 5 );

	wxFlexGridSizer* fgSizer13415;
	fgSizer13415 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer13415->SetFlexibleDirection( wxBOTH );
	fgSizer13415->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9415 = new wxStaticText( m_panelBoss, wxID_ANY, wxT("Stamina Table:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9415->Wrap( -1 );
	fgSizer13415->Add( m_staticText9415, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_StmTbl = new wxSpinCtrl( m_panelBoss, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	fgSizer13415->Add( m_StmTbl, 0, wxALL, 5 );


	fgSizer144->Add( fgSizer13415, 0, 0, 5 );

	wxFlexGridSizer* fgSizer13416;
	fgSizer13416 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer13416->SetFlexibleDirection( wxBOTH );
	fgSizer13416->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9416 = new wxStaticText( m_panelBoss, wxID_ANY, wxT("Other Table:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9416->Wrap( -1 );
	fgSizer13416->Add( m_staticText9416, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_OtherTbl = new wxSpinCtrl( m_panelBoss, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	fgSizer13416->Add( m_OtherTbl, 0, wxALL, 5 );


	fgSizer144->Add( fgSizer13416, 0, 0, 5 );


	bSizer55->Add( fgSizer144, 0, 0, 5 );

	wxFlexGridSizer* fgSizer153;
	fgSizer153 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer153->SetFlexibleDirection( wxBOTH );
	fgSizer153->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer13417;
	fgSizer13417 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer13417->SetFlexibleDirection( wxBOTH );
	fgSizer13417->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9417 = new wxStaticText( m_panelBoss, wxID_ANY, wxT("Size:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9417->Wrap( -1 );
	fgSizer13417->Add( m_staticText9417, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_Size = new wxSpinCtrl( m_panelBoss, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	fgSizer13417->Add( m_Size, 0, wxALL, 5 );


	fgSizer153->Add( fgSizer13417, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer13418;
	fgSizer13418 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer13418->SetFlexibleDirection( wxBOTH );
	fgSizer13418->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9418 = new wxStaticText( m_panelBoss, wxID_ANY, wxT("Size Table:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9418->Wrap( -1 );
	fgSizer13418->Add( m_staticText9418, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_SizeTbl = new wxSpinCtrl( m_panelBoss, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 0, 999999, 0 );
	fgSizer13418->Add( m_SizeTbl, 0, wxALL, 5 );


	fgSizer153->Add( fgSizer13418, 1, wxEXPAND, 5 );


	bSizer55->Add( fgSizer153, 1, wxEXPAND, 5 );


	m_panelBoss->SetSizer( bSizer55 );
	m_panelBoss->Layout();
	bSizer55->Fit( m_panelBoss );
	m_notebook3->AddPage( m_panelBoss, wxT("Main Monsters"), true );
	m_panelSmallEm = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer50;
	bSizer50 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxVERTICAL );

	m_staticText108 = new wxStaticText( m_panelSmallEm, wxID_ANY, wxT("Small mons Flags:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText108->Wrap( -1 );
	bSizer48->Add( m_staticText108, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer1191;
	fgSizer1191 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer1191->SetFlexibleDirection( wxBOTH );
	fgSizer1191->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer1201;
	fgSizer1201 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer1201->SetFlexibleDirection( wxBOTH );
	fgSizer1201->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText911 = new wxStaticText( m_panelSmallEm, wxID_ANY, wxT("HP:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText911->Wrap( -1 );
	fgSizer1201->Add( m_staticText911, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_SmallEmHP = new wxSpinCtrl( m_panelSmallEm, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1201->Add( m_SmallEmHP, 0, wxALL, 5 );


	fgSizer1191->Add( fgSizer1201, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer12011;
	fgSizer12011 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer12011->SetFlexibleDirection( wxBOTH );
	fgSizer12011->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9111 = new wxStaticText( m_panelSmallEm, wxID_ANY, wxT("Atk:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9111->Wrap( -1 );
	fgSizer12011->Add( m_staticText9111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_SmallEmAtk = new wxSpinCtrl( m_panelSmallEm, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer12011->Add( m_SmallEmAtk, 0, wxALL, 5 );


	fgSizer1191->Add( fgSizer12011, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer12012;
	fgSizer12012 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer12012->SetFlexibleDirection( wxBOTH );
	fgSizer12012->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9112 = new wxStaticText( m_panelSmallEm, wxID_ANY, wxT("Other:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9112->Wrap( -1 );
	fgSizer12012->Add( m_staticText9112, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_SmallEmOther = new wxSpinCtrl( m_panelSmallEm, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer12012->Add( m_SmallEmOther, 0, wxALL, 5 );


	fgSizer1191->Add( fgSizer12012, 1, wxEXPAND, 5 );


	bSizer48->Add( fgSizer1191, 1, wxEXPAND, 5 );


	bSizer50->Add( bSizer48, 0, 0, 5 );

	m_staticline17 = new wxStaticLine( m_panelSmallEm, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer50->Add( m_staticline17, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer481;
	bSizer481 = new wxBoxSizer( wxVERTICAL );

	m_staticText1081 = new wxStaticText( m_panelSmallEm, wxID_ANY, wxT("EmSet[2]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1081->Wrap( -1 );
	bSizer481->Add( m_staticText1081, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer11911;
	fgSizer11911 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer11911->SetFlexibleDirection( wxBOTH );
	fgSizer11911->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer12013;
	fgSizer12013 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer12013->SetFlexibleDirection( wxBOTH );
	fgSizer12013->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9113 = new wxStaticText( m_panelSmallEm, wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9113->Wrap( -1 );
	fgSizer12013->Add( m_staticText9113, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_EmSetType = new wxSpinCtrl( m_panelSmallEm, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer12013->Add( m_EmSetType, 0, wxALL, 5 );


	fgSizer11911->Add( fgSizer12013, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer120111;
	fgSizer120111 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer120111->SetFlexibleDirection( wxBOTH );
	fgSizer120111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText91111 = new wxStaticText( m_panelSmallEm, wxID_ANY, wxT("ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText91111->Wrap( -1 );
	fgSizer120111->Add( m_staticText91111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_EmSetTargetID = new wxSpinCtrl( m_panelSmallEm, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer120111->Add( m_EmSetTargetID, 0, wxALL, 5 );


	fgSizer11911->Add( fgSizer120111, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer120121;
	fgSizer120121 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer120121->SetFlexibleDirection( wxBOTH );
	fgSizer120121->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText91121 = new wxStaticText( m_panelSmallEm, wxID_ANY, wxT("Num:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText91121->Wrap( -1 );
	fgSizer120121->Add( m_staticText91121, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_EmSetTargetNum = new wxSpinCtrl( m_panelSmallEm, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer120121->Add( m_EmSetTargetNum, 0, wxALL, 5 );


	fgSizer11911->Add( fgSizer120121, 1, wxEXPAND, 5 );


	bSizer481->Add( fgSizer11911, 0, 0, 5 );

	wxFlexGridSizer* fgSizer119111;
	fgSizer119111 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer119111->SetFlexibleDirection( wxBOTH );
	fgSizer119111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer120131;
	fgSizer120131 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer120131->SetFlexibleDirection( wxBOTH );
	fgSizer120131->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText91131 = new wxStaticText( m_panelSmallEm, wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText91131->Wrap( -1 );
	fgSizer120131->Add( m_staticText91131, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_EmSetType1 = new wxSpinCtrl( m_panelSmallEm, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer120131->Add( m_EmSetType1, 0, wxALL, 5 );


	fgSizer119111->Add( fgSizer120131, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1201111;
	fgSizer1201111 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer1201111->SetFlexibleDirection( wxBOTH );
	fgSizer1201111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText911111 = new wxStaticText( m_panelSmallEm, wxID_ANY, wxT("ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText911111->Wrap( -1 );
	fgSizer1201111->Add( m_staticText911111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_EmSetTargetID1 = new wxSpinCtrl( m_panelSmallEm, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1201111->Add( m_EmSetTargetID1, 0, wxALL, 5 );


	fgSizer119111->Add( fgSizer1201111, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1201211;
	fgSizer1201211 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer1201211->SetFlexibleDirection( wxBOTH );
	fgSizer1201211->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText911211 = new wxStaticText( m_panelSmallEm, wxID_ANY, wxT("Num:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText911211->Wrap( -1 );
	fgSizer1201211->Add( m_staticText911211, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_EmSetTargetNum1 = new wxSpinCtrl( m_panelSmallEm, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1201211->Add( m_EmSetTargetNum1, 0, wxALL, 5 );


	fgSizer119111->Add( fgSizer1201211, 1, wxEXPAND, 5 );


	bSizer481->Add( fgSizer119111, 1, wxEXPAND, 5 );


	bSizer50->Add( bSizer481, 0, 0, 5 );


	m_panelSmallEm->SetSizer( bSizer50 );
	m_panelSmallEm->Layout();
	bSizer50->Fit( m_panelSmallEm );
	m_notebook3->AddPage( m_panelSmallEm, wxT("Small Monsters"), false );
	m_panelFlags = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer60;
	bSizer60 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerEntry;
	bSizerEntry = new wxBoxSizer( wxVERTICAL );

	m_staticText89 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Entry Flags:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText89->Wrap( -1 );
	bSizerEntry->Add( m_staticText89, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer195;
	fgSizer195 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer195->SetFlexibleDirection( wxBOTH );
	fgSizer195->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer1661110;
	fgSizer1661110 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1661110->SetFlexibleDirection( wxBOTH );
	fgSizer1661110->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1111110 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Entry Type 1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1111110->Wrap( -1 );
	fgSizer1661110->Add( m_staticText1111110, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_Entry0Choices;
	m_Entry0 = new wxChoice( m_panelFlags, wxID_ANY, wxDefaultPosition, wxSize( 170,-1 ), m_Entry0Choices, 0 );
	m_Entry0->SetSelection( 0 );
	fgSizer1661110->Add( m_Entry0, 0, wxALL, 5 );


	fgSizer195->Add( fgSizer1661110, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1661111;
	fgSizer1661111 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1661111->SetFlexibleDirection( wxBOTH );
	fgSizer1661111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1111111 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Entry Type 2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1111111->Wrap( -1 );
	fgSizer1661111->Add( m_staticText1111111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_Entry1Choices;
	m_Entry1 = new wxChoice( m_panelFlags, wxID_ANY, wxDefaultPosition, wxSize( 170,-1 ), m_Entry1Choices, 0 );
	m_Entry1->SetSelection( 0 );
	fgSizer1661111->Add( m_Entry1, 0, wxALL, 5 );


	fgSizer195->Add( fgSizer1661111, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1661112;
	fgSizer1661112 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1661112->SetFlexibleDirection( wxBOTH );
	fgSizer1661112->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1111112 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Entry Type Combo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1111112->Wrap( -1 );
	fgSizer1661112->Add( m_staticText1111112, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_EntryCombo = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1661112->Add( m_EntryCombo, 0, wxALL, 5 );


	fgSizer195->Add( fgSizer1661112, 1, wxEXPAND, 5 );


	bSizerEntry->Add( fgSizer195, 0, 0, 5 );


	bSizer60->Add( bSizerEntry, 0, 0, 5 );

	m_staticline13 = new wxStaticLine( m_panelFlags, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer60->Add( m_staticline13, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerClear;
	bSizerClear = new wxBoxSizer( wxVERTICAL );

	m_staticText891 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Clear Flags:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText891->Wrap( -1 );
	bSizerClear->Add( m_staticText891, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer194;
	fgSizer194 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer194->SetFlexibleDirection( wxBOTH );
	fgSizer194->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer122511;
	fgSizer122511 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer122511->SetFlexibleDirection( wxBOTH );
	fgSizer122511->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText92511 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Gekitai HP(fortress?):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText92511->Wrap( -1 );
	fgSizer122511->Add( m_staticText92511, 0, wxALL, 5 );

	m_GekitaiHp = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer122511->Add( m_GekitaiHp, 0, wxALL, 5 );


	fgSizer194->Add( fgSizer122511, 1, wxEXPAND, 5 );


	bSizerClear->Add( fgSizer194, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1951;
	fgSizer1951 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer1951->SetFlexibleDirection( wxBOTH );
	fgSizer1951->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerClear0;
	fgSizerClear0 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerClear0->SetFlexibleDirection( wxBOTH );
	fgSizerClear0->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1463 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Clear0"), wxDefaultPosition, wxDefaultSize, 0|wxBORDER_RAISED );
	m_staticText1463->Wrap( -1 );
	fgSizerClear0->Add( m_staticText1463, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer1225;
	fgSizer1225 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1225->SetFlexibleDirection( wxBOTH );
	fgSizer1225->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText925 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Param:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText925->Wrap( -1 );
	fgSizer1225->Add( m_staticText925, 0, wxALL, 5 );

	m_ClearParam0 = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1225->Add( m_ClearParam0, 0, wxALL, 5 );


	fgSizerClear0->Add( fgSizer1225, 0, 0, 5 );

	wxFlexGridSizer* fgSizer12212;
	fgSizer12212 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer12212->SetFlexibleDirection( wxBOTH );
	fgSizer12212->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9212 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9212->Wrap( -1 );
	fgSizer12212->Add( m_staticText9212, 0, wxALL, 5 );

	m_ClearID0 = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer12212->Add( m_ClearID0, 0, wxALL, 5 );


	fgSizerClear0->Add( fgSizer12212, 0, 0, 5 );

	wxFlexGridSizer* fgSizer12222;
	fgSizer12222 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer12222->SetFlexibleDirection( wxBOTH );
	fgSizer12222->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9222 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Num:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9222->Wrap( -1 );
	fgSizer12222->Add( m_staticText9222, 0, wxALL, 5 );

	m_ClearNum0 = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer12222->Add( m_ClearNum0, 0, wxALL, 5 );


	fgSizerClear0->Add( fgSizer12222, 0, 0, 5 );


	fgSizer1951->Add( fgSizerClear0, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer12251;
	fgSizer12251 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer12251->SetFlexibleDirection( wxBOTH );
	fgSizer12251->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9251 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Clear Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9251->Wrap( -1 );
	fgSizer12251->Add( m_staticText9251, 0, wxALL, 5 );

	wxArrayString m_ClearTypeChoices;
	m_ClearType = new wxChoice( m_panelFlags, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_ClearTypeChoices, 0 );
	m_ClearType->SetSelection( 0 );
	fgSizer12251->Add( m_ClearType, 0, wxALL, 5 );


	fgSizer1951->Add( fgSizer12251, 0, 0, 5 );

	wxFlexGridSizer* fgSizerClear1;
	fgSizerClear1 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerClear1->SetFlexibleDirection( wxBOTH );
	fgSizerClear1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText14631 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Clear1"), wxDefaultPosition, wxDefaultSize, 0|wxBORDER_RAISED );
	m_staticText14631->Wrap( -1 );
	fgSizerClear1->Add( m_staticText14631, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer1226;
	fgSizer1226 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1226->SetFlexibleDirection( wxBOTH );
	fgSizer1226->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText926 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Param:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText926->Wrap( -1 );
	fgSizer1226->Add( m_staticText926, 0, wxALL, 5 );

	m_ClearParam1 = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1226->Add( m_ClearParam1, 0, wxALL, 5 );


	fgSizerClear1->Add( fgSizer1226, 0, 0, 5 );

	wxFlexGridSizer* fgSizer12213;
	fgSizer12213 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer12213->SetFlexibleDirection( wxBOTH );
	fgSizer12213->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9213 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9213->Wrap( -1 );
	fgSizer12213->Add( m_staticText9213, 0, wxALL, 5 );

	m_ClearID1 = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer12213->Add( m_ClearID1, 0, wxALL, 5 );


	fgSizerClear1->Add( fgSizer12213, 0, 0, 5 );

	wxFlexGridSizer* fgSizer12223;
	fgSizer12223 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer12223->SetFlexibleDirection( wxBOTH );
	fgSizer12223->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9223 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Num:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9223->Wrap( -1 );
	fgSizer12223->Add( m_staticText9223, 0, wxALL, 5 );

	m_ClearNum1 = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer12223->Add( m_ClearNum1, 0, wxALL, 5 );


	fgSizerClear1->Add( fgSizer12223, 0, 0, 5 );


	fgSizer1951->Add( fgSizerClear1, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerClearSub;
	fgSizerClearSub = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerClearSub->SetFlexibleDirection( wxBOTH );
	fgSizerClearSub->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText14632 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("ClearSub"), wxDefaultPosition, wxDefaultSize, 0|wxBORDER_RAISED );
	m_staticText14632->Wrap( -1 );
	fgSizerClearSub->Add( m_staticText14632, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer12261;
	fgSizer12261 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer12261->SetFlexibleDirection( wxBOTH );
	fgSizer12261->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9261 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9261->Wrap( -1 );
	fgSizer12261->Add( m_staticText9261, 0, wxALL, 5 );

	m_ClearSubType = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer12261->Add( m_ClearSubType, 0, wxALL, 5 );


	fgSizerClearSub->Add( fgSizer12261, 0, 0, 5 );

	wxFlexGridSizer* fgSizer122131;
	fgSizer122131 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer122131->SetFlexibleDirection( wxBOTH );
	fgSizer122131->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText92131 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText92131->Wrap( -1 );
	fgSizer122131->Add( m_staticText92131, 0, wxALL, 5 );

	m_ClearSubID = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer122131->Add( m_ClearSubID, 0, wxALL, 5 );


	fgSizerClearSub->Add( fgSizer122131, 0, 0, 5 );

	wxFlexGridSizer* fgSizer122231;
	fgSizer122231 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer122231->SetFlexibleDirection( wxBOTH );
	fgSizer122231->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText92231 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Num:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText92231->Wrap( -1 );
	fgSizer122231->Add( m_staticText92231, 0, wxALL, 5 );

	m_ClearSubNum = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer122231->Add( m_ClearSubNum, 0, wxALL, 5 );


	fgSizerClearSub->Add( fgSizer122231, 0, 0, 5 );


	fgSizer1951->Add( fgSizerClearSub, 1, wxEXPAND, 5 );


	bSizerClear->Add( fgSizer1951, 0, 0, 5 );


	bSizer60->Add( bSizerClear, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerReward;
	bSizerReward = new wxBoxSizer( wxVERTICAL );

	m_staticText88 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("Reward Flags:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText88->Wrap( -1 );
	bSizerReward->Add( m_staticText88, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer119;
	fgSizer119 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer119->SetFlexibleDirection( wxBOTH );
	fgSizer119->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer120;
	fgSizer120 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer120->SetFlexibleDirection( wxBOTH );
	fgSizer120->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText91 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("RemAddFrame[2]:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText91->Wrap( -1 );
	fgSizer120->Add( m_staticText91, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_RemAddFrame0 = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer120->Add( m_RemAddFrame0, 0, wxALL, 5 );

	m_RemAddFrame1 = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer120->Add( m_RemAddFrame1, 0, wxALL, 5 );


	fgSizer119->Add( fgSizer120, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer121;
	fgSizer121 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer121->SetFlexibleDirection( wxBOTH );
	fgSizer121->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText90 = new wxStaticText( m_panelFlags, wxID_ANY, wxT("RemAddLotMax:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText90->Wrap( -1 );
	fgSizer121->Add( m_staticText90, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_RemAddLotMax = new wxSpinCtrl( m_panelFlags, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer121->Add( m_RemAddLotMax, 0, wxALL, 5 );


	fgSizer119->Add( fgSizer121, 1, wxEXPAND, 5 );


	bSizerReward->Add( fgSizer119, 1, wxEXPAND, 5 );


	bSizer60->Add( bSizerReward, 1, wxEXPAND, 5 );


	m_panelFlags->SetSizer( bSizer60 );
	m_panelFlags->Layout();
	bSizer60->Fit( m_panelFlags );
	m_notebook3->AddPage( m_panelFlags, wxT("Flags"), false );
	m_panelValues = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer210;
	fgSizer210 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer210->SetFlexibleDirection( wxBOTH );
	fgSizer210->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText131 = new wxStaticText( m_panelValues, wxID_ANY, wxT("Entry Fee:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131->Wrap( -1 );
	fgSizer210->Add( m_staticText131, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_Fee = new wxSpinCtrl( m_panelValues, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 9999999, 0 );
	fgSizer210->Add( m_Fee, 0, wxALL, 5 );


	bSizer62->Add( fgSizer210, 0, 0, 5 );

	wxFlexGridSizer* fgSizer235;
	fgSizer235 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer235->SetFlexibleDirection( wxBOTH );
	fgSizer235->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer236;
	fgSizer236 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer236->SetFlexibleDirection( wxBOTH );
	fgSizer236->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer237;
	fgSizer237 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer237->SetFlexibleDirection( wxBOTH );
	fgSizer237->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	fgSizer237->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText150 = new wxStaticText( m_panelValues, wxID_ANY, wxT("Main Reward"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText150->Wrap( -1 );
	fgSizer237->Add( m_staticText150, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticText151 = new wxStaticText( m_panelValues, wxID_ANY, wxT("Sub Reward"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText151->Wrap( -1 );
	fgSizer237->Add( m_staticText151, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticText152 = new wxStaticText( m_panelValues, wxID_ANY, wxT("Failure penalty"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText152->Wrap( -1 );
	fgSizer237->Add( m_staticText152, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticText146 = new wxStaticText( m_panelValues, wxID_ANY, wxT("Money"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText146->Wrap( -1 );
	fgSizer237->Add( m_staticText146, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_MReward = new wxSpinCtrl( m_panelValues, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer237->Add( m_MReward, 0, wxALL, 5 );

	m_MSubReward = new wxSpinCtrl( m_panelValues, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer237->Add( m_MSubReward, 0, wxALL, 5 );


	fgSizer237->Add( 90, 0, 1, wxEXPAND, 5 );


	fgSizer236->Add( fgSizer237, 1, wxEXPAND, 5 );


	fgSizer235->Add( fgSizer236, 0, wxALIGN_RIGHT, 5 );

	wxFlexGridSizer* fgSizer2362;
	fgSizer2362 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer2362->SetFlexibleDirection( wxBOTH );
	fgSizer2362->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1462 = new wxStaticText( m_panelValues, wxID_ANY, wxT("Hunter Points"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1462->Wrap( -1 );
	fgSizer2362->Add( m_staticText1462, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxFlexGridSizer* fgSizer2372;
	fgSizer2372 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer2372->SetFlexibleDirection( wxBOTH );
	fgSizer2372->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_hReward = new wxSpinCtrl( m_panelValues, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer2372->Add( m_hReward, 0, wxALL, 5 );

	m_hSubReward = new wxSpinCtrl( m_panelValues, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer2372->Add( m_hSubReward, 0, wxALL, 5 );


	fgSizer2372->Add( 90, 0, 1, wxEXPAND, 5 );


	fgSizer2362->Add( fgSizer2372, 1, wxEXPAND, 5 );


	fgSizer235->Add( fgSizer2362, 0, wxALIGN_RIGHT, 5 );

	wxFlexGridSizer* fgSizer2361;
	fgSizer2361 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer2361->SetFlexibleDirection( wxBOTH );
	fgSizer2361->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1461 = new wxStaticText( m_panelValues, wxID_ANY, wxT("Village Points"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1461->Wrap( -1 );
	fgSizer2361->Add( m_staticText1461, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxFlexGridSizer* fgSizer2371;
	fgSizer2371 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer2371->SetFlexibleDirection( wxBOTH );
	fgSizer2371->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_VReward = new wxSpinCtrl( m_panelValues, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer2371->Add( m_VReward, 0, wxALL, 5 );

	m_VSubReward = new wxSpinCtrl( m_panelValues, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer2371->Add( m_VSubReward, 0, wxALL, 5 );

	m_vPenalty = new wxSpinCtrl( m_panelValues, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer2371->Add( m_vPenalty, 0, wxALL, 5 );


	fgSizer2361->Add( fgSizer2371, 1, wxEXPAND, 5 );


	fgSizer235->Add( fgSizer2361, 0, wxALIGN_RIGHT, 5 );


	bSizer62->Add( fgSizer235, 1, wxEXPAND, 5 );


	bSizer61->Add( bSizer62, 0, 0, 5 );


	m_panelValues->SetSizer( bSizer61 );
	m_panelValues->Layout();
	bSizer61->Fit( m_panelValues );
	m_notebook3->AddPage( m_panelValues, wxT("Values"), false );
	m_panel22 = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer1331;
	fgSizer1331 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1331->SetFlexibleDirection( wxBOTH );
	fgSizer1331->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer122;
	fgSizer122 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer122->SetFlexibleDirection( wxBOTH );
	fgSizer122->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText92 = new wxStaticText( m_panel22, wxID_ANY, wxT("Label:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText92->Wrap( -1 );
	fgSizer122->Add( m_staticText92, 0, wxALL, 5 );

	m_SupplyLabel = new wxSpinCtrl( m_panel22, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer122->Add( m_SupplyLabel, 0, wxALL, 5 );


	fgSizer1331->Add( fgSizer122, 0, 0, 5 );

	wxFlexGridSizer* fgSizer1221;
	fgSizer1221 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1221->SetFlexibleDirection( wxBOTH );
	fgSizer1221->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText921 = new wxStaticText( m_panel22, wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText921->Wrap( -1 );
	fgSizer1221->Add( m_staticText921, 0, wxALL, 5 );

	m_SupplyType = new wxSpinCtrl( m_panel22, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1221->Add( m_SupplyType, 0, wxALL, 5 );


	fgSizer1331->Add( fgSizer1221, 0, 0, 5 );

	wxFlexGridSizer* fgSizer1222;
	fgSizer1222 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1222->SetFlexibleDirection( wxBOTH );
	fgSizer1222->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText922 = new wxStaticText( m_panel22, wxID_ANY, wxT("Target:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText922->Wrap( -1 );
	fgSizer1222->Add( m_staticText922, 0, wxALL, 5 );

	m_SupplyTarget = new wxSpinCtrl( m_panel22, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1222->Add( m_SupplyTarget, 0, wxALL, 5 );


	fgSizer1331->Add( fgSizer1222, 0, 0, 5 );

	wxFlexGridSizer* fgSizer1223;
	fgSizer1223 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1223->SetFlexibleDirection( wxBOTH );
	fgSizer1223->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText923 = new wxStaticText( m_panel22, wxID_ANY, wxT("Num:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText923->Wrap( -1 );
	fgSizer1223->Add( m_staticText923, 0, wxALL, 5 );

	m_SupplyNum = new wxSpinCtrl( m_panel22, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1223->Add( m_SupplyNum, 0, wxALL, 5 );


	fgSizer1331->Add( fgSizer1223, 0, 0, 5 );


	bSizer47->Add( fgSizer1331, 0, 0, 5 );

	m_staticline14 = new wxStaticLine( m_panel22, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer47->Add( m_staticline14, 0, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer13311;
	fgSizer13311 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer13311->SetFlexibleDirection( wxBOTH );
	fgSizer13311->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer1224;
	fgSizer1224 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1224->SetFlexibleDirection( wxBOTH );
	fgSizer1224->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText924 = new wxStaticText( m_panel22, wxID_ANY, wxT("Label:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText924->Wrap( -1 );
	fgSizer1224->Add( m_staticText924, 0, wxALL, 5 );

	m_SupplyLabel1 = new wxSpinCtrl( m_panel22, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer1224->Add( m_SupplyLabel1, 0, wxALL, 5 );


	fgSizer13311->Add( fgSizer1224, 0, 0, 5 );

	wxFlexGridSizer* fgSizer12211;
	fgSizer12211 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer12211->SetFlexibleDirection( wxBOTH );
	fgSizer12211->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9211 = new wxStaticText( m_panel22, wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9211->Wrap( -1 );
	fgSizer12211->Add( m_staticText9211, 0, wxALL, 5 );

	m_SupplyType1 = new wxSpinCtrl( m_panel22, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer12211->Add( m_SupplyType1, 0, wxALL, 5 );


	fgSizer13311->Add( fgSizer12211, 0, 0, 5 );

	wxFlexGridSizer* fgSizer12221;
	fgSizer12221 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer12221->SetFlexibleDirection( wxBOTH );
	fgSizer12221->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9221 = new wxStaticText( m_panel22, wxID_ANY, wxT("Target:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9221->Wrap( -1 );
	fgSizer12221->Add( m_staticText9221, 0, wxALL, 5 );

	m_SupplyTarget1 = new wxSpinCtrl( m_panel22, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer12221->Add( m_SupplyTarget1, 0, wxALL, 5 );


	fgSizer13311->Add( fgSizer12221, 0, 0, 5 );

	wxFlexGridSizer* fgSizer12231;
	fgSizer12231 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer12231->SetFlexibleDirection( wxBOTH );
	fgSizer12231->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText9231 = new wxStaticText( m_panel22, wxID_ANY, wxT("Num:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9231->Wrap( -1 );
	fgSizer12231->Add( m_staticText9231, 0, wxALL, 5 );

	m_SupplyNum1 = new wxSpinCtrl( m_panel22, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer12231->Add( m_SupplyNum1, 0, wxALL, 5 );


	fgSizer13311->Add( fgSizer12231, 0, 0, 5 );


	bSizer47->Add( fgSizer13311, 1, wxEXPAND, 5 );


	m_panel22->SetSizer( bSizer47 );
	m_panel22->Layout();
	bSizer47->Fit( m_panel22 );
	m_notebook3->AddPage( m_panel22, wxT("Supply"), false );

	bSizer54->Add( m_notebook3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer52;
	fgSizer52 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer52->SetFlexibleDirection( wxBOTH );
	fgSizer52->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer54;
	fgSizer54 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer54->SetFlexibleDirection( wxBOTH );
	fgSizer54->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("Open:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	fgSizer54->Add( m_staticText36, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePicker8 = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer54->Add( m_filePicker8, 0, wxALL, 5 );


	fgSizer52->Add( fgSizer54, 1, wxEXPAND, 5 );

	m_staticline7 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer52->Add( m_staticline7, 0, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer53;
	fgSizer53 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer53->SetFlexibleDirection( wxBOTH );
	fgSizer53->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer53->Add( m_buttonSave, 0, wxALL, 5 );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("Save as:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	fgSizer53->Add( m_staticText35, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePickerSaveAs = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Save as"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_SAVE|wxFLP_SMALL );
	fgSizer53->Add( m_filePickerSaveAs, 0, wxALL, 5 );


	fgSizer52->Add( fgSizer53, 1, wxEXPAND, 5 );


	bSizer16->Add( fgSizer52, 1, wxEXPAND, 5 );


	bSizer54->Add( bSizer16, 0, 0, 5 );


	this->SetSizer( bSizer54 );
	this->Layout();

	// Connect Events
	m_BossSwitch->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( EXTPanel::BossSelect ), NULL, this );
	m_filePicker8->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( EXTPanel::Open ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EXTPanel::Save ), NULL, this );
	m_filePickerSaveAs->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( EXTPanel::SaveAs ), NULL, this );
}

EXTPanel::~EXTPanel()
{
	// Disconnect Events
	m_BossSwitch->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( EXTPanel::BossSelect ), NULL, this );
	m_filePicker8->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( EXTPanel::Open ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EXTPanel::Save ), NULL, this );
	m_filePickerSaveAs->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( EXTPanel::SaveAs ), NULL, this );

}

REMPanel::REMPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxVERTICAL );

	m_splitter3 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_splitter3->Connect( wxEVT_IDLE, wxIdleEventHandler( REMPanel::m_splitter3OnIdle ), NULL, this );

	m_panel24 = new wxPanel( m_splitter3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxVERTICAL );

	m_listBox3 = new wxListBox( m_panel24, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	bSizer29->Add( m_listBox3, 1, wxALL|wxEXPAND, 5 );


	m_panel24->SetSizer( bSizer29 );
	m_panel24->Layout();
	bSizer29->Fit( m_panel24 );
	m_panel25 = new wxPanel( m_splitter3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );

	m_comboBoxItems = new wxComboBox( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxItems->SetSelection( 0 );
	bSizer30->Add( m_comboBoxItems, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer65;
	fgSizer65 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer65->SetFlexibleDirection( wxBOTH );
	fgSizer65->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText45 = new wxStaticText( m_panel25, wxID_ANY, wxT("ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	fgSizer65->Add( m_staticText45, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlID = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 3000, 0 );
	fgSizer65->Add( m_spinCtrlID, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer30->Add( fgSizer65, 0, 0, 5 );

	wxFlexGridSizer* fgSizer66;
	fgSizer66 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer66->SetFlexibleDirection( wxBOTH );
	fgSizer66->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText46 = new wxStaticText( m_panel25, wxID_ANY, wxT("Num:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46->Wrap( -1 );
	fgSizer66->Add( m_staticText46, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlNum = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99, 0 );
	fgSizer66->Add( m_spinCtrlNum, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer30->Add( fgSizer66, 0, 0, 5 );

	wxFlexGridSizer* fgSizer67;
	fgSizer67 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer67->SetFlexibleDirection( wxBOTH );
	fgSizer67->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText47 = new wxStaticText( m_panel25, wxID_ANY, wxT("Rate:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	fgSizer67->Add( m_staticText47, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlRate = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	fgSizer67->Add( m_spinCtrlRate, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer30->Add( fgSizer67, 0, 0, 5 );

	m_staticline12 = new wxStaticLine( m_panel25, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer30->Add( m_staticline12, 0, wxEXPAND|wxRIGHT|wxLEFT, 5 );

	wxBoxSizer* bSizerFlags;
	bSizerFlags = new wxBoxSizer( wxVERTICAL );

	m_staticText85 = new wxStaticText( m_panel25, wxID_ANY, wxT("Flag | ItemNum [4]:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText85->Wrap( -1 );
	bSizerFlags->Add( m_staticText85, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizerFlags;
	fgSizerFlags = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerFlags->SetFlexibleDirection( wxBOTH );
	fgSizerFlags->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_Flag0 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags->Add( m_Flag0, 0, wxALL, 5 );

	m_Flag1 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags->Add( m_Flag1, 0, wxALL, 5 );

	m_Flag2 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags->Add( m_Flag2, 0, wxALL, 5 );

	m_Flag3 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags->Add( m_Flag3, 0, wxALL, 5 );

	m_Flag4 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags->Add( m_Flag4, 0, wxALL, 5 );

	m_Flag5 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags->Add( m_Flag5, 0, wxALL, 5 );

	m_Flag6 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags->Add( m_Flag6, 0, wxALL, 5 );

	m_Flag7 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags->Add( m_Flag7, 0, wxALL, 5 );


	bSizerFlags->Add( fgSizerFlags, 1, wxEXPAND, 5 );


	bSizer30->Add( bSizerFlags, 0, 0, 5 );

	wxBoxSizer* bSizerFlagNums;
	bSizerFlagNums = new wxBoxSizer( wxVERTICAL );

	m_staticText851 = new wxStaticText( m_panel25, wxID_ANY, wxT("FlagNum[8]:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText851->Wrap( -1 );
	bSizerFlagNums->Add( m_staticText851, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizerFlags1;
	fgSizerFlags1 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerFlags1->SetFlexibleDirection( wxBOTH );
	fgSizerFlags1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_FlagNum0 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags1->Add( m_FlagNum0, 0, wxALL, 5 );

	m_FlagNum1 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags1->Add( m_FlagNum1, 0, wxALL, 5 );

	m_FlagNum2 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags1->Add( m_FlagNum2, 0, wxALL, 5 );

	m_FlagNum3 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags1->Add( m_FlagNum3, 0, wxALL, 5 );

	m_FlagNum4 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags1->Add( m_FlagNum4, 0, wxALL, 5 );

	m_FlagNum5 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags1->Add( m_FlagNum5, 0, wxALL, 5 );

	m_FlagNum6 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags1->Add( m_FlagNum6, 0, wxALL, 5 );

	m_FlagNum7 = new wxSpinCtrl( m_panel25, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizerFlags1->Add( m_FlagNum7, 0, wxALL, 5 );


	bSizerFlagNums->Add( fgSizerFlags1, 1, wxEXPAND, 5 );


	bSizer30->Add( bSizerFlagNums, 1, wxEXPAND, 5 );

	m_button17 = new wxButton( m_panel25, wxID_ANY, wxT("Save Item"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer30->Add( m_button17, 0, wxALL, 5 );


	m_panel25->SetSizer( bSizer30 );
	m_panel25->Layout();
	bSizer30->Fit( m_panel25 );
	m_splitter3->SplitVertically( m_panel24, m_panel25, 200 );
	bSizer28->Add( m_splitter3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer52;
	fgSizer52 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer52->SetFlexibleDirection( wxBOTH );
	fgSizer52->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer54;
	fgSizer54 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer54->SetFlexibleDirection( wxBOTH );
	fgSizer54->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("Open:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	fgSizer54->Add( m_staticText36, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePicker8 = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer54->Add( m_filePicker8, 0, wxALL, 5 );


	fgSizer52->Add( fgSizer54, 1, wxEXPAND, 5 );

	m_staticline7 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer52->Add( m_staticline7, 0, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer53;
	fgSizer53 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer53->SetFlexibleDirection( wxBOTH );
	fgSizer53->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer53->Add( m_buttonSave, 0, wxALL, 5 );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("Save as:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	fgSizer53->Add( m_staticText35, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePickerSaveAs = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Save as"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_SAVE|wxFLP_SMALL );
	fgSizer53->Add( m_filePickerSaveAs, 0, wxALL, 5 );


	fgSizer52->Add( fgSizer53, 1, wxEXPAND, 5 );


	bSizer16->Add( fgSizer52, 1, wxEXPAND, 5 );


	bSizer28->Add( bSizer16, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer28 );
	this->Layout();

	// Connect Events
	m_listBox3->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( REMPanel::OnSelection ), NULL, this );
	m_comboBoxItems->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( REMPanel::OnCboxID ), NULL, this );
	m_spinCtrlID->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( REMPanel::OnCtrlID ), NULL, this );
	m_button17->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( REMPanel::SaveItem ), NULL, this );
	m_filePicker8->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( REMPanel::Open ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( REMPanel::Save ), NULL, this );
	m_filePickerSaveAs->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( REMPanel::SaveAs ), NULL, this );
}

REMPanel::~REMPanel()
{
	// Disconnect Events
	m_listBox3->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( REMPanel::OnSelection ), NULL, this );
	m_comboBoxItems->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( REMPanel::OnCboxID ), NULL, this );
	m_spinCtrlID->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( REMPanel::OnCtrlID ), NULL, this );
	m_button17->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( REMPanel::SaveItem ), NULL, this );
	m_filePicker8->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( REMPanel::Open ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( REMPanel::Save ), NULL, this );
	m_filePickerSaveAs->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( REMPanel::SaveAs ), NULL, this );

}
