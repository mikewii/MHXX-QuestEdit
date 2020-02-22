#pragma once
#include <wx/arrstr.h>

const char* questLv[] = { 
	"1*",
	"2*",
	"3*",
	"4*",
	"5*",
	"6*",
	"7*",
	"8*",
	"9*",
	"10*",
	"G1",
	"G2",
	"G3",
	"G4",
	"Special"
	/*"?",
	"??",
	"???",
	"????",
	"?????",
	"??????",
	"???????",
	"????????",
	"?????????",
	"??????????",
	"G?",
	"G??",
	"G???",
	"G????",
	"Special" */
};
const wxArrayString wxQuestLv(15, questLv);

const char*	maps[] = { 
	"J. Frontier (D)",
	"J. Frontier (N)",
	"V. Hills (D)",
	"V. Hills (N)",
	"A. Ridge (D)",
	"A. Ridge (N)",
	"M. Peaks (D)",
	"M. Peaks (N)",
	"Dunes",
	"D. Island",
	"Marshlands",
	"Volcano",
	"A. Steppe",
	"Primal Forest",
	"F. Seaway",
	"V. Hollow",
	"Forlorn Arena",
	"Sanctuary",
	"Ingle Isle",
	"Polar Field",
	"S. Pinnacle",
	"Wyvern's End",
	"Arena",
	"V. Slayground",
	"F. Slayground",
	"Desert",
	"Jungle",
	"Ruined Pinnacle",
	"Castle Schrade",
	"Fortress",
	"Forlorn Citadel"
};
const wxArrayString wxMaps(31, maps);

const char* entryType[] = { 
	"None",
	"HR 2 and up",
	"HR 3 and up",
	"HR 4 and up",
	"HR 5 and up",
	"HR 6 and up",
	"HR 7 and up",
	"HR 8 and up",
	"HR 9 and up",
	"HR 10 and up",
	"HR 11 and up",
	"HR 12 and up",
	"HR 13 and up",
	"HR 20 and up",
	"HR 25 and up",
	"HR 30 and up",
	"HR 45 and up",
	"HR 50 and up",
	"HR 60 and up",
	"HR 100 and up",
	"Great Swords only",
	"Long Swords only",
	"Sword & Shields only",
	"Dual Blades only",
	"Lances only",
	"Gunlances only",
	"Hammers only",
	"Hunting Horns only",
	"Switch Axes only",
	"Charge Blades only",
	"Insect Glaives only",
	"Light Bowguns only",
	"Heavy Bowguns only",
	"Bows only",
	"Blademasters only",
	"Gunners only",
	"Guild Style only",
	"Striker Style only",
	"Aerial Style only",
	"Adept Style only",
	"Valor Style only",
	"Alchemy Style only",
	"No Prowlers",
	"Prowlers only",
	"RARE 1 weapons only",
	"No armor/talismans",
	"On-site items only",
	"One player max",
	"Two players max",
	"Three players max"
};
const wxArrayString wxEntryType(50, entryType);

const char* monsterLv[] = { 
	"Dumb",
	"Low Rank",
	"Low Rank+",
	"High Rank",
	"High Rank+",
	"G Rank",
	"G Rank+"
};
const wxArrayString wxMonsterLv(7, monsterLv);

const char* clearType[] = { 
	"None",
	"And",
	"Or"
};
const wxArrayString wxClearType(3, clearType);

const char* questType[] = { 
	"Hunting",
	"Slaying",
	"Capture",
	"Gathering",
	"hunt-a-ton",
	"hunt-a-ton arena",
};
const wxArrayString wxQuestType(6, questType);

const char* clearParam[] = { 
	"Capture",
	"Hunt",
	"Gathering",
	"Hunt All",
	"Slay All",
	"Deliver"
	"",
	"",
	"Break"
};
const wxArrayString wxClearParam(9, clearParam);

const char* startType[] = { 
	"Base Camp",
	"Random",
	"Elder Dragon Fight"
};
const wxArrayString wxStartType(3, startType);