#include "pMainMenu.h"
#include <vector>
#include "Tools/arc.hpp"
#include "Tools/zpipe.hpp"
#include <stdio.h>

#include <wx/dir.h>
#include "Tools/buffer.hpp"

#include "Tools/fshelp.hpp"
#include <io.h> // for making directories, mkdir()

#include <Save/savefile.hpp>
#include <Quest/questfile.hpp>



const char *OUTDIR = "Out";
using std::string;

//std::string* pMainMenu::cwd = new std::string();
//std::string* pMainMenu::appwd = new std::string();

//#include "Tools/crypto.hpp"

pMainMenu::pMainMenu( wxWindow* parent )
:
MainMenu( parent ) {
	//crypto::unkKeyMessage(testdata_out, testdata1, testdata2);
	//crypto::TestRsa(NULL, 0);
	//crypto::GeneratePublicKey(NULL, 0);
	cwd = fshelp::getcwdir();
	appwd = cwd;
	checkOutDir();
	chdir(OUTDIR);
	filewd = fshelp::getcwdir() + "\\";
	chdir(appwd.c_str());
}

void pMainMenu::ArcDec( wxCommandEvent& event )
{
	wxString tmp;
	tmp = wxFilePickerCtrl().GetPath();
	
}

void pMainMenu::ArcEnc( wxCommandEvent& event )
{
// TODO: Implement ArcEnc
}

void pMainMenu::checkOutDir(){
	chdir(appwd.c_str());
	if (chdir(OUTDIR) != 0) {
		mkdir(OUTDIR);
	}
}

void pMainMenu::ArcDecompress( wxFileDirPickerEvent& event) {
	std::vector<char> inputBuffer;
	uint32_t finputSize = 0;
	wxString inputFilePath;
	wxString inputFileName;
	size_t lastDot;
	
	checkOutDir();
	chdir(OUTDIR);
	cwd = fshelp::getcwdir();
	
	inputFilePath = event.GetPath();
	// get name of file to open and replace '.' to '_' for root folder name
	inputFileName = m_filePicker1->GetFileName().GetFullName();
	lastDot = inputFileName.find_last_of('.');
	inputFileName.replace(lastDot, 1, '_');
	
	mkdir(inputFileName.c_str());
	chdir(inputFileName.c_str());
	filewd = cwd = fshelp::getcwdir();
	
	FILE *finput;
	finput = fopen(inputFilePath.c_str(), "rb");
	fseek(finput, 0, SEEK_END);
	finputSize = ftell(finput);
	rewind(finput);
	
	inputBuffer.resize(finputSize);
	fread(inputBuffer.data(), finputSize, 1, finput);
	fclose(finput);
	
	ARC file;
	file.read(inputBuffer, filewd);
	int b = 0;
	
}

void pMainMenu::ArcCompress(wxFileDirPickerEvent& event) {
	// WIP
	std::vector<char> inBuffer;
	std::vector<char> outBuffer;
	wxString fiPath;
	cwd = fshelp::getcwdir();
	fiPath = event.GetPath();
	checkOutDir();
	wxArrayString files;
	size_t filesN = wxDir::GetAllFiles(fiPath, &files);
	
	ARC file;
	file.make(filewd, cwd, files, filesN);
	
	
	// working for one file:
	//FILE* fi;
	//fi = fopen(fiPath.c_str(), "rb");
	//
	//zlib_mem::deflatePipe(fi, outBuffer);
}

void pMainMenu::ZDecompress(wxFileDirPickerEvent& event){
	
	wxString fiPath = event.GetPath();
	wxString foPath = fiPath + ".dec";
	
	FILE* fi;
	FILE* fo;
	fi = fopen(fiPath.c_str(), "rb");
	fo = fopen(foPath.c_str(), "wb");
	
	fseek(fi, 0, SEEK_END);
	int fiSize = ftell(fi);
	rewind(fi);
	
	std::vector<char> in(fiSize);
	std::vector<char> out;
	
	fread(in.data(), 1, in.size(), fi);
	
	zlib_mem::inflate_mem(in, out);
	
	fwrite(out.data(), 1, out.size(), fo);
	
	fclose(fi);
	fclose(fo);
}

void pMainMenu::OpenSystemSave(wxFileDirPickerEvent& event) {
	m_gauge1->SetValue(0);
	wxString fiPath = event.GetPath();
	
	FILE* fi;
	fi = fopen(fiPath.c_str(), "rb");
	
	fseek(fi, 0, SEEK_END);
	int fiSize = ftell(fi);
	rewind(fi);

	if ((fiSize == SAVE_SIZE) || (fiSize == SAVE_SIZE_MHGU)) {
		buffer::systemSaveBuffer.resize(fiSize);
		fread(buffer::systemSaveBuffer.data(), 1, fiSize, fi);
		fclose(fi);
	
		m_gauge1->SetValue(100);
		return;
	}
	m_gauge1->SetValue(50);
	return;
}

