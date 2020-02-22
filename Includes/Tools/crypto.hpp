#pragma once
#include "types.h"
#include <vector>

const int SECRET_KEY_SIZE = 0xB;
const int pKEY_SIZE = 0x100;

const uint32_t unkFlags = 0x400020;

static uint32_t testdata_out[8] = { 0 };

static uint32_t testdata1[8] = {
	0x6F981FBA, 0xCF41D4B8, 0x581BB401, 0xBBAC1011,
	0xE8FF1CD8, 0x56899DB, 0x7CDA2D4, 0x927E9FCB };

// taken from crypto__key__questKey__reversed
static uint32_t testdata2[8] = { 
	0x7BA85BF8, 0x1E8BC51B, 0x36F2C95, 0x59E39AAC,
	0xD2843289, 0xC6436281, 0xDAF5D773, 0x80872906 };

const uint32_t secretKey[12] = { 
	0x90600FF, 0x1488660, 0x2040365, 0x9060001,
	0x1488660, 0x2040365, 0x9060002, 0x1488660,
	0x2040365, 0x5060003, 0x2030E2B, 0x1A
	};

class crypto
{
public:
	struct secretKey_s { // DER formated key
		uint8_t		subjectPublicKeyInfo[2]; // 0 1 | 0x30 31
		uint8_t		sKeyAlgorithmIdentifier; // 0x30 0D
		uint8_t		algorithmSize; 
		uint8_t		rsaEncryption[SECRET_KEY_SIZE];
		uint8_t		unk[3];
		uint8_t		sha256_size;
		uint8_t		sha256_hash[32];
	};
	
	static std::vector<char>	CalculateSHA256(std::vector<char> &source);
	static std::vector<char>	GenerateSecretKey(std::vector<char> &source, int check); // done
	static std::vector<char>	GeneratePublicKey(char* source, int src_size);
	static void					TestRsa(char* source, int size);
	static int					unkCheck(uint32_t value);
	static void					unkKeyCopy(char* pos, int size, int val);
	static void					validateQuestKey(char* keyData);
	static int					unkKeySubstraction(uint32_t* dest, uint32_t* src1, uint32_t* src2, int size);
	static void					unkKeyMessage(uint32_t* dest, uint32_t* src1, uint32_t* src2);
};