#pragma once

#include "types.h"
#include <string>
#include <vector>
#include <zlib.h>
#include <wx/string.h>
#include <wx/arrstr.h>

/*	.GMD = 0x2E 47 4D 44
 *	.gmd = 0x2E 67 6D 64
 *	ext hash = 0x24 2B B2 9A
 **/

/*TODO:
 *Extentions and extentions hash*/

static const int ARC_MAGIC = 0x00435241; // ARC

class ARC
{
private:
	static const int ARCv17_LOCK = 0x40000000;
	std::string		workingDir;
public:
#pragma pack(push, 1)
	struct arcFile_s {
		char		Filename[64];
		uint32_t	ExtentionHash;
		uint32_t	CompressedSize;
		uint32_t	DecompressedSize; // xor 20000000 + 40000000 if version is 17
		uint32_t	pDataPosition; // 78 9C - zlib header
	};

	struct arc_s {
		uint32_t	Magic;
		uint16_t	Version;
		uint16_t	FilesNum;
		uint32_t	Padding;
		arcFile_s	Files[];
	};
#pragma pack(pop)
	
	virtual bool	read(std::vector<char> &buffer, std::string &dir);
	virtual void	make(std::string outdir, std::string cwd, wxArrayString &files, int filesN, int version = 17);
	virtual void	fixFile(arc_s* header, int id);
	virtual void	fixPath(wxString &path);
	virtual void	unpackFile(arc_s* header, int id);
	virtual void	packFile(std::string fname, std::string dir = "");
};