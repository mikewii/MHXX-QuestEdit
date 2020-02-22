///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/filepicker.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/gauge.h>
#include <wx/choice.h>
#include <wx/spinctrl.h>
#include <wx/checkbox.h>
#include <wx/statline.h>
#include <wx/frame.h>
#include <wx/notebook.h>
#include <wx/listbox.h>
#include <wx/textctrl.h>
#include <wx/splitter.h>
#include <wx/combobox.h>
#include <wx/radiobox.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainMenu
///////////////////////////////////////////////////////////////////////////////
class MainMenu : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_menubar1;
		wxMenu* m_menu1;
		wxPanel* m_panel1;
		wxStaticText* m_staticText2;
		wxButton* m_button2;
		wxFilePickerCtrl* m_filePicker1;
		wxButton* m_button3;
		wxDirPickerCtrl* m_dirPickerEnc;
		wxPanel* m_panel2;
		wxStaticText* m_staticText21;
		wxFilePickerCtrl* m_filePicker5;
		wxPanel* m_panel21;
		wxStaticText* m_staticText211;
		wxFilePickerCtrl* m_filePicker51;
		wxPanel* m_panel3;
		wxStaticText* m_staticText3;
		wxFilePickerCtrl* m_filePicker6;
		wxGauge* m_gauge1;
		wxButton* m_button4;
		wxPanel* m_panel5;
		wxStaticText* m_staticText5;
		wxStaticText* m_staticText7;
		wxChoice* m_choiceSaveSlotExt;
		wxButton* m_button31;
		wxStaticText* m_staticText6;
		wxChoice* m_choiceSaveSlotIns;
		wxFilePickerCtrl* m_filePickerSaveSlot;
		wxPanel* m_panel6;
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText71;
		wxSpinCtrl* m_spinCtrlQuestExt;
		wxButton* m_button311;
		wxCheckBox* m_checkBoxAsArc;
		wxCheckBox* m_checkBoxTrim;
		wxCheckBox* m_checkBoxKey;
		wxStaticText* m_staticText61;
		wxSpinCtrl* m_spinCtrlQuestIns;
		wxFilePickerCtrl* m_filePickerQuestIns;
		wxStaticLine* m_staticline9;
		wxStaticText* m_staticText75;
		wxFilePickerCtrl* m_filePicker16;
		wxButton* m_button15;
		wxButton* m_button18;
		wxButton* m_button19;
		wxPanel* m_panel17;
		wxStaticText* m_staticText37;
		wxPanel* m_panel18;
		wxStaticText* m_staticText38;
		wxButton* m_button9;
		wxPanel* m_panel181;
		wxStaticText* m_staticText381;
		wxButton* m_button91;
		wxPanel* m_panel22;
		wxStaticText* m_staticText212;
		wxFilePickerCtrl* m_filePicker52;
		wxCheckBox* m_checkBoxMHXX;

		// Virtual event handlers, overide them in your derived class
		virtual void NewFloatTool( wxCommandEvent& event ) = 0;
		virtual void ArcDec( wxCommandEvent& event ) = 0;
		virtual void ArcDecompress( wxFileDirPickerEvent& event ) = 0;
		virtual void ArcEnc( wxCommandEvent& event ) = 0;
		virtual void ArcCompress( wxFileDirPickerEvent& event ) = 0;
		virtual void ZDecompress( wxFileDirPickerEvent& event ) = 0;
		virtual void GenerateKeys( wxFileDirPickerEvent& event ) = 0;
		virtual void OpenSystemSave( wxFileDirPickerEvent& event ) = 0;
		virtual void WriteSystemSave( wxCommandEvent& event ) = 0;
		virtual void SaveSlotExtract( wxCommandEvent& event ) = 0;
		virtual void SaveSlotInsert( wxFileDirPickerEvent& event ) = 0;
		virtual void QuestExtract( wxCommandEvent& event ) = 0;
		virtual void QuestInsert( wxFileDirPickerEvent& event ) = 0;
		virtual void QuestInsertKey( wxFileDirPickerEvent& event ) = 0;
		virtual void OnFixQuestFlags( wxCommandEvent& event ) = 0;
		virtual void QuestExtractSignsAll( wxCommandEvent& event ) = 0;
		virtual void QuestExtractAllMHGU( wxCommandEvent& event ) = 0;
		virtual void NewGMD( wxCommandEvent& event ) = 0;
		virtual void NewQuestMenu( wxCommandEvent& event ) = 0;
		virtual void SimulationRebuildQuestForMHGU( wxFileDirPickerEvent& event ) = 0;


	public:

		MainMenu( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("MHXX Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 450,554 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainMenu();

};

///////////////////////////////////////////////////////////////////////////////
/// Class QuestMenu
///////////////////////////////////////////////////////////////////////////////
class QuestMenu : public wxFrame
{
	private:

	protected:
		wxNotebook* m_notebook;

	public:

		QuestMenu( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Quest Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 566,378 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~QuestMenu();

};

///////////////////////////////////////////////////////////////////////////////
/// Class GMDStandalone
///////////////////////////////////////////////////////////////////////////////
class GMDStandalone : public wxFrame
{
	private:

	protected:
		wxSplitterWindow* m_splitter2;
		wxPanel* m_panel19;
		wxListBox* m_listBox2;
		wxPanel* m_panel20;
		wxTextCtrl* m_textCtrl24;
		wxButton* m_button10;
		wxStaticLine* m_staticline12;
		wxTextCtrl* m_textCtrlFilename;
		wxCheckBox* m_checkBoxFilenameEdit;
		wxStaticText* m_staticText36;
		wxFilePickerCtrl* m_filePicker8;
		wxStaticLine* m_staticline7;
		wxButton* m_buttonSave;
		wxStaticText* m_staticText35;
		wxFilePickerCtrl* m_filePickerSaveAs;
		wxCheckBox* m_checkBoxItemData;

		// Virtual event handlers, overide them in your derived class
		virtual void ItemSelected( wxCommandEvent& event ) = 0;
		virtual void SaveItem( wxCommandEvent& event ) = 0;
		virtual void EditFilename( wxCommandEvent& event ) = 0;
		virtual void Open( wxFileDirPickerEvent& event ) = 0;
		virtual void Save( wxCommandEvent& event ) = 0;
		virtual void SaveAs( wxFileDirPickerEvent& event ) = 0;


	public:

		GMDStandalone( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("GMD :: Edit"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,364 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~GMDStandalone();

		void m_splitter2OnIdle( wxIdleEvent& )
		{
			m_splitter2->SetSashPosition( 200 );
			m_splitter2->Disconnect( wxEVT_IDLE, wxIdleEventHandler( GMDStandalone::m_splitter2OnIdle ), NULL, this );
		}

};

///////////////////////////////////////////////////////////////////////////////
/// Class FloatTool
///////////////////////////////////////////////////////////////////////////////
class FloatTool : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText157;
		wxStaticText* m_staticText159;
		wxTextCtrl* m_AsHex0;
		wxTextCtrl* m_AsHex1;
		wxTextCtrl* m_AsHex2;
		wxTextCtrl* m_AsHex3;
		wxStaticLine* m_staticline16;
		wxStaticText* m_staticText158;
		wxTextCtrl* m_AsDec;

		// Virtual event handlers, overide them in your derived class
		virtual void AsHex0Change( wxCommandEvent& event ) { event.Skip(); }
		virtual void AsHex1Change( wxCommandEvent& event ) { event.Skip(); }
		virtual void AsHex2Change( wxCommandEvent& event ) { event.Skip(); }
		virtual void AsHex3Change( wxCommandEvent& event ) { event.Skip(); }
		virtual void AsDecChange( wxCommandEvent& event ) { event.Skip(); }


	public:

		FloatTool( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 198,144 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FloatTool();

};

///////////////////////////////////////////////////////////////////////////////
/// Class GMDPanel
///////////////////////////////////////////////////////////////////////////////
class GMDPanel : public wxPanel
{
	private:

	protected:
		wxTextCtrl* m_textCtrlFilename;
		wxCheckBox* m_checkBoxFilenameEdit;
		wxStaticText* m_staticText13;
		wxTextCtrl* m_textCtrlTitle;
		wxStaticText* m_staticText14;
		wxTextCtrl* m_textCtrlClient;
		wxStaticText* m_staticText15;
		wxTextCtrl* m_textCtrlMainGoal;
		wxStaticText* m_staticText16;
		wxTextCtrl* m_textCtrlSubGoal;
		wxStaticText* m_staticText17;
		wxTextCtrl* m_textCtrlMainMon;
		wxStaticText* m_staticText18;
		wxTextCtrl* m_textCtrlFailure;
		wxStaticLine* m_staticline1;
		wxStaticText* m_staticText19;
		wxTextCtrl* m_textCtrlDesc;
		wxStaticLine* m_staticline6;
		wxStaticText* m_staticText36;
		wxFilePickerCtrl* m_filePicker8;
		wxStaticLine* m_staticline7;
		wxButton* m_buttonSave;
		wxStaticText* m_staticText35;
		wxFilePickerCtrl* m_filePickerSaveAs;

		// Virtual event handlers, overide them in your derived class
		virtual void EditFilename( wxCommandEvent& event ) { event.Skip(); }
		virtual void Open( wxFileDirPickerEvent& event ) { event.Skip(); }
		virtual void Save( wxCommandEvent& event ) { event.Skip(); }
		virtual void SaveAs( wxFileDirPickerEvent& event ) { event.Skip(); }


	public:

		GMDPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 528,356 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~GMDPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class SUPPanel
///////////////////////////////////////////////////////////////////////////////
class SUPPanel : public wxPanel
{
	private:

	protected:
		wxSplitterWindow* m_splitter3;
		wxPanel* m_panel24;
		wxListBox* m_listBox3;
		wxPanel* m_panel25;
		wxComboBox* m_comboBoxItems;
		wxStaticText* m_staticText45;
		wxSpinCtrl* m_spinCtrlID;
		wxStaticText* m_staticText46;
		wxSpinCtrl* m_spinCtrlNum;
		wxStaticText* m_staticText47;
		wxSpinCtrl* m_spinCtrlLabel;
		wxButton* m_button17;
		wxStaticText* m_staticText36;
		wxFilePickerCtrl* m_filePicker8;
		wxStaticLine* m_staticline7;
		wxButton* m_buttonSave;
		wxStaticText* m_staticText35;
		wxFilePickerCtrl* m_filePickerSaveAs;

		// Virtual event handlers, overide them in your derived class
		virtual void OnSelection( wxCommandEvent& event ) = 0;
		virtual void OnCboxID( wxCommandEvent& event ) = 0;
		virtual void OnCtrlID( wxSpinEvent& event ) = 0;
		virtual void SaveItem( wxCommandEvent& event ) = 0;
		virtual void Open( wxFileDirPickerEvent& event ) = 0;
		virtual void Save( wxCommandEvent& event ) = 0;
		virtual void SaveAs( wxFileDirPickerEvent& event ) = 0;


	public:

		SUPPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~SUPPanel();

		void m_splitter3OnIdle( wxIdleEvent& )
		{
			m_splitter3->SetSashPosition( 200 );
			m_splitter3->Disconnect( wxEVT_IDLE, wxIdleEventHandler( SUPPanel::m_splitter3OnIdle ), NULL, this );
		}

};

///////////////////////////////////////////////////////////////////////////////
/// Class SEMPanel
///////////////////////////////////////////////////////////////////////////////
class SEMPanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticText82;
		wxSpinCtrl* m_spinCtrlRoundNo;
		wxStaticText* m_staticText821;
		wxSpinCtrl* m_spinCtrlAreaNo;
		wxStaticText* m_staticText822;
		wxSpinCtrlDouble* m_PosX;
		wxStaticText* m_staticText823;
		wxSpinCtrlDouble* m_PosY;
		wxStaticText* m_staticText824;
		wxSpinCtrlDouble* m_PosZ;
		wxStaticText* m_staticText825;
		wxSpinCtrlDouble* m_Angle;
		wxStaticText* m_staticText36;
		wxFilePickerCtrl* m_filePicker8;
		wxStaticLine* m_staticline7;
		wxButton* m_buttonSave;
		wxStaticText* m_staticText35;
		wxFilePickerCtrl* m_filePickerSaveAs;

		// Virtual event handlers, overide them in your derived class
		virtual void Open( wxFileDirPickerEvent& event ) = 0;
		virtual void Save( wxCommandEvent& event ) = 0;
		virtual void SaveAs( wxFileDirPickerEvent& event ) = 0;


	public:

		SEMPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,110 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~SEMPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class EXTPanel
///////////////////////////////////////////////////////////////////////////////
class EXTPanel : public wxPanel
{
	private:

	protected:
		wxNotebook* m_notebook3;
		wxPanel* m_panelGeneral;
		wxStaticText* m_staticText111;
		wxSpinCtrl* m_questID;
		wxStaticText* m_staticText1111;
		wxSpinCtrl* m_QuestNo;
		wxStaticText* m_staticText11111;
		wxSpinCtrl* m_QuestType;
		wxStaticText* m_staticText1111113;
		wxSpinCtrl* m_BossRush;
		wxStaticText* m_staticText111111;
		wxSpinCtrl* m_ReqVillage;
		wxStaticText* m_staticText111112;
		wxChoice* m_QuestLv;
		wxStaticText* m_staticText111113;
		wxChoice* m_MonLv;
		wxStaticText* m_staticText111114;
		wxChoice* m_Map;
		wxStaticText* m_staticText111115;
		wxChoice* m_StartType;
		wxStaticText* m_staticText111118;
		wxSpinCtrl* m_AcEquipSetNo;
		wxStaticText* m_staticText111119;
		wxSpinCtrl* m_BGMType;
		wxStaticText* m_staticText111116;
		wxSpinCtrl* m_Time;
		wxStaticText* m_staticText111117;
		wxSpinCtrl* m_QuestLives;
		wxStaticText* m_staticText1111161;
		wxSpinCtrl* m_GatheringLv;
		wxStaticText* m_staticText1111162;
		wxSpinCtrl* m_CarvingLv;
		wxStaticText* m_staticText1111163;
		wxSpinCtrl* m_FishingLv;
		wxPanel* m_panelBoss;
		wxRadioBox* m_BossSwitch;
		wxChoice* m_MonsterType;
		wxStaticText* m_staticText941;
		wxSpinCtrl* m_SubType;
		wxStaticText* m_staticText9411;
		wxSpinCtrl* m_Aura;
		wxStaticText* m_staticText9412;
		wxSpinCtrl* m_RestoreNum;
		wxStaticText* m_staticText9413;
		wxSpinCtrl* m_HpTbl;
		wxStaticText* m_staticText9414;
		wxSpinCtrl* m_AtkTbl;
		wxStaticText* m_staticText9415;
		wxSpinCtrl* m_StmTbl;
		wxStaticText* m_staticText9416;
		wxSpinCtrl* m_OtherTbl;
		wxStaticText* m_staticText9417;
		wxSpinCtrl* m_Size;
		wxStaticText* m_staticText9418;
		wxSpinCtrl* m_SizeTbl;
		wxPanel* m_panelSmallEm;
		wxStaticText* m_staticText108;
		wxStaticText* m_staticText911;
		wxSpinCtrl* m_SmallEmHP;
		wxStaticText* m_staticText9111;
		wxSpinCtrl* m_SmallEmAtk;
		wxStaticText* m_staticText9112;
		wxSpinCtrl* m_SmallEmOther;
		wxStaticLine* m_staticline17;
		wxStaticText* m_staticText1081;
		wxStaticText* m_staticText9113;
		wxSpinCtrl* m_EmSetType;
		wxStaticText* m_staticText91111;
		wxSpinCtrl* m_EmSetTargetID;
		wxStaticText* m_staticText91121;
		wxSpinCtrl* m_EmSetTargetNum;
		wxStaticText* m_staticText91131;
		wxSpinCtrl* m_EmSetType1;
		wxStaticText* m_staticText911111;
		wxSpinCtrl* m_EmSetTargetID1;
		wxStaticText* m_staticText911211;
		wxSpinCtrl* m_EmSetTargetNum1;
		wxPanel* m_panelFlags;
		wxStaticText* m_staticText89;
		wxStaticText* m_staticText1111110;
		wxChoice* m_Entry0;
		wxStaticText* m_staticText1111111;
		wxChoice* m_Entry1;
		wxStaticText* m_staticText1111112;
		wxSpinCtrl* m_EntryCombo;
		wxStaticLine* m_staticline13;
		wxStaticText* m_staticText891;
		wxStaticText* m_staticText92511;
		wxSpinCtrl* m_GekitaiHp;
		wxStaticText* m_staticText1463;
		wxStaticText* m_staticText925;
		wxSpinCtrl* m_ClearParam0;
		wxStaticText* m_staticText9212;
		wxSpinCtrl* m_ClearID0;
		wxStaticText* m_staticText9222;
		wxSpinCtrl* m_ClearNum0;
		wxStaticText* m_staticText9251;
		wxChoice* m_ClearType;
		wxStaticText* m_staticText14631;
		wxStaticText* m_staticText926;
		wxSpinCtrl* m_ClearParam1;
		wxStaticText* m_staticText9213;
		wxSpinCtrl* m_ClearID1;
		wxStaticText* m_staticText9223;
		wxSpinCtrl* m_ClearNum1;
		wxStaticText* m_staticText14632;
		wxStaticText* m_staticText9261;
		wxSpinCtrl* m_ClearSubType;
		wxStaticText* m_staticText92131;
		wxSpinCtrl* m_ClearSubID;
		wxStaticText* m_staticText92231;
		wxSpinCtrl* m_ClearSubNum;
		wxStaticText* m_staticText88;
		wxStaticText* m_staticText91;
		wxSpinCtrl* m_RemAddFrame0;
		wxSpinCtrl* m_RemAddFrame1;
		wxStaticText* m_staticText90;
		wxSpinCtrl* m_RemAddLotMax;
		wxPanel* m_panelValues;
		wxStaticText* m_staticText131;
		wxSpinCtrl* m_Fee;
		wxStaticText* m_staticText150;
		wxStaticText* m_staticText151;
		wxStaticText* m_staticText152;
		wxStaticText* m_staticText146;
		wxSpinCtrl* m_MReward;
		wxSpinCtrl* m_MSubReward;
		wxStaticText* m_staticText1462;
		wxSpinCtrl* m_hReward;
		wxSpinCtrl* m_hSubReward;
		wxStaticText* m_staticText1461;
		wxSpinCtrl* m_VReward;
		wxSpinCtrl* m_VSubReward;
		wxSpinCtrl* m_vPenalty;
		wxPanel* m_panel22;
		wxStaticText* m_staticText92;
		wxSpinCtrl* m_SupplyLabel;
		wxStaticText* m_staticText921;
		wxSpinCtrl* m_SupplyType;
		wxStaticText* m_staticText922;
		wxSpinCtrl* m_SupplyTarget;
		wxStaticText* m_staticText923;
		wxSpinCtrl* m_SupplyNum;
		wxStaticLine* m_staticline14;
		wxStaticText* m_staticText924;
		wxSpinCtrl* m_SupplyLabel1;
		wxStaticText* m_staticText9211;
		wxSpinCtrl* m_SupplyType1;
		wxStaticText* m_staticText9221;
		wxSpinCtrl* m_SupplyTarget1;
		wxStaticText* m_staticText9231;
		wxSpinCtrl* m_SupplyNum1;
		wxStaticText* m_staticText36;
		wxFilePickerCtrl* m_filePicker8;
		wxStaticLine* m_staticline7;
		wxButton* m_buttonSave;
		wxStaticText* m_staticText35;
		wxFilePickerCtrl* m_filePickerSaveAs;

		// Virtual event handlers, overide them in your derived class
		virtual void BossSelect( wxCommandEvent& event ) = 0;
		virtual void Open( wxFileDirPickerEvent& event ) = 0;
		virtual void Save( wxCommandEvent& event ) = 0;
		virtual void SaveAs( wxFileDirPickerEvent& event ) = 0;


	public:

		EXTPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 534,408 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~EXTPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class REMPanel
///////////////////////////////////////////////////////////////////////////////
class REMPanel : public wxPanel
{
	private:

	protected:
		wxSplitterWindow* m_splitter3;
		wxPanel* m_panel24;
		wxListBox* m_listBox3;
		wxPanel* m_panel25;
		wxComboBox* m_comboBoxItems;
		wxStaticText* m_staticText45;
		wxSpinCtrl* m_spinCtrlID;
		wxStaticText* m_staticText46;
		wxSpinCtrl* m_spinCtrlNum;
		wxStaticText* m_staticText47;
		wxSpinCtrl* m_spinCtrlRate;
		wxStaticLine* m_staticline12;
		wxStaticText* m_staticText85;
		wxSpinCtrl* m_Flag0;
		wxSpinCtrl* m_Flag1;
		wxSpinCtrl* m_Flag2;
		wxSpinCtrl* m_Flag3;
		wxSpinCtrl* m_Flag4;
		wxSpinCtrl* m_Flag5;
		wxSpinCtrl* m_Flag6;
		wxSpinCtrl* m_Flag7;
		wxStaticText* m_staticText851;
		wxSpinCtrl* m_FlagNum0;
		wxSpinCtrl* m_FlagNum1;
		wxSpinCtrl* m_FlagNum2;
		wxSpinCtrl* m_FlagNum3;
		wxSpinCtrl* m_FlagNum4;
		wxSpinCtrl* m_FlagNum5;
		wxSpinCtrl* m_FlagNum6;
		wxSpinCtrl* m_FlagNum7;
		wxButton* m_button17;
		wxStaticText* m_staticText36;
		wxFilePickerCtrl* m_filePicker8;
		wxStaticLine* m_staticline7;
		wxButton* m_buttonSave;
		wxStaticText* m_staticText35;
		wxFilePickerCtrl* m_filePickerSaveAs;

		// Virtual event handlers, overide them in your derived class
		virtual void OnSelection( wxCommandEvent& event ) = 0;
		virtual void OnCboxID( wxCommandEvent& event ) = 0;
		virtual void OnCtrlID( wxSpinEvent& event ) = 0;
		virtual void SaveItem( wxCommandEvent& event ) = 0;
		virtual void Open( wxFileDirPickerEvent& event ) = 0;
		virtual void Save( wxCommandEvent& event ) = 0;
		virtual void SaveAs( wxFileDirPickerEvent& event ) = 0;


	public:

		REMPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,406 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~REMPanel();

		void m_splitter3OnIdle( wxIdleEvent& )
		{
			m_splitter3->SetSashPosition( 200 );
			m_splitter3->Disconnect( wxEVT_IDLE, wxIdleEventHandler( REMPanel::m_splitter3OnIdle ), NULL, this );
		}

};