void pMainMenu::SaveSlotExtract(wxCommandEvent& event) {
	int choice = m_choiceSaveSlotExt->GetSelection();
	savefile save;
	std::vector<char> buf;
	save.SaveSlotExtract(choice, buf);
	
	char* charName = &buf.data()[0];
	fshelp::CreateFile(buf, filewd + charName);
}

void pMainMenu::SaveSlotInsert(wxFileDirPickerEvent& event) {
	wxString wxfiPath = event.GetPath();
	std::string fiPath = wxfiPath.mb_str().data();
	
	std::vector<char> buf;
	fshelp::ReadFile(buf, fiPath);
	
	savefile save;
	save.SaveSlotInsert(m_choiceSaveSlotIns->GetSelection(), buf);
	
}

void pMainMenu::WriteSystemSave(wxCommandEvent& event) {
	fshelp::CreateFile(buffer::systemSaveBuffer, filewd + "system");
}

void pMainMenu::QuestExtract(wxCommandEvent& event) {
	int choice = m_spinCtrlQuestExt->GetValue();
	savefile save;
	std::vector<char> buf;
	bool asARC = m_checkBoxAsArc->GetValue();
	bool trim = m_checkBoxTrim->GetValue();
	bool key = m_checkBoxKey->GetValue();
	std::string name = save.QuestExtract(choice, buf, asARC, trim, key);

	fshelp::CreateFile(buf, filewd + name);
}

void pMainMenu::QuestExtractSignsAll(wxCommandEvent& event) {
	savefile save;
	std::vector<char> buf;
	std::string name;
	int i = 0;
	do {
		name = save.QuestExtractSign(i, buf);
		i++;
		fshelp::CreateFile(buf, filewd + "\\signs\\" + name + ".sign");
		buf.clear();
	} while (!name.empty());
	
}

void pMainMenu::QuestInsert(wxFileDirPickerEvent& event) {
	wxString wxfiPath = event.GetPath();
	std::string fiPath = wxfiPath.mb_str().data();
	
	std::vector<char> buf;
	fshelp::ReadFile(buf, fiPath);
	
	savefile save;
	save.QuestInsert(m_spinCtrlQuestIns->GetValue(), buf, fiPath);
}

#include "../Sub/pGMDStandalone.h"
void pMainMenu::NewGMD(wxCommandEvent& event) {
	pGMDStandalone* window = new pGMDStandalone(this);
	window->Show();
}

#include "../Sub/pQuestMenu.h"
void pMainMenu::NewQuestMenu(wxCommandEvent& event) {
	pQuestMenu* window = new pQuestMenu(this);
	window->Show();
}

void pMainMenu::QuestInsertKey(wxFileDirPickerEvent& event) {
	wxString wxfiPath = event.GetPath();
	std::string fiPath = wxfiPath.mb_str().data();
	
	std::vector<char> buf;
	fshelp::ReadFile(buf, fiPath);
	
	savefile save;
	save.QuestInsertKey(m_spinCtrlQuestIns->GetValue(), buf);
}

void pMainMenu::OnFixQuestFlags(wxCommandEvent& event) {
	if (!buffer::systemSaveBuffer.empty()) {
		savefile save;
		save.ChangeFlags();
	}
}

void pMainMenu::GenerateKeys(wxFileDirPickerEvent& event) {
	//wxString wxfiPath = event.GetPath();
	//std::string fiPath = wxfiPath.mb_str().data();
	//
	//std::vector<char> buf;
	//std::vector<char> sKey, pKey;
	//fshelp::ReadFile(buf, fiPath);
	//
	////fix
	////crypto::TestRsa(buf.data(), buf.size());
	//
	////sKey = crypto::GenerateSecretKey(buf, 1);
	////pKey = crypto::GeneratePublicKey(buf.data(), 0);
	//
	//
	//
	//fshelp::CreateFile(sKey, fiPath + ".sKey");
}

#include "../Sub/pFloatTool.h"
void pMainMenu::NewFloatTool(wxCommandEvent& event) {
	pFloatTool *window = new pFloatTool(this);
	window->Show();
}

#if __has_include("sim.h")
# include "sim.h"

void pMainMenu::SimulationRebuildQuestForMHGU(wxFileDirPickerEvent& event) {
	wxString wxfiPath = event.GetPath();
	std::string fiPath = wxfiPath.mb_str().data();
	
	std::vector<char> buf;
	fshelp::ReadFile(buf, fiPath);
	if (!m_checkBoxMHXX->GetValue()) simulation::RepackFor_MHGU(buf.data());
	if (m_checkBoxMHXX->GetValue()) simulation::RepackFor_MHXX(buf.data());
	fshelp::CreateFile(buf, fiPath + ".rebuild.arc");
}
#else
void pMainMenu::SimulationRebuildQuestForMHGU(wxFileDirPickerEvent& event) {
	event.Skip();
}
#endif

void pMainMenu::QuestExtractAllMHGU(wxCommandEvent& event) {
	savefile save;
	std::vector<char> buf;
	std::string name;
	int i = 0;
	do {
		name = save.QuestExtractMHGU(i, buf);
		i++;
		fshelp::CreateFile(buf, filewd + "\\quests\\" + name);
		buf.clear();
	} while (!name.empty());
}