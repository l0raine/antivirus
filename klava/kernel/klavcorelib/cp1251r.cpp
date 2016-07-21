// cp1251r.cpp
//
//

#include "cp1251.h"


static unsigned short cp1251_rmap_uc [] = {
 0x00A0, 0x00A4, 0x00A6, 0x00A7, 0x00A9, 0x00AB, 0x00AC, 0x00AD,
 0x00AE, 0x00B0, 0x00B1, 0x00B5, 0x00B6, 0x00B7, 0x00BB, 0x0401,
 0x0402, 0x0403, 0x0404, 0x0405, 0x0406, 0x0407, 0x0408, 0x0409,
 0x040A, 0x040B, 0x040C, 0x040E, 0x040F, 0x0410, 0x0411, 0x0412,
 0x0413, 0x0414, 0x0415, 0x0416, 0x0417, 0x0418, 0x0419, 0x041A,
 0x041B, 0x041C, 0x041D, 0x041E, 0x041F, 0x0420, 0x0421, 0x0422,
 0x0423, 0x0424, 0x0425, 0x0426, 0x0427, 0x0428, 0x0429, 0x042A,
 0x042B, 0x042C, 0x042D, 0x042E, 0x042F, 0x0430, 0x0431, 0x0432,
 0x0433, 0x0434, 0x0435, 0x0436, 0x0437, 0x0438, 0x0439, 0x043A,
 0x043B, 0x043C, 0x043D, 0x043E, 0x043F, 0x0440, 0x0441, 0x0442,
 0x0443, 0x0444, 0x0445, 0x0446, 0x0447, 0x0448, 0x0449, 0x044A,
 0x044B, 0x044C, 0x044D, 0x044E, 0x044F, 0x0451, 0x0452, 0x0453,
 0x0454, 0x0455, 0x0456, 0x0457, 0x0458, 0x0459, 0x045A, 0x045B,
 0x045C, 0x045E, 0x045F, 0x0490, 0x0491, 0x2013, 0x2014, 0x2018,
 0x2019, 0x201A, 0x201C, 0x201D, 0x201E, 0x2020, 0x2021, 0x2022,
 0x2026, 0x2030, 0x2039, 0x203A, 0x2116, 0x2122
};

static unsigned char cp1251_rmap_ac [] = {
 0xA0, 0xA4, 0xA6, 0xA7, 0xA9, 0xAB, 0xAC, 0xAD,
 0xAE, 0xB0, 0xB1, 0xB5, 0xB6, 0xB7, 0xBB, 0xA8,
 0x80, 0x81, 0xAA, 0xBD, 0xB2, 0xAF, 0xA3, 0x8A,
 0x8C, 0x8E, 0x8D, 0xA1, 0x8F, 0xC0, 0xC1, 0xC2,
 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA,
 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2,
 0xD3, 0xD4, 0xD5, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA,
 0xDB, 0xDC, 0xDD, 0xDE, 0xDF, 0xE0, 0xE1, 0xE2,
 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA,
 0xEB, 0xEC, 0xED, 0xEE, 0xEF, 0xF0, 0xF1, 0xF2,
 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 0xF8, 0xF9, 0xFA,
 0xFB, 0xFC, 0xFD, 0xFE, 0xFF, 0xB8, 0x90, 0x83,
 0xBA, 0xBE, 0xB3, 0xBF, 0xBC, 0x9A, 0x9C, 0x9E,
 0x9D, 0xA2, 0x9F, 0xA5, 0xB4, 0x96, 0x97, 0x91,
 0x92, 0x82, 0x93, 0x94, 0x84, 0x86, 0x87, 0x95,
 0x85, 0x89, 0x8B, 0x9B, 0xB9, 0x99
};

unsigned int cp1251_rmap (unsigned int uc)
{
  if (uc <= 127)
	return uc;
  unsigned int lb = 0, hb = (unsigned int) sizeof (cp1251_rmap_ac);
  while (lb < hb)
  {
    unsigned int i = (lb + hb) / 2;
    unsigned int u = cp1251_rmap_uc [i];
    if (u == uc)
      return cp1251_rmap_ac [i];
    if (u < uc)
      lb = i + 1;
    else
      hb = i;
  }
  return 0;
}
