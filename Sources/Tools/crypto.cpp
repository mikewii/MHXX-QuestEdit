#include "Tools/crypto.hpp"
#include <stdlib.h>
#include <string>
#include <openssl/crypto.h>
#include <openssl/sha.h>

short decode_order[] = { 1, 5, 4, 11, 7, 17, 10, 23, 13, 29, 16, 29, 13, 23, 10, 17, 7, 11, 4, 5, 1 };
short flush_order[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
#pragma pack(push, 1)
const unsigned char publicKey_modulus[] =
{
  0xFE, 0x14, 0x94, 0x8D, 0xB0, 0x71, 0x3C, 0xAD, 
  0x03, 0x49, 0x2E, 0xEE, 0x49, 0x90, 0x3F, 0x9F, 
  0xFC, 0x4C, 0xB1, 0x34, 0xF5, 0xAE, 0xAF, 0xC3, 
  0x42, 0xB5, 0xF4, 0x9A, 0x7B, 0x70, 0x6B, 0x0D,
  0xA3, 0x12, 0x03, 0x0C, 0x35, 0x68, 0xFC, 0xFC, 
  0x16, 0x16, 0x58, 0xFF, 0x72, 0x72, 0xC4, 0x60,
  0x10, 0xBF, 0xE9, 0xF9, 0xB7, 0xE1, 0x4C, 0x7F,
  0x8E, 0x98, 0x8A, 0xC4, 0x9F, 0xAA, 0x2D, 0xD5, 
  0x27, 0x65, 0x9C, 0x10, 0x51, 0xDA, 0x4E, 0xA7,
  0x68, 0x7D, 0xDF, 0xDF, 0x93, 0x8A, 0x35, 0xFF,
  0x9F, 0x78, 0xB3, 0x26, 0x19, 0x26, 0xF9, 0x32,
  0x98, 0x8E, 0x32, 0x53, 0x25, 0x61, 0x09, 0xC2,
  0xEF, 0x8D, 0x50, 0xFA, 0x5C, 0x44, 0xCD, 0x49, 
  0xB7, 0x81, 0x4C, 0x08, 0x18, 0xDF, 0x74, 0x2B,
  0xA6, 0x0A, 0x92, 0xF0, 0x20, 0xC0, 0xD2, 0x06,
  0x3D, 0xDB, 0xDE, 0x74, 0x7C, 0xD3, 0xB8, 0x66,
  0xA0, 0x98, 0x89, 0x21, 0xCC, 0x8B, 0xB0, 0xFA,
  0x54, 0x7D, 0xE9, 0x87, 0x83, 0x3B, 0x35, 0x1E, 
  0xB4, 0x3F, 0xE4, 0xD9, 0x60, 0x53, 0xB1, 0x78, 
  0xE2, 0x63, 0x08, 0x3F, 0x21, 0x0C, 0xDB, 0x8D,
  0xE4, 0xED, 0xC6, 0x1E, 0x2A, 0x62, 0x0F, 0x13,
  0x5F, 0xB0, 0xBB, 0x0D, 0x6C, 0xE4, 0x2E, 0x7D,
  0x00, 0xF8, 0xE8, 0xF4, 0xA1, 0x69, 0xD5, 0x1D, 
  0x83, 0x1C, 0x93, 0x02, 0x02, 0xDD, 0x74, 0x10,
  0xD9, 0xC8, 0xFB, 0xF3, 0x1A, 0x9B, 0x5E, 0x2E,
  0x11, 0x25, 0x4B, 
};

const unsigned char publicKey_exponent[] =
{
  0x02, 0x03, 0x01, 0x00, 0x01
};
#pragma pack(pop)

std::vector<char>	crypto::CalculateSHA256(std::vector<char> &source) {
	std::vector<char> out(32);
	SHA256((const unsigned char *)source.data(), source.size(), (unsigned char *)out.data());
	
	return out;
}

std::vector<char> crypto::GenerateSecretKey(std::vector<char> &source, int check) {
	std::vector<char> sha256;
	std::vector<char> dest;
	
	sha256 = CalculateSHA256(source);
	short key1 = SECRET_KEY_SIZE;
	if (check != 0) key1 += 2;
	
	int sha256_size = sha256.size();
	int res1 = unkCheck(key1);
	int res2 = unkCheck(sha256_size);
	int size = key1 + res1 + sha256_size + res2 + 2;
	int res3 = unkCheck(size);
	size += res3 + 1;
	if (size > 256) return dest;
	
	int pos0 = size - sha256.size();
	dest.resize(size, 0xFF);
	
	for (int i = 0; i < sha256.size(); i++) {
		char data = sha256.data()[i];
		dest.at(pos0) = data;
		pos0++;
	}
	
	int pos = 0;
	short key2 = 0x30;
	dest.at(pos) = key2;
	pos++;
	unkKeyCopy(dest.data() + pos, res3, key2 + 1);
	pos += res3;
	dest.at(pos) = key2;
	pos++;
	unkKeyCopy(dest.data() + pos, res1, key1);
	pos++;
	
	memcpy(dest.data() + pos, (char *)secretKey + 2, SECRET_KEY_SIZE);
	
	if (check != 0) {
		int pos = SECRET_KEY_SIZE + 4;
		dest.at(pos) = 5;
		pos++;
		dest.at(pos) = 0;
		pos++;
		dest.at(pos) = 4;
		pos++;
		unkKeyCopy(dest.data() + pos, res2, sha256_size);
	}
	return dest;
}

int crypto::unkCheck(uint32_t value) {
	if (value <= 0x7F)
		return 1;
	if (value <= 0xFF)
		return 2;
	if (value <= 0xFFFF)
		return 3;
	if (value > 0xFFFFFF)
		return 5;
	return 4;
}

void	crypto::unkKeyCopy(char* pos, int size, int val) {
	if (size == 1) {
		val <<= 0x19;
		val >>= 0x19;
		*pos = val;
		return;
	}
}

void	crypto::validateQuestKey(char* keyData) {
	std::vector<char> key(0x100);
	
	int size = pKEY_SIZE / 4;
	int pos = 0;
	uint32_t dataRes = 0;
	for (int i = size - 1; i >= 0;) {
		uint32_t data = *(uint32_t *)keyData;
		uint8_t lastByte = keyData[3];
		keyData += 4;
		dataRes = (_byteswap_ulong(data) >> 8 << 8) | lastByte;
		pos = i--;
		uint32_t* bufPos= (uint32_t*)&key.data()[0] + pos;
		*bufPos = dataRes;
	}
	
	uint32_t check = 0;
	uint32_t *bufPos = (uint32_t*)&key.data()[0] + (pKEY_SIZE / 4) - 1;
	check = *bufPos;
	
	if (check == 0) return;
	int b = 1;
}

int crypto::unkKeySubstraction(uint32_t* dest, uint32_t* src1, uint32_t* src2, int size) {
	int overflow = 0;
	size--;
	if (size <= 0) return overflow;
	
	uint32_t check;
	for (int i = size; i >= 0;) {
		uint32_t data1 = *src1++;
		uint32_t data2 = *src2++;
		data1 += overflow;

		uint64_t result = data1 - data2;
		check = result >> 32;
		if (check == 0) overflow = 0;
		else overflow = 1;
		
		*dest++ = result;
		i--;
	}
	
	return overflow;
}

/* add v2 to v1 then
 * return hi value of uint64_t
 * to be treated as overflow
 **/
uint64_t	adds(uint64_t &v1, uint64_t v2) {
	return (v1 += v2) >> 32;
}

void crypto::unkKeyMessage(uint32_t* dest, uint32_t* src1, uint32_t* src2) {
	uint64_t data1;
	uint64_t data2;
	uint64_t resData = 0;
	uint64_t buf[3] = { 0 };
	uint64_t check1 = 0, check2 = 0, check3 = 0;
	uint32_t lo, hi;
	bool done;
	bool started = false;
	short bufNum = 0;
	
	// order is lo, hi lo, hi lo lo etc.
	// hi of last value
	bool reverse = false;
	for (int i = 1; i >= 0;) {
		int s2 = 0;
		resData = 0;
		done = false;
		if (started) bufNum++;
		if (bufNum == 3) bufNum = 0;
		for (int s1 = i; s1 != 0;) {
			started = true;
			s1--;
			data1 = src1[s1];
			data2 = src2[s2];
			s2++;
			uint64_t mul = data1 * data2;
			lo = mul;
			hi = mul >> 32;
			
			check1 = adds(buf[bufNum], hi);
			check2 = adds(resData, lo);
			if (check2 > 0) {
				buf[bufNum] += check2;
			}
			if (check1 > 0)
			{
				int b = 0;
			}
			if ((i > 1) && !done) {
				resData += buf[bufNum - 1];
				done = true;
			}
		}
		*dest = resData;
		dest++;
		
		if (bufNum >= 1) buf[bufNum - 1] = 0;
		
		if (reverse) i--;
		else i++;
		if (i == 16) reverse = true;
	}
}

//std::vector<char>	crypto::GeneratePublicKey(char * source, int src_size) {
//	unsigned char dest[0x1000] = { 0xCC };
//}





//#include <openssl/crypto.h>
//#include <openssl/err.h>
//#include <openssl/rand.h>
//#include <openssl/bn.h>
//#include <openssl/rsa.h>
//
//# define TEST_int_eq(a, b)    test_int_eq(__FILE__, __LINE__, #a, #b, a, b)
//
//
//int RSA_set0_key(RSA *r, BIGNUM *n, BIGNUM *e, BIGNUM *d)
//{
//	/* If the fields n and e in r are NULL, the corresponding input
//	 * parameters MUST be non-NULL for n and e.  d may be
//	 * left NULL (in case only the public key is used).
//	 */
//	if ((r->n == NULL && n == NULL)
//	    || (r->e == NULL && e == NULL))
//		return 0;
//
//	if (n != NULL) {
//		BN_free(r->n);
//		r->n = n;
//	}
//	if (e != NULL) {
//		BN_free(r->e);
//		r->e = e;
//	}
//	if (d != NULL) {
//		BN_clear_free(r->d);
//		r->d = d;
//		BN_set_flags(r->d, BN_FLG_CONSTTIME);
//	}
//
//	return 1;
//}
//
//int RSA_set0_factors(RSA *r, BIGNUM *p, BIGNUM *q)
//{
//	/* If the fields p and q in r are NULL, the corresponding input
//	 * parameters MUST be non-NULL.
//	 */
//	if ((r->p == NULL && p == NULL)
//	    || (r->q == NULL && q == NULL))
//		return 0;
//
//	if (p != NULL) {
//		BN_clear_free(r->p);
//		r->p = p;
//		BN_set_flags(r->p, BN_FLG_CONSTTIME);
//	}
//	if (q != NULL) {
//		BN_clear_free(r->q);
//		r->q = q;
//		BN_set_flags(r->q, BN_FLG_CONSTTIME);
//	}
//
//	return 1;
//}
//
//int RSA_set0_crt_params(RSA *r, BIGNUM *dmp1, BIGNUM *dmq1, BIGNUM *iqmp)
//{
//	/* If the fields dmp1, dmq1 and iqmp in r are NULL, the corresponding input
//	 * parameters MUST be non-NULL.
//	 */
//	if ((r->dmp1 == NULL && dmp1 == NULL)
//	    || (r->dmq1 == NULL && dmq1 == NULL)
//	    || (r->iqmp == NULL && iqmp == NULL))
//		return 0;
//
//	if (dmp1 != NULL) {
//		BN_clear_free(r->dmp1);
//		r->dmp1 = dmp1;
//		BN_set_flags(r->dmp1, BN_FLG_CONSTTIME);
//	}
//	if (dmq1 != NULL) {
//		BN_clear_free(r->dmq1);
//		r->dmq1 = dmq1;
//		BN_set_flags(r->dmq1, BN_FLG_CONSTTIME);
//	}
//	if (iqmp != NULL) {
//		BN_clear_free(r->iqmp);
//		r->iqmp = iqmp;
//		BN_set_flags(r->iqmp, BN_FLG_CONSTTIME);
//	}
//
//	return 1;
//}
//
//#define SetPublicKey \
//	RSA_set0_key(key,											\
//					BN_bin2bn(n, sizeof(n)-1, NULL),			\
//					BN_bin2bn(e, sizeof(e)-1, NULL),			\
//					NULL);										\
//	memcpy(c, ctext_ex, sizeof(ctext_ex) - 1);                  \
//	return sizeof(ctext_ex) - 1;
//
//# define SetKey \
//    RSA_set0_key(key,                                           \
//                 BN_bin2bn(n, sizeof(n)-1, NULL),               \
//                 BN_bin2bn(e, sizeof(e)-1, NULL),               \
//                 BN_bin2bn(d, sizeof(d)-1, NULL));              \
//    RSA_set0_factors(key,                                       \
//                     BN_bin2bn(p, sizeof(p)-1, NULL),           \
//                     BN_bin2bn(q, sizeof(q)-1, NULL));          \
//    RSA_set0_crt_params(key,                                    \
//                        BN_bin2bn(dmp1, sizeof(dmp1)-1, NULL),  \
//                        BN_bin2bn(dmq1, sizeof(dmq1)-1, NULL),  \
//                        BN_bin2bn(iqmp, sizeof(iqmp)-1, NULL)); \
//    memcpy(c, ctext_ex, sizeof(ctext_ex) - 1);                  \
//    return sizeof(ctext_ex) - 1;
//
//static int key1(RSA *key, unsigned char *c)
//{
//	static unsigned char n[] = 
////		"\x00\xAA\x36\xAB\xCE\x88\xAC\xFD\xFF\x55\x52\x3C\x7F\xC4\x52\x3F"
////        "\x90\xEF\xA0\x0D\xF3\x77\x4A\x25\x9F\x2E\x62\xB4\xC5\xD9\x9C\xB5"
////        "\xAD\xB3\x00\xA0\x28\x5E\x53\x01\x93\x0E\x0C\x70\xFB\x68\x76\x93"
////        "\x9C\xE6\x16\xCE\x62\x4A\x11\xE0\x08\x6D\x34\x1E\xBC\xAC\xA0\xA1"
////        "\xF5";
//		
//		"\x02\x4B\x25\x11\x2E\x5E\x9B\x1A"
//		"\xF3\xFB\xC8\xD9\x10\x74\xDD\x02"
//		"\x02\x93\x1C\x83\x1D\xD5\x69\xA1"
//		"\xF4\xE8\xF8\x00\x7D\x2E\xE4\x6C"
//		"\x0D\xBB\xB0\x5F\x13\x0F\x62\x2A"
//		"\x1E\xC6\xED\xE4\x8D\xDB\x0C\x21"
//		"\x3F\x08\x63\xE2\x78\xB1\x53\x60"
//		"\xD9\xE4\x3F\xB4\x1E\x35\x3B\x83"
//		"\x87\xE9\x7D\x54\xFA\xB0\x8B\xCC"
//		"\x21\x89\x98\xA0\x66\xB8\xD3\x7C"
//		"\x74\xDE\xDB\x3D\x06\xD2\xC0\x20"
//		"\xF0\x92\x0A\xA6\x2B\x74\xDF\x18"
//		"\x08\x4C\x81\xB7\x49\xCD\x44\x5C"
//		"\xFA\x50\x8D\xEF\xC2\x09\x61\x25"
//		"\x53\x32\x8E\x98\x32\xF9\x26\x19"
//		"\x26\xB3\x78\x9F\xFF\x35\x8A\x93"
//		"\xDF\xDF\x7D\x68\xA7\x4E\xDA\x51"
//		"\x10\x9C\x65\x27\xD5\x2D\xAA\x9F"
//		"\xC4\x8A\x98\x8E\x7F\x4C\xE1\xB7"
//		"\xF9\xE9\xBF\x10\x60\xC4\x72\x72"
//		"\xFF\x58\x16\x16\xFC\xFC\x68\x35"
//		"\x0C\x03\x12\xA3\x0D\x6B\x70\x7B"
//		"\x9A\xF4\xB5\x42\xC3\xAF\xAE\xF5"
//		"\x34\xB1\x4C\xFC\x9F\x3F\x90\x49"
//		"\xEE\x2E\x49\x03\xAD\x3C\x71\xB0"
//		"\x8D\x94\x14\xFE";
//		
//	static unsigned char e[] = "\x01\x00\x01\x03\x02"; // public exponent
//
//	static unsigned char d[] =
//	    "\x0A\x03\x37\x48\x62\x64\x87\x69\x5F\x5F\x30\xBC\x38\xB9\x8B\x44"
//	    "\xC2\xCD\x2D\xFF\x43\x40\x98\xCD\x20\xD8\xA1\x38\xD0\x90\xBF\x64"
//	    "\x79\x7C\x3F\xA7\xA2\xCD\xCB\x3C\xD1\xE0\xBD\xBA\x26\x54\xB4\xF9"
//	    "\xDF\x8E\x8A\xE5\x9D\x73\x3D\x9F\x33\xB3\x01\x62\x4A\xFD\x1D\x51";
//
//	static unsigned char p[] =
//	    "\x00\xD8\x40\xB4\x16\x66\xB4\x2E\x92\xEA\x0D\xA3\xB4\x32\x04\xB5"
//	    "\xCF\xCE\x33\x52\x52\x4D\x04\x16\xA5\xA4\x41\xE7\x00\xAF\x46\x12"
//	    "\x0D";
//
//	static unsigned char q[] =
//	    "\x00\xC9\x7F\xB1\xF0\x27\xF4\x53\xF6\x34\x12\x33\xEA\xAA\xD1\xD9"
//	    "\x35\x3F\x6C\x42\xD0\x88\x66\xB1\xD0\x5A\x0F\x20\x35\x02\x8B\x9D"
//	    "\x89";
//
//	static unsigned char dmp1[] =
//	    "\x59\x0B\x95\x72\xA2\xC2\xA9\xC4\x06\x05\x9D\xC2\xAB\x2F\x1D\xAF"
//	    "\xEB\x7E\x8B\x4F\x10\xA7\x54\x9E\x8E\xED\xF5\xB4\xFC\xE0\x9E\x05";
//
//	static unsigned char dmq1[] =
//	    "\x00\x8E\x3C\x05\x21\xFE\x15\xE0\xEA\x06\xA3\x6F\xF0\xF1\x0C\x99"
//	    "\x52\xC3\x5B\x7A\x75\x14\xFD\x32\x38\xB8\x0A\xAD\x52\x98\x62\x8D"
//	    "\x51";
//
//	static unsigned char iqmp[] =
//	    "\x36\x3F\xF7\x18\x9D\xA8\xE9\x0B\x1D\x34\x1F\x71\xD0\x9B\x76\xA8"
//	    "\xA9\x43\xE1\x1D\x10\xB2\x4D\x24\x9F\x2D\xEA\xFE\xF8\x0C\x18\x26";
//
//	static unsigned char ctext_ex[] =
//	    "\x1b\x8f\x05\xf9\xca\x1a\x79\x52\x6e\x53\xf3\xcc\x51\x4f\xdb\x89"
//	    "\x2b\xfb\x91\x93\x23\x1e\x78\xb9\x92\xe6\x8d\x50\xa4\x80\xcb\x52"
//	    "\x33\x89\x5c\x74\x95\x8d\x5d\x02\xab\x8c\x0f\xd0\x40\xeb\x58\x44"
//	    "\xb0\x05\xc3\x9e\xd8\x27\x4a\x9d\xbf\xa8\x06\x71\x40\x94\x39\xd2";
//	
//	SetPublicKey;
// 	//SetKey;
//}
//
//
//// PKCS1
//void crypto::TestRsa(char* source, int size)
//{
//	int ret = 0;
//	RSA *key;
//	unsigned char ptext[256];
//	unsigned char ctext[256];
//	static unsigned char ptext_ex[] = "\x54\x85\x9b\x34\x2c\x49\xea\x2a";
//	unsigned char ctext_ex[256];
//	int plen;
//	int clen = 0;
//	int num;
//	
//	plen = sizeof(ptext_ex) - 1;
//	
//	key = RSA_new();
//	clen = key1(key, ctext_ex);
//	
//	num = RSA_public_encrypt(plen,
//		ptext_ex,
//		ctext,
//		key,
//		RSA_PKCS1_PADDING);
//	
//	// look at num and clen
//	if(source != NULL) {
//		num = size;
//		num = RSA_public_decrypt(num, (const unsigned char*)source, ptext, key, RSA_PKCS1_PADDING);
//		return;
//		}
//	num = RSA_public_decrypt(num, ctext, ptext, key, RSA_PKCS1_PADDING);
//
//	
//	return;
//	
//}