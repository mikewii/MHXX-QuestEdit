#pragma once
#include "types.h"
#include <wx/arrstr.h>
#include <vector>

const uint32_t	GMD_MAGIC = 0x00444D47; // GMD
const uint32_t	GMD_VERSION = 0x00010302;

enum class questText_e {
	Title = 0,
	Client,
	Description,
	MainMonster,
	MainGoal,
	Failure,
	SubGoal
};

struct gmdAdv_s {
	uint32_t	unk[5];
};

struct gmdAdv2_s {
	uint32_t	unk[256];
};

/* in advanced gmd labes strings go first
 **/
struct gmd_s {
	uint32_t	Magic = GMD_MAGIC;
	uint32_t	Version = GMD_VERSION;
	uint32_t	padding;
	uint32_t	Hash;
	uint32_t	padding1;
	uint32_t	LabelsN;
	uint32_t	ItemsN;
	uint32_t	LabelsSize;
	uint32_t	ItemsSize;
	uint32_t	FilenameSize;
	char		Filename[];
	// strings:
};

class gmd
{
public:
  static int read(wxArrayString &names, wxArrayString &labels, std::vector<char> &source, uint32_t hash = 0);
	static void save(wxArrayString &names, std::vector<char> &dest, uint32_t hash, bool asTxt = false);
};

/* TODO:
 * Find out how hash used and how to calculate it
 * Find out what advanced gmd use their structures for
 * */