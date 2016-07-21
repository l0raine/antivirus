#include <Prague/prague.h>
#include <windows.h>
#include <string>
#include <vector>

#include "CharsetDecode.h"

// #################################################################################
// #################################################################################

// From <Microsoft SDK>\include\dbdaoint.h
//#define dbLangArabic _T(";LANGID=0x0401;CP=1256;COUNTRY=0")
//#define dbLangCzech _T(";LANGID=0x0405;CP=1250;COUNTRY=0")
//#define dbLangDutch _T(";LANGID=0x0413;CP=1252;COUNTRY=0")
//#define dbLangGeneral _T(";LANGID=0x0409;CP=1252;COUNTRY=0")
//#define dbLangGreek _T(";LANGID=0x0408;CP=1253;COUNTRY=0")
//#define dbLangHebrew _T(";LANGID=0x040D;CP=1255;COUNTRY=0")
//#define dbLangHungarian _T(";LANGID=0x040E;CP=1250;COUNTRY=0")
//#define dbLangIcelandic _T(";LANGID=0x040F;CP=1252;COUNTRY=0")
//#define dbLangNordic _T(";LANGID=0x041D;CP=1252;COUNTRY=0")
//#define dbLangNorwDan _T(";LANGID=0x0414;CP=1252;COUNTRY=0")
//#define dbLangPolish _T(";LANGID=0x0415;CP=1250;COUNTRY=0")
//#define dbLangCyrillic _T(";LANGID=0x0419;CP=1251;COUNTRY=0")
//#define dbLangSpanish _T(";LANGID=0x040A;CP=1252;COUNTRY=0")
//#define dbLangSwedFin _T(";LANGID=0x040B;CP=1252;COUNTRY=0")
//#define dbLangTurkish _T(";LANGID=0x041F;CP=1254;COUNTRY=0")
//#define dbLangJapanese _T(";LANGID=0x0411;CP=932;COUNTRY=0")
//#define dbLangChineseSimplified _T(";LANGID=0x0804;CP=936;COUNTRY=0")
//#define dbLangChineseTraditional _T(";LANGID=0x0404;CP=950;COUNTRY=0")
//#define dbLangKorean _T(";LANGID=0x0412;CP=949;COUNTRY=0")
//#define dbLangThai _T(";LANGID=0x041E;CP=874;COUNTRY=0")
//#define dbLangSlovenian _T(";LANGID=0x0424;CP=1250;COUNTRY=0")

// Code Page Identifiers: ms-help://MS.MSDNQTR.v80.en/MS.MSDN.v80/MS.WIN32COM.v10.en/intl/unicode_81rn.htm
#define CODEPAGE_SHIFT_JIS		932
#define CODEPAGE_ISO2022_JP		50221
#define CODEPAGE_EUC_JP			51932
#define CODEPAGE_CYRILLIC		1251

// #################################################################################

void _ChsetDec_Init()
{
}

void _ChsetDec_Deinit()
{
}

// #################################################################################

static unsigned char g_koi8_cp1251[256] =
{
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
	0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,
	0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
	0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F,
	0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
	0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F,
	0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47,
	0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F,
	0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57,
	0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F,
	0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67,
	0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F,
	0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77,
	0x78, 0x79, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7F,
	0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87,
	0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F,
	0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97,
	0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F,
	0xA0, 0xA1, 0xA2, 0xB8, 0xBA, 0xA5, 0xB3, 0xBF,
	0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF,
	0xB0, 0xB1, 0xB2, 0xA8, 0xAA, 0xB5, 0xB2, 0xAF,
	0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF,
	0xFE, 0xE0, 0xE1, 0xF6, 0xE4, 0xE5, 0xF4, 0xE3,
	0xF5, 0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE,
	0xEF, 0xFF, 0xF0, 0xF1, 0xF2, 0xF3, 0xE6, 0xE2,
	0xFC, 0xFB, 0xE7, 0xF8, 0xFD, 0xF9, 0xF7, 0xFA,
	0xDE, 0xC0, 0xC1, 0xD6, 0xC4, 0xC5, 0xD4, 0xC3,
	0xD5, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE,
	0xCF, 0xDF, 0xD0, 0xD1, 0xD2, 0xD3, 0xC6, 0xC2,
	0xDC, 0xDB, 0xC7, 0xD8, 0xDD, 0xD9, 0xD7, 0xDA
};

