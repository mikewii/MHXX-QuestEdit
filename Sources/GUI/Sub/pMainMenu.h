#pragma once

#include "..\wxGUI.h"
#include <string>

class pMainMenu : public MainMenu
{
protected:
	virtual void ArcDec( wxCommandEvent& event ) override;
	virtual void ArcEnc( wxCommandEvent& event ) override;
	virtual void ArcDecompress( wxFileDirPickerEvent& event) override;
	virtual void ArcCompress( wxFileDirPickerEvent& event) override;
	virtual void ZDecompress( wxFileDirPickerEvent& event) override;
	virtual void OpenSystemSave(wxFileDirPickerEvent& event) override;
	virtual void SaveSlotExtract(wxCommandEvent& event) override;
	virtual void SaveSlotInsert(wxFileDirPickerEvent& event) override;
	virtual void WriteSystemSave(wxCommandEvent& event) override;
	virtual void QuestExtract(wxCommandEvent& event) override;
	virtual void QuestExtractSignsAll(wxCommandEvent& event) override;
	virtual void QuestInsert(wxFileDirPickerEvent& event) override;
	virtual void QuestInsertKey(wxFileDirPickerEvent& event) override;
	virtual void NewGMD(wxCommandEvent& event) override;
	virtual void NewQuestMenu(wxCommandEvent& event) override;
	virtual void NewFloatTool(wxCommandEvent& event) override;
	virtual void OnFixQuestFlags(wxCommandEvent& event) override;
	virtual void GenerateKeys(wxFileDirPickerEvent& event) override;
	virtual void SimulationRebuildQuestForMHGU(wxFileDirPickerEvent& event) override;
	virtual void QuestExtractAllMHGU(wxCommandEvent& event) override;
	
	virtual void checkOutDir();
	std::string cwd;
	std::string appwd;
	std::string filewd;
public:

	pMainMenu( wxWindow* parent );

};