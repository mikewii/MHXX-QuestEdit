sQuestSelector_MAGIC = 0x0CCDB48;

struct sQuestSelector_s {
	void*		Magic;
	uint32_t	Unk;
	
	uint8_t		QuestListNum; // 0x20
	uint8_t		QuestLvlTblNum; // 0x21

	uint32_t*	pQB; // 0x800 + 0x3CC pcQuestBoard

	uint8_t		MasterID(sGameControl); // 0xB00 + 0x9E was 0xFF
	uint8_t		HostID(sGameControl); // 0xB00 + 0x9F was 0xFF
	uint8_t		JoinNum(sGameControl); // 0xBA0 may be biggerS
	uint8_t		LocalHostID; // 0xBA1

	uint32_t	SessionIndx(sNetControl); // 0x800 + 0x3C4

	uint8_t		QbResult; // 0x8C00 + 0x138

	uint32_t	QuestID; // 0x8C00 + 0x178

	uint32_t	PastTime; // 0x800 + 0xD80

	uint32_t	JoinMax; // 0xAC00 + 0x194
	uint32_t	JoinNum; // 0xAC00 + 0x198
	uint32_t	IsHost[4]; // 0xAC00 + 0x19C

	uint8_t		TicketColor; // 0xADF0

	uint32_t	DailyData; // 0xAC00 + 0x1F4 cQuestDaily

	uint32_t	QuestDataDL[4]; // 0xAC00 + 0x22C

	uint32_t	QuestArchiveFixDL; // 0xAC00 + 0x354 


	uint8_t		QuestNo; // 0xBB0
	

}