static unsigned char g_iso_5_cp1251[256] =
{
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
	0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 
	0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
	0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
	0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
	0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 
	0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
	0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
	0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
	0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 
	0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 
	0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 
	0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 
	0x78, 0x79, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7F, 
	0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 
	0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 
	0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 
	0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 
	0xA0, 0xA1, 0xA2, 0xB8, 0xBA, 0xA5, 0xB3, 0xBF, 
	0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 
	0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 
	0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 
	0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7, 
	0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF, 
	0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 
	0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF, 
	0xF0, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 
	0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE, 0xFF, 
	0xB0, 0xB1, 0xB2, 0xA8, 0xAA, 0xB5, 0xB2, 0xAF, 
	0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF
};

static unsigned char g_iso_1_cp1251[256] =
{
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
	0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 
	0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
	0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 
	0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
	0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 
	0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
	0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 
	0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
	0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 
	0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 
	0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 
	0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 
	0x78, 0x79, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7F, 
	0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 
	0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 
	0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 
	0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 
	0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 
	0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 
	0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 
	0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 
	0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 
	0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 
	0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7, 
	0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF, 
	0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 
	0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF, 
	0xF0, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 
	0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE, 0xFF
};

static unsigned char g_mac_cp1251[256] =
{
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
	0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,
	0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
	0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F,
	0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
	0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F,
	0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47,
	0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F,
	0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57,
	0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F,
	0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67,
	0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F,
	0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77,
	0x78, 0x79, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7F,
	0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
	0x38, 0x39, 0x21, 0x40, 0x23, 0x24, 0x25, 0x5E,
	0x26, 0x2A, 0xE2, 0xE3, 0xE4, 0xF0, 0xF6, 0xF7,
	0xF9, 0xFA, 0xFB, 0xFD, 0xFE, 0xFF, 0xF5, 0xDF,
	0x3C, 0x3E, 0x3F, 0x2F, 0x21, 0x61, 0x62, 0x63,
	0x64, 0x65, 0x66, 0x67, 0x2A, 0x68, 0x69, 0xF8,
	0x6B, 0x6C, 0x6D, 0x6E, 0x6F, 0x70, 0x71, 0xE1,
	0xFC, 0x74, 0x75, 0x76, 0x41, 0x42, 0x43, 0x44,
	0x45, 0xE7, 0xE5, 0x48, 0xC0, 0xC1, 0xEB, 0xC2,
	0xE9, 0xC3, 0xE6, 0xE8, 0xED, 0xEA, 0xEB, 0xEC,
	0x5F, 0xC4, 0xF1, 0xEE, 0xEF, 0x36, 0xC5, 0x5F,
	0xC9, 0xF4, 0xF2, 0xF3, 0xC6, 0x36, 0x37, 0x38,
	0xC8, 0xC7, 0xC9, 0xCB, 0xCA, 0xCC, 0xE6, 0xCD,
	0xCF, 0xCE, 0xD0, 0xD1, 0xD3, 0xD2, 0xD4, 0xD5,
	0xF0, 0xD6, 0xD8, 0xD7, 0xD9, 0xDB, 0xDA, 0xF7,
	0xF8, 0xDD, 0xDC, 0xDE, 0xDF, 0xE0, 0xFF, 0xFF
};

// #################################################################################

void	_A2W(const char * src, tDWORD nSrcLen, std::wstring& dst, tUINT cp);

// #################################################################################

