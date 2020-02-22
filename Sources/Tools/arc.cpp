#include "Tools/arc.hpp"
#include "Tools/fshelp.hpp"
#include "Tools/zpipe.hpp"
#include <io.h>

bool ARC::read(std::vector<char> &buffer, std::string &dir) {
	workingDir = dir;

	arc_s* header = (arc_s*)(&(buffer.data()[0]));
	
	if (header->Magic != ARC_MAGIC) return false;
	
	// fixing pointers in files
	for(int i = 0 ; i < header->FilesNum ; i++) {
		fixFile(header, i);
		chdir(workingDir.c_str());
		unpackFile(header, i);
	}
	
	return true;
}

void ARC::fixFile(arc_s* header, int id) { 
	arcFile_s* file = (arcFile_s*)(&header->Files[id]);
	file->pDataPosition = reinterpret_cast<uint64_t>(header) + file->pDataPosition;
	if (header->Version == 17) {
		file->DecompressedSize &= ~(0x20000000 + 0x40000000);
	}
}

void ARC::unpackFile(arc_s* header, int id) {
	arcFile_s* file = (arcFile_s*)(&header->Files[id]);
	std::string temp = file->Filename;
	std::string fileName;
	int pos, count = 0;
	std::vector<int> positions;
	int index = 0;
	
	// extract file name:
	pos = temp.find_last_of('\\');
	fileName = temp.substr(pos + 1, sizeof(file->Filename));
	
	do {
		pos = temp.find('\\', index);
		positions.push_back(pos);
		if (pos != -1) count++;
		index += pos + 1;
	} while (pos != -1);
	
	index = 0;
	std::string folderNames[count];
	std::string nextpath = workingDir;
	for (int i = 0; i < count; i++) {
		// extract names for folders:
		folderNames[i] = temp.substr(index, positions[i] - index + 1);
		index = positions[i] + 1;
		folderNames[i].pop_back();
		// create folders:
		nextpath += "\\" + folderNames[i];
		mkdir(nextpath.c_str());
	}
	
	// extraxt compressed data:
	chdir(nextpath.c_str());
	FILE* fout;
	fout = fopen(fileName.c_str(), "wb");
	
	std::vector<char> data;
	std::vector<char> dataOut;
	char* point = (char *)file->pDataPosition;
	for (int i = 0; i < file->CompressedSize; i++) {
		data.push_back(point[i]);
	}
	
	zlib_mem::inflate_mem(data, dataOut);
	
	
	fwrite(dataOut.data(), dataOut.size(), 1, fout);
	fclose(fout);
}


//////////////////////////////////////////////////////////////////////////////////////////////

void	ARC::make(std::string outdir, std::string cwd, wxArrayString &files, int filesN, int version) {
	/* TODO:
	 * extention hash*/
	workingDir = cwd;
	std::vector<char> headerBuf(sizeof(arc_s));
	std::vector<char> filesBuf[filesN];
	std::vector<char> compressDataBuf[filesN];
	wxString fileName;
	
	arc_s *header = (arc_s*)(&(headerBuf.data()[0]));
	header->Version = version;
	header->Magic = ARC_MAGIC;
	header->FilesNum = filesN;
	
	// extract filename
	fileName = files[0].substr(0, workingDir.size());
	int pos = fileName.find_last_of('\\');
	fileName.Remove(0, pos);
	if (fileName.Contains("_arc")) {
		pos = fileName.find_last_of("_");
		fileName.replace(pos, 1, ".");
	} else {
		fileName << ".arc";
	}
	fileName = outdir + fileName;
	
	// make files:
	for (int i = 0; i < filesN; i++) {
		FILE* fi;
		fi = fopen(files[i].c_str(), "rb");
		fseek(fi, 0, SEEK_END);
		int decSize = ftell(fi);
		rewind(fi);
		
		filesBuf[i].resize(sizeof(arcFile_s));
		arcFile_s *file = (arcFile_s*)(&(filesBuf[i].data()[0]));
		fixPath(files[i]);
		// copy filename:
		for (int p = 0; p < files[i].size(); p++) {
			file->Filename[p] = files[i].data()[p];
		}
		
		zlib_mem::deflatePipe(fi, compressDataBuf[i]);
		fclose(fi);
		file->DecompressedSize = decSize ^ ARCv17_LOCK;
		file->CompressedSize = compressDataBuf[i].size();
	}
	
	
	// write .arc file
	uint32_t pointers[filesN];
	chdir(workingDir.c_str());
	FILE* fout;
	fout = fopen(fileName.c_str(), "wb");
	fwrite(headerBuf.data(), 1, headerBuf.size(), fout);
	for (int i = 0; i < filesN; i++) {
		fwrite(filesBuf[i].data(), 1, filesBuf[i].size(), fout);
	}
	for (int i = 0; i < filesN; i++) {
		pointers[i] = ftell(fout);
		fwrite(compressDataBuf[i].data(), 1, compressDataBuf[i].size(), fout);
	}
	for (int i = 0; i < filesN; i++) {
		pos = sizeof(arc_s) + (sizeof(arcFile_s) * i) + 76;
		fseek(fout, pos, 0);
		fwrite(&pointers[i], 1, 4, fout);
	}
	
	fclose(fout);
	
}

void	ARC::packFile(std::string fname, std::string dir) {
	
}

void	ARC::fixPath(wxString &path) {
	path.Remove(0, workingDir.size());
	int pos = path.find_first_of("\\\\");
	if ((pos != -1) && (pos == 0)) {
		path.erase(pos, 1);
	}
}