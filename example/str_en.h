#pragma once

#include <avr/pgmspace.h>

// 'str_en.h': generated by str2progmem from 'strings_en.txt' at 2019-09-25 15:37:04.421020
static const int STR_EN_COUNT = 2;
static const int STR_EN_BLOB_SZ = 14;
extern const unsigned short str_en_offsets[];
extern const char str_en_blob[];

#define STR_EN_GET_OFFSET(I) pgm_read_word(&(str_en_offsets[(I)]))
#define STR_EN_GET(I) ( ((const char*) &str_en_blob) + STR_EN_GET_OFFSET(I) )
#define PGMSTR(x) (__FlashStringHelper*)(x)