void _ChsetDec_Parse(const tCHAR * strCharset, CHARSET& chs)
{
	if( !strCharset )
		return;
	
	if( !strncmp(strCharset, "windows-", sizeof("windows-") - 1) )
	{
		chs.nType = CHARSET::eChsWindows;
		chs.nCodepage = atol(strCharset + sizeof("windows-") - 1);
	}
	else if( !strncmp(strCharset, "utf-", sizeof("utf-") - 1) )
	{
		chs.nType = CHARSET::eChsUtf;
		chs.nSubType = atol(strCharset + sizeof("utf-") - 1);
	}
	else if( !strncmp(strCharset, "koi8-", sizeof("koi8-") - 1) )
	{
		chs.nType = CHARSET::eChsKoi8;

		const tCHAR * strSubType = strCharset + sizeof("koi8-") - 1;
		if( !strcmp(strSubType, "r") )
			chs.nCodepage = CODEPAGE_CYRILLIC;
		else
			chs.nCodepage = 0;

		chs.nSubType = *strSubType;
	}
	else if( !strncmp(strCharset, "ibm866", sizeof("ibm866") - 1) )
	{
		chs.nType = CHARSET::eChsOem;
	}
	else if( !strncmp(strCharset, "iso-8859-", sizeof("iso-8859-") - 1) )
	{
		chs.nType = CHARSET::eChsISO8859;
		chs.nSubType = atol(strCharset + sizeof("iso-8859-") - 1);
		
		if( chs.nSubType == 5 )
			chs.nCodepage = CODEPAGE_CYRILLIC;
		else if( chs.nSubType == 1 )
			chs.nCodepage = CODEPAGE_CYRILLIC;
		else
			chs.nCodepage = 0;
	}
	else if( !strncmp(strCharset, "iso-2022-", sizeof("iso-2022-") - 1) )
	{
		chs.nType = CHARSET::eChsWindows;
		
		const tCHAR * strSubType = strCharset + sizeof("iso-2022-") - 1;
		if( !strcmp(strSubType, "jp") )
			chs.nCodepage = CODEPAGE_ISO2022_JP;
	}
	else if( !strncmp(strCharset, "x-mac-", sizeof("x-mac-") - 1) )
	{
		chs.nType = CHARSET::eChsXMac;
		
		const tCHAR * strSubType = strCharset + sizeof("x-mac-") - 1;
		if( !strcmp(strSubType, "cyrillic") )
			chs.nCodepage = CODEPAGE_CYRILLIC;
		else
			chs.nCodepage = 0;
	}
	else if( !strncmp(strCharset, "euc-", sizeof("euc-") - 1) )
	{
		chs.nType = CHARSET::eChsWindows;
		
		const tCHAR * strSubType = strCharset + sizeof("euc-") - 1;
		if( !strcmp(strSubType, "jp") )
			chs.nCodepage = CODEPAGE_EUC_JP;
	}
	else if( !strcmp(strCharset, "shift_jis") )
	{
		chs.nType = CHARSET::eChsWindows;
		chs.nCodepage = CODEPAGE_SHIFT_JIS;
	}
}

void _ChsetDec_Str2Utf16(std::wstring& dst, const CHARSET& chs, const tCHAR * src, tDWORD nSrcLen)
{
	unsigned char * pTbl = NULL;
	
	switch( chs.nType )
	{
	case CHARSET::eChsWindows:
		_A2W(src, nSrcLen, dst, chs.nCodepage);
		break;

	case CHARSET::eChsUtf:
		if( chs.nSubType == 7 || chs.nSubType == 8 )
			_A2W(src, nSrcLen, dst, chs.nSubType == 7 ? CP_UTF7 : CP_UTF8);
		else if( chs.nSubType == 16 )
		{
			dst.resize(nSrcLen);
			if( dst.size() )
				memcpy(&dst[0], src, sizeof(wchar_t)*dst.size());
		}

		break;

	case CHARSET::eChsOem:
		_A2W(src, nSrcLen, dst, CP_OEMCP);
		break;

	case CHARSET::eChsKoi8:
		if( chs.nCodepage == CODEPAGE_CYRILLIC )
			pTbl = g_koi8_cp1251;
		break;

	case CHARSET::eChsISO8859:
		if( chs.nSubType == 5 )
			pTbl = g_iso_5_cp1251;
		else if( chs.nSubType == 1 )
			pTbl = g_iso_1_cp1251;
		break;

	case CHARSET::eChsXMac:
		if( chs.nCodepage == CODEPAGE_CYRILLIC )
			pTbl = g_mac_cp1251;
		break;
	}

	if( pTbl )
	{
		std::vector<unsigned char> _tmp; _tmp.resize(nSrcLen);
		for(tDWORD i = 0; i < _tmp.size(); i++)
			_tmp[i] = pTbl[(unsigned char)src[i]];

		if( _tmp.size() )
			_A2W((char *)&_tmp[0], _tmp.size(), dst, chs.nCodepage);
	}
}

// #################################################################################
// #################################################################################
