/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --font Montserrat-Medium.ttf --range 32-127,160-255,176,8226 --font FontAwesome5-Solid+Brands+Regular.woff --range 61452 --format lvgl -o montserrat_latino_12.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "../../lvgl.h"
#endif

#ifndef MONTSERRAT_LATINO_12
#define MONTSERRAT_LATINO_12 1
#endif

#if MONTSERRAT_LATINO_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfc, 0x80,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x12, 0x22, 0x7f, 0x24, 0x24, 0x24, 0xff, 0x24,
    0x24,

    /* U+0024 "$" */
    0x10, 0x47, 0xa4, 0x93, 0x47, 0x87, 0x16, 0x57,
    0x84, 0x10,

    /* U+0025 "%" */
    0x62, 0x49, 0x25, 0x12, 0x86, 0xb0, 0xa4, 0x52,
    0x49, 0x23, 0x0,

    /* U+0026 "&" */
    0x30, 0x91, 0x23, 0x87, 0x13, 0x63, 0x46, 0x7a,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x5a, 0xaa, 0xa9, 0x40,

    /* U+0029 ")" */
    0xa5, 0x55, 0x5e, 0x80,

    /* U+002A "*" */
    0x27, 0xc9, 0xf2, 0x0,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0xe0,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x8, 0x84, 0x22, 0x10, 0x88, 0x42, 0x31, 0x8,
    0x0,

    /* U+0030 "0" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xa2, 0x38,

    /* U+0031 "1" */
    0xe4, 0x92, 0x49, 0x20,

    /* U+0032 "2" */
    0x7a, 0x10, 0x41, 0x8, 0x42, 0x10, 0xfc,

    /* U+0033 "3" */
    0xfc, 0x21, 0x8c, 0x38, 0x10, 0x61, 0xf8,

    /* U+0034 "4" */
    0x8, 0x30, 0x41, 0x6, 0x48, 0xbf, 0x82, 0x4,

    /* U+0035 "5" */
    0x7d, 0x4, 0x1e, 0xc, 0x10, 0x63, 0x78,

    /* U+0036 "6" */
    0x3d, 0x8, 0x2e, 0xce, 0x18, 0x53, 0x78,

    /* U+0037 "7" */
    0xff, 0xa, 0x30, 0x40, 0x82, 0x4, 0x18, 0x20,

    /* U+0038 "8" */
    0x79, 0xa, 0x14, 0x27, 0x98, 0xe0, 0xe3, 0x7c,

    /* U+0039 "9" */
    0x72, 0x28, 0x61, 0x7c, 0x10, 0x42, 0xf0,

    /* U+003A ":" */
    0xc6,

    /* U+003B ";" */
    0xc3, 0x80,

    /* U+003C "<" */
    0x1d, 0x88, 0x1c, 0xc,

    /* U+003D "=" */
    0xf8, 0x1, 0xf0,

    /* U+003E ">" */
    0xc0, 0xe0, 0xcc, 0xc0,

    /* U+003F "?" */
    0xf4, 0x42, 0x11, 0x10, 0x80, 0x20,

    /* U+0040 "@" */
    0x1f, 0x4, 0x11, 0x3b, 0x68, 0xda, 0xb, 0x41,
    0x68, 0x2c, 0x8d, 0xce, 0xc8, 0x0, 0xc0, 0xf,
    0x80,

    /* U+0041 "A" */
    0x8, 0xe, 0x5, 0x6, 0x82, 0x23, 0x11, 0xfc,
    0x82, 0x81, 0x80,

    /* U+0042 "B" */
    0xfd, 0x6, 0xc, 0x1f, 0xd0, 0x60, 0xc1, 0xfc,

    /* U+0043 "C" */
    0x3c, 0xc7, 0x4, 0x8, 0x10, 0x30, 0x31, 0x3c,

    /* U+0044 "D" */
    0xfc, 0x86, 0x83, 0x81, 0x81, 0x81, 0x83, 0x86,
    0xfc,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0xfa, 0x8, 0x20, 0xfc,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0xfa, 0x8, 0x20, 0x80,

    /* U+0047 "G" */
    0x3e, 0x61, 0xc0, 0x80, 0x81, 0x81, 0xc1, 0x61,
    0x3e,

    /* U+0048 "H" */
    0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1, 0x82,

    /* U+0049 "I" */
    0xff, 0x80,

    /* U+004A "J" */
    0x78, 0x42, 0x10, 0x84, 0x31, 0x70,

    /* U+004B "K" */
    0x87, 0x1a, 0x65, 0x8f, 0x1a, 0x22, 0x42, 0x86,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0xfc,

    /* U+004D "M" */
    0x80, 0xe0, 0xf0, 0x74, 0x5a, 0x2c, 0xa6, 0x73,
    0x11, 0x80, 0x80,

    /* U+004E "N" */
    0x83, 0x87, 0x8d, 0x99, 0x33, 0x63, 0xc3, 0x82,

    /* U+004F "O" */
    0x3e, 0x31, 0xb0, 0x70, 0x18, 0xc, 0x7, 0x6,
    0xc6, 0x3e, 0x0,

    /* U+0050 "P" */
    0xfd, 0xe, 0xc, 0x18, 0x7f, 0xa0, 0x40, 0x80,

    /* U+0051 "Q" */
    0x3e, 0x31, 0xb0, 0x70, 0x18, 0xc, 0x7, 0x6,
    0xc6, 0x3e, 0x2, 0x40, 0xe0,

    /* U+0052 "R" */
    0xfd, 0xe, 0xc, 0x18, 0x7f, 0xa3, 0x42, 0x82,

    /* U+0053 "S" */
    0x7a, 0x8, 0x30, 0x78, 0x30, 0x61, 0x78,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+0055 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xa2, 0x38,

    /* U+0056 "V" */
    0x81, 0x20, 0x90, 0xcc, 0x42, 0x61, 0xa0, 0x50,
    0x38, 0x18, 0x0,

    /* U+0057 "W" */
    0x43, 0xa, 0x18, 0xd1, 0xc4, 0xca, 0x22, 0x49,
    0x16, 0x50, 0xe2, 0x83, 0xc, 0x18, 0x40,

    /* U+0058 "X" */
    0x42, 0x66, 0x24, 0x18, 0x18, 0x1c, 0x24, 0x62,
    0xc3,

    /* U+0059 "Y" */
    0x82, 0x8d, 0x11, 0x42, 0x82, 0x4, 0x8, 0x10,

    /* U+005A "Z" */
    0xfe, 0x8, 0x30, 0xc1, 0x4, 0x18, 0x20, 0xfe,

    /* U+005B "[" */
    0xea, 0xaa, 0xaa, 0xc0,

    /* U+005C "\\" */
    0x84, 0x21, 0x84, 0x21, 0x4, 0x21, 0x4, 0x21,
    0x0,

    /* U+005D "]" */
    0xd5, 0x55, 0x55, 0xc0,

    /* U+005E "^" */
    0x21, 0x14, 0xa8, 0xc4,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xc2,

    /* U+0061 "a" */
    0x74, 0x42, 0xf8, 0xc5, 0xe0,

    /* U+0062 "b" */
    0x81, 0x2, 0x5, 0xcc, 0x50, 0x60, 0xc1, 0xc5,
    0x70,

    /* U+0063 "c" */
    0x79, 0x38, 0x20, 0x81, 0x37, 0x80,

    /* U+0064 "d" */
    0x2, 0x4, 0x9, 0xd4, 0x70, 0x60, 0xc1, 0x46,
    0x74,

    /* U+0065 "e" */
    0x7b, 0x28, 0x7f, 0x81, 0x7, 0x80,

    /* U+0066 "f" */
    0x34, 0x4f, 0x44, 0x44, 0x44,

    /* U+0067 "g" */
    0x3a, 0x8e, 0xc, 0x18, 0x28, 0xce, 0x81, 0x46,
    0xf8,

    /* U+0068 "h" */
    0x82, 0x8, 0x3e, 0xce, 0x18, 0x61, 0x86, 0x10,

    /* U+0069 "i" */
    0x9f, 0xc0,

    /* U+006A "j" */
    0x20, 0x12, 0x49, 0x24, 0x9c,

    /* U+006B "k" */
    0x82, 0x8, 0x22, 0x92, 0xcf, 0x34, 0x8a, 0x30,

    /* U+006C "l" */
    0xff, 0xc0,

    /* U+006D "m" */
    0xfb, 0xd9, 0xce, 0x10, 0xc2, 0x18, 0x43, 0x8,
    0x61, 0x8,

    /* U+006E "n" */
    0xfb, 0x38, 0x61, 0x86, 0x18, 0x40,

    /* U+006F "o" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x0,

    /* U+0070 "p" */
    0xb9, 0x8a, 0xc, 0x18, 0x38, 0xae, 0x40, 0x81,
    0x0,

    /* U+0071 "q" */
    0x3a, 0x8e, 0xc, 0x18, 0x28, 0xce, 0x81, 0x2,
    0x4,

    /* U+0072 "r" */
    0xfa, 0x49, 0x20,

    /* U+0073 "s" */
    0x7c, 0x20, 0xe0, 0xc7, 0xc0,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x44, 0x30,

    /* U+0075 "u" */
    0x86, 0x18, 0x61, 0x87, 0x37, 0x40,

    /* U+0076 "v" */
    0x86, 0x89, 0x13, 0x42, 0x87, 0x4, 0x0,

    /* U+0077 "w" */
    0x84, 0x29, 0x89, 0x29, 0x25, 0x63, 0x28, 0x63,
    0xc, 0x60,

    /* U+0078 "x" */
    0x45, 0xa3, 0x84, 0x39, 0xa4, 0x40,

    /* U+0079 "y" */
    0x86, 0x89, 0x12, 0x42, 0x85, 0xc, 0x8, 0x21,
    0xc0,

    /* U+007A "z" */
    0xf8, 0xcc, 0x44, 0x63, 0xe0,

    /* U+007B "{" */
    0x69, 0x24, 0xa2, 0x49, 0x26,

    /* U+007C "|" */
    0xff, 0xf8,

    /* U+007D "}" */
    0xc9, 0x24, 0x8a, 0x49, 0x2c,

    /* U+007E "~" */
    0xea, 0x60,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xbf,

    /* U+00A2 "¢" */
    0x10, 0x47, 0xf5, 0x92, 0x49, 0x5f, 0x10, 0x40,

    /* U+00A3 "£" */
    0x1e, 0xc1, 0x2, 0xf, 0xc8, 0x10, 0x20, 0xfe,

    /* U+00A4 "¤" */
    0x0, 0x2e, 0x88, 0x88, 0x24, 0x12, 0x8, 0x88,
    0xba, 0x0, 0x0,

    /* U+00A5 "¥" */
    0x41, 0x31, 0x88, 0x82, 0x81, 0x43, 0xf8, 0x20,
    0xfe, 0x8, 0x0,

    /* U+00A6 "¦" */
    0xf0, 0x78,

    /* U+00A7 "§" */
    0x7c, 0x20, 0xc9, 0xc7, 0x26, 0xc, 0x7c,

    /* U+00A8 "¨" */
    0xa0,

    /* U+00A9 "©" */
    0x3e, 0x31, 0xb7, 0x74, 0x1a, 0xd, 0x7, 0x76,
    0xc6, 0x3e, 0x0,

    /* U+00AA "ª" */
    0xe2, 0xff,

    /* U+00AB "«" */
    0x54, 0xa9, 0x25, 0x0,

    /* U+00AC "¬" */
    0xf8, 0x42, 0x10,

    /* U+00AD "­" */
    0xe0,

    /* U+00AE "®" */
    0x3e, 0x31, 0xbf, 0x74, 0x5b, 0xcd, 0x27, 0x8e,
    0xc6, 0x3e, 0x0,

    /* U+00AF "¯" */
    0xf0,

    /* U+00B0 "°" */
    0x69, 0x96,

    /* U+00B1 "±" */
    0x21, 0x3e, 0x42, 0x0, 0x1f,

    /* U+00B2 "²" */
    0xf1, 0x24, 0xf0,

    /* U+00B3 "³" */
    0x78, 0x8c, 0x17, 0x0,

    /* U+00B4 "´" */
    0x70,

    /* U+00B5 "µ" */
    0x86, 0x18, 0x61, 0x87, 0x3f, 0xe0, 0x82, 0x0,

    /* U+00B6 "¶" */
    0x7e, 0xe7, 0xcb, 0x93, 0x22, 0x44, 0x89, 0x12,
    0x24, 0x48,

    /* U+00B7 "·" */
    0xc0,

    /* U+00B8 "¸" */
    0x47, 0x80,

    /* U+00B9 "¹" */
    0xc9, 0x2e,

    /* U+00BA "º" */
    0x69, 0x96,

    /* U+00BB "»" */
    0x51, 0xa2, 0xda, 0x50,

    /* U+00BC "¼" */
    0xc1, 0x8, 0x41, 0x8, 0x22, 0x4, 0x49, 0xd1,
    0x4, 0x50, 0x9f, 0x20, 0x44, 0x8,

    /* U+00BD "½" */
    0xc1, 0x10, 0x84, 0x41, 0x1f, 0xe8, 0x42, 0x11,
    0x8, 0x84, 0x23, 0xc0,

    /* U+00BE "¾" */
    0x78, 0x81, 0x8, 0x21, 0x1, 0xa0, 0xa, 0x47,
    0x44, 0x4, 0xa0, 0x8f, 0x8, 0x21, 0x2,

    /* U+00BF "¿" */
    0x20, 0x8, 0xcc, 0x42, 0x2f,

    /* U+00C0 "À" */
    0x30, 0x4, 0x0, 0x1, 0x1, 0xc0, 0xa0, 0xd0,
    0x44, 0x62, 0x3f, 0x90, 0x50, 0x30,

    /* U+00C1 "Á" */
    0x6, 0x4, 0x0, 0x1, 0x1, 0xc0, 0xa0, 0xd0,
    0x44, 0x62, 0x3f, 0x90, 0x50, 0x30,

    /* U+00C2 "Â" */
    0x8, 0xa, 0x0, 0x1, 0x1, 0xc0, 0xa0, 0xd0,
    0x44, 0x62, 0x3f, 0x90, 0x50, 0x30,

    /* U+00C3 "Ã" */
    0x34, 0x2c, 0x0, 0x18, 0x18, 0x3c, 0x24, 0x66,
    0x42, 0x7e, 0xc3, 0x81,

    /* U+00C4 "Ä" */
    0x14, 0x0, 0x2, 0x3, 0x81, 0x41, 0xa0, 0x88,
    0xc4, 0x7f, 0x20, 0xa0, 0x60,

    /* U+00C5 "Å" */
    0x1c, 0xa, 0x7, 0x0, 0x0, 0x80, 0xa0, 0x50,
    0x6c, 0x22, 0x11, 0x1f, 0xc8, 0x28, 0x8,

    /* U+00C6 "Æ" */
    0x7, 0xf0, 0xe0, 0xa, 0x1, 0xa0, 0x13, 0xe3,
    0x20, 0x3e, 0x4, 0x20, 0xc3, 0xf0,

    /* U+00C7 "Ç" */
    0x3e, 0x62, 0xc0, 0x80, 0x80, 0x80, 0xc0, 0x62,
    0x3e, 0x10, 0x8, 0x18,

    /* U+00C8 "È" */
    0x40, 0x80, 0x3f, 0x82, 0x8, 0x3e, 0x82, 0x8,
    0x3f,

    /* U+00C9 "É" */
    0x8, 0xc0, 0x3f, 0x82, 0x8, 0x3e, 0x82, 0x8,
    0x3f,

    /* U+00CA "Ê" */
    0x21, 0x40, 0x3f, 0x82, 0x8, 0x3e, 0x82, 0x8,
    0x3f,

    /* U+00CB "Ë" */
    0x28, 0xf, 0xe0, 0x82, 0xf, 0xa0, 0x82, 0xf,
    0xc0,

    /* U+00CC "Ì" */
    0xc4, 0x12, 0x49, 0x24, 0x90,

    /* U+00CD "Í" */
    0x70, 0x49, 0x24, 0x92, 0x40,

    /* U+00CE "Î" */
    0x22, 0x80, 0x42, 0x10, 0x84, 0x21, 0x8, 0x40,

    /* U+00CF "Ï" */
    0xb0, 0x44, 0x44, 0x44, 0x44, 0x40,

    /* U+00D0 "Ð" */
    0x7e, 0x21, 0x90, 0x68, 0x1f, 0x8a, 0x5, 0x6,
    0x86, 0x7e, 0x0,

    /* U+00D1 "Ñ" */
    0x34, 0xb0, 0x4, 0x1c, 0x3c, 0x6c, 0xc9, 0x9b,
    0x1e, 0x1c, 0x10,

    /* U+00D2 "Ò" */
    0x30, 0x4, 0x0, 0x7, 0xc6, 0x36, 0xe, 0x3,
    0x1, 0x80, 0xe0, 0xd8, 0xc7, 0xc0,

    /* U+00D3 "Ó" */
    0x6, 0x4, 0x0, 0x7, 0xc6, 0x36, 0xe, 0x3,
    0x1, 0x80, 0xe0, 0xd8, 0xc7, 0xc0,

    /* U+00D4 "Ô" */
    0x8, 0xa, 0x0, 0x7, 0xc6, 0x36, 0xe, 0x3,
    0x1, 0x80, 0xe0, 0xd8, 0xc7, 0xc0,

    /* U+00D5 "Õ" */
    0x1a, 0x16, 0x0, 0x7, 0xc6, 0x36, 0xe, 0x3,
    0x1, 0x80, 0xe0, 0xd8, 0xc7, 0xc0,

    /* U+00D6 "Ö" */
    0x34, 0x0, 0xf, 0x8c, 0x6c, 0x1c, 0x6, 0x3,
    0x1, 0xc1, 0xb1, 0x8f, 0x80,

    /* U+00D7 "×" */
    0x8a, 0x88, 0xa0, 0x0,

    /* U+00D8 "Ø" */
    0x1, 0x1f, 0x98, 0xd8, 0xb8, 0x4c, 0x46, 0x43,
    0xa3, 0x63, 0x3f, 0x20, 0x0,

    /* U+00D9 "Ù" */
    0x60, 0x20, 0x4, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00DA "Ú" */
    0xc, 0x20, 0x4, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00DB "Û" */
    0x10, 0x50, 0x4, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00DC "Ü" */
    0x28, 0x2, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+00DD "Ý" */
    0xc, 0x20, 0x4, 0x14, 0x68, 0x8a, 0x14, 0x10,
    0x20, 0x40, 0x80,

    /* U+00DE "Þ" */
    0x81, 0xfa, 0x1c, 0x18, 0x30, 0xff, 0x40, 0x80,

    /* U+00DF "ß" */
    0x7b, 0x38, 0x61, 0x8e, 0x68, 0x61, 0x86, 0xe0,

    /* U+00E0 "à" */
    0x41, 0x0, 0xe8, 0x85, 0xf1, 0x8b, 0xc0,

    /* U+00E1 "á" */
    0x11, 0x0, 0xe8, 0x85, 0xf1, 0x8b, 0xc0,

    /* U+00E2 "â" */
    0x32, 0x80, 0xe8, 0x85, 0xf1, 0x8b, 0xc0,

    /* U+00E3 "ã" */
    0x74, 0x80, 0xe8, 0x85, 0xf1, 0x8b, 0xc0,

    /* U+00E4 "ä" */
    0x50, 0x0, 0xe8, 0x85, 0xf1, 0x8b, 0xc0,

    /* U+00E5 "å" */
    0x72, 0x9c, 0x7, 0x44, 0x2f, 0x8c, 0x5e,

    /* U+00E6 "æ" */
    0x7b, 0xd0, 0xc8, 0x10, 0xbf, 0xf8, 0x41, 0x1c,
    0x1e, 0xf0,

    /* U+00E7 "ç" */
    0x39, 0x18, 0x20, 0x81, 0x13, 0x88, 0x10, 0xc0,

    /* U+00E8 "è" */
    0x60, 0xc0, 0x1e, 0xca, 0x1f, 0xe0, 0x41, 0xe0,

    /* U+00E9 "é" */
    0x18, 0xc0, 0x1e, 0xca, 0x1f, 0xe0, 0x41, 0xe0,

    /* U+00EA "ê" */
    0x31, 0x20, 0x1e, 0xca, 0x1f, 0xe0, 0x41, 0xe0,

    /* U+00EB "ë" */
    0x50, 0x0, 0x1e, 0xca, 0x1f, 0xe0, 0x41, 0xe0,

    /* U+00EC "ì" */
    0x44, 0x12, 0x49, 0x24,

    /* U+00ED "í" */
    0x50, 0x49, 0x24, 0x90,

    /* U+00EE "î" */
    0x54, 0x24, 0x92, 0x48,

    /* U+00EF "ï" */
    0xa0, 0x24, 0x92, 0x48,

    /* U+00F0 "ð" */
    0x78, 0x39, 0x98, 0x17, 0xb8, 0xe0, 0xc1, 0xc4,
    0xf0,

    /* U+00F1 "ñ" */
    0x69, 0x60, 0x2e, 0xce, 0x18, 0x61, 0x86, 0x10,

    /* U+00F2 "ò" */
    0x20, 0x20, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+00F3 "ó" */
    0x8, 0x20, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+00F4 "ô" */
    0x38, 0xd8, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+00F5 "õ" */
    0x34, 0xb0, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+00F6 "ö" */
    0x58, 0x0, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+00F7 "÷" */
    0x20, 0x3e, 0x0, 0x10,

    /* U+00F8 "ø" */
    0x4, 0x79, 0x34, 0x99, 0x34, 0x59, 0x3c, 0x80,

    /* U+00F9 "ù" */
    0x60, 0xc0, 0x21, 0x86, 0x18, 0x61, 0xcd, 0xd0,

    /* U+00FA "ú" */
    0x18, 0xc0, 0x21, 0x86, 0x18, 0x61, 0xcd, 0xd0,

    /* U+00FB "û" */
    0x31, 0x20, 0x21, 0x86, 0x18, 0x61, 0xcd, 0xd0,

    /* U+00FC "ü" */
    0x68, 0x0, 0x21, 0x86, 0x18, 0x61, 0xcd, 0xd0,

    /* U+00FD "ý" */
    0x18, 0x20, 0x4, 0x34, 0x48, 0x92, 0x14, 0x28,
    0x60, 0x41, 0xe, 0x0,

    /* U+00FE "þ" */
    0x81, 0x2, 0x5, 0xcc, 0x50, 0x60, 0xc1, 0xc5,
    0x72, 0x4, 0x8, 0x0,

    /* U+00FF "ÿ" */
    0x68, 0x0, 0x4, 0x34, 0x48, 0x92, 0x14, 0x28,
    0x60, 0x41, 0xe, 0x0,

    /* U+2022 "•" */
    0xf0,

    /* U+F00C "" */
    0x0, 0x20, 0x7, 0x0, 0xe4, 0x1c, 0xe3, 0x87,
    0x70, 0x3e, 0x1, 0xc0, 0x8, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 52, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 51, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 75, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 5, .adv_w = 135, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 119, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 24, .adv_w = 162, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 35, .adv_w = 132, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 40, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 44, .adv_w = 65, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 48, .adv_w = 65, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 52, .adv_w = 77, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 56, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 60, .adv_w = 44, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 61, .adv_w = 74, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 62, .adv_w = 44, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 68, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 72, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 71, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 115, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 44, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 44, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 146, .adv_w = 112, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 150, .adv_w = 112, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 153, .adv_w = 112, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 157, .adv_w = 110, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 199, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 180, .adv_w = 141, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 145, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 159, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 129, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 148, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 156, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 60, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 98, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 138, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 114, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 183, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 156, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 161, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 321, .adv_w = 140, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 119, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 113, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 152, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 137, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 216, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 129, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 126, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 64, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 407, .adv_w = 68, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 416, .adv_w = 64, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 420, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 424, .adv_w = 96, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 425, .adv_w = 115, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 426, .adv_w = 115, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 110, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 118, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 68, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 132, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 475, .adv_w = 131, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 54, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 55, .box_w = 3, .box_h = 13, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 490, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 54, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 203, .box_w = 11, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 131, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 532, .adv_w = 131, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 541, .adv_w = 79, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 79, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 554, .adv_w = 130, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 560, .adv_w = 107, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 173, .box_w = 11, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 577, .adv_w = 106, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 107, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 592, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 67, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 602, .adv_w = 57, .box_w = 1, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 604, .adv_w = 67, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 609, .adv_w = 112, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 611, .adv_w = 52, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 51, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 613, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 621, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 134, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 640, .adv_w = 136, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 57, .box_w = 1, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 653, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 660, .adv_w = 115, .box_w = 3, .box_h = 1, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 661, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 78, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 674, .adv_w = 97, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 678, .adv_w = 112, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 681, .adv_w = 74, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 682, .adv_w = 154, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 115, .box_w = 4, .box_h = 1, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 694, .adv_w = 80, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 696, .adv_w = 112, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 701, .adv_w = 83, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 704, .adv_w = 83, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 708, .adv_w = 115, .box_w = 3, .box_h = 2, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 709, .adv_w = 131, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 717, .adv_w = 124, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 727, .adv_w = 51, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 728, .adv_w = 115, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 730, .adv_w = 83, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 732, .adv_w = 80, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 734, .adv_w = 97, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 738, .adv_w = 199, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 752, .adv_w = 199, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 764, .adv_w = 199, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 779, .adv_w = 110, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 784, .adv_w = 141, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 798, .adv_w = 141, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 141, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 826, .adv_w = 141, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 141, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 851, .adv_w = 141, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 201, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 880, .adv_w = 139, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 892, .adv_w = 129, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 129, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 910, .adv_w = 129, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 919, .adv_w = 129, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 928, .adv_w = 60, .box_w = 3, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 933, .adv_w = 60, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 938, .adv_w = 60, .box_w = 5, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 946, .adv_w = 60, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 952, .adv_w = 160, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 963, .adv_w = 156, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 974, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 988, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1002, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1016, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1030, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1043, .adv_w = 112, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1047, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1060, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1071, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1093, .adv_w = 152, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1103, .adv_w = 124, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1114, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1122, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1130, .adv_w = 115, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1137, .adv_w = 115, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1144, .adv_w = 115, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1151, .adv_w = 115, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1158, .adv_w = 115, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1165, .adv_w = 115, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1172, .adv_w = 190, .box_w = 11, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1182, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1190, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1198, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1206, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1214, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1222, .adv_w = 54, .box_w = 3, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1226, .adv_w = 54, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1230, .adv_w = 54, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1234, .adv_w = 54, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1238, .adv_w = 123, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1247, .adv_w = 131, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1255, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1264, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1273, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1282, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1291, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1300, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1304, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1312, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1320, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1328, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1336, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1344, .adv_w = 107, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1356, .adv_w = 131, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1368, .adv_w = 107, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1380, .adv_w = 60, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1381, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_2[] = {
    0x0, 0xcfea
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 160, .range_length = 96, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 8226, .range_length = 53227, .glyph_id_start = 192,
        .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 1, 2, 0, 3, 4, 5,
    2, 6, 7, 8, 9, 10, 9, 10,
    11, 12, 0, 13, 14, 15, 16, 17,
    18, 19, 12, 20, 20, 0, 0, 0,
    21, 22, 23, 24, 25, 22, 26, 27,
    28, 29, 29, 30, 31, 32, 29, 29,
    22, 33, 34, 35, 3, 36, 30, 37,
    37, 38, 39, 40, 41, 42, 43, 0,
    44, 0, 45, 46, 47, 48, 49, 50,
    51, 45, 52, 52, 53, 48, 45, 45,
    46, 46, 54, 55, 56, 57, 51, 58,
    58, 59, 58, 60, 41, 0, 0, 9,
    0, 61, 47, 62, 63, 64, 0, 65,
    0, 22, 8, 66, 0, 9, 22, 0,
    67, 0, 0, 0, 0, 51, 29, 9,
    0, 0, 8, 9, 0, 0, 0, 68,
    23, 23, 23, 23, 23, 23, 26, 25,
    26, 26, 26, 26, 29, 29, 29, 29,
    22, 29, 22, 22, 22, 22, 22, 0,
    22, 30, 30, 30, 30, 39, 69, 46,
    45, 45, 45, 45, 45, 45, 49, 47,
    49, 49, 49, 49, 51, 51, 70, 51,
    71, 45, 46, 46, 46, 46, 46, 9,
    46, 51, 51, 51, 51, 58, 46, 58,
    9, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 3, 4, 5,
    2, 6, 7, 8, 9, 10, 9, 10,
    11, 12, 13, 14, 15, 16, 17, 12,
    18, 19, 20, 21, 21, 0, 0, 0,
    22, 23, 24, 25, 23, 25, 25, 25,
    23, 25, 25, 26, 25, 25, 25, 25,
    23, 25, 23, 25, 3, 27, 28, 29,
    29, 30, 31, 32, 33, 34, 35, 0,
    36, 0, 37, 38, 39, 39, 39, 0,
    39, 38, 40, 41, 38, 38, 42, 42,
    39, 42, 39, 42, 43, 44, 45, 46,
    46, 47, 46, 48, 0, 0, 35, 9,
    0, 49, 39, 50, 51, 52, 0, 53,
    0, 23, 8, 9, 9, 9, 23, 0,
    54, 0, 0, 0, 0, 42, 55, 9,
    0, 0, 8, 56, 0, 0, 0, 57,
    24, 24, 24, 24, 24, 24, 24, 23,
    25, 25, 25, 25, 25, 25, 25, 25,
    25, 25, 23, 23, 23, 23, 23, 0,
    23, 28, 28, 28, 28, 31, 25, 38,
    37, 37, 37, 37, 37, 37, 37, 39,
    39, 39, 39, 39, 58, 42, 59, 60,
    39, 42, 39, 39, 39, 39, 39, 9,
    39, 45, 45, 45, 45, 46, 38, 46,
    9, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 2, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 9, 0, 5,
    -4, 0, 0, 0, 0, -11, -12, 1,
    9, 4, 3, -8, 1, 9, 1, 8,
    2, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 2, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 4,
    0, 4, 9, 0, -8, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, -4,
    3, 4, 0, 0, -2, 0, -1, 2,
    0, -2, 0, -2, -1, -4, 0, 0,
    0, 0, -2, 0, 0, -2, -3, 0,
    0, -2, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    -2, 0, 0, 0, 0, -5, 0, -23,
    0, 0, -4, 0, 4, 6, 0, 0,
    -4, 2, 2, 6, 4, -3, 4, 0,
    0, -11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    -2, -9, 0, -8, -1, 0, 0, 0,
    0, 0, 7, 0, -6, -2, -1, 1,
    0, -3, 0, 0, -1, -14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, -2, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, -8, -8, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0,
    2, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 2, 1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 4, 2, 6,
    -2, 0, 0, 4, -2, -6, -26, 1,
    5, 4, 0, -2, 0, 7, 0, 6,
    0, 6, 0, -18, 0, -2, 6, 0,
    6, -2, 4, 2, 0, 0, 1, -2,
    0, 0, -3, 15, 0, 15, 0, 6,
    0, 8, 2, 3, 0, 0, 1, 0,
    0, 6, 7, 2, -16, 15, 15, 15,
    0, 0, 0, -7, 0, 0, 0, 0,
    1, -1, 0, 1, -3, -2, -4, 1,
    0, -2, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, -4, 2, 0, -17, -2,
    0, 0, 0, 0, 1, -11, 0, -12,
    0, 0, 0, 0, -1, 0, 19, -2,
    -2, 2, 2, -2, 0, -2, 2, 0,
    0, -10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -19, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, -2, -6,
    0, -12, -25, 1, 2, 0, 0, 0,
    0, 12, 0, 0, -7, 0, 6, 0,
    -13, -19, -13, -4, 6, 0, 0, -13,
    0, 2, -4, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 6, -23, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, -2, 0, 8, -4, 9, 0, -9,
    -14, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 1, 1, -2, -4, 0,
    -1, -1, -2, 0, 0, -1, 0, 0,
    0, -4, 0, -2, 0, -4, -4, 0,
    -5, -6, -6, -4, 0, -4, 0, -4,
    0, 0, 0, 0, -2, 0, 0, 2,
    0, 1, -2, 0, 0, 0, 0, -2,
    0, 1, 0, 0, -6, 0, 0, 0,
    0, 0, 0, 2, -1, 0, 0, 0,
    -1, 2, 2, -1, 0, 0, 0, -4,
    0, -1, 0, 0, 0, 0, 0, 1,
    0, 2, -1, 0, -2, 0, -3, 0,
    0, -1, 0, 6, 0, 0, -2, 0,
    0, 0, 0, 0, -1, 1, -1, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -1, 0, -2, -2, 0, 0,
    0, 0, 0, 1, 0, 0, -1, 0,
    -2, -2, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, -1, -2, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, -6, -1, -6, 4, 0, 0, -4,
    2, 4, 5, 0, -5, -1, -2, 0,
    -1, -9, 2, -1, 1, -10, 2, 0,
    0, 1, -10, 0, -10, -2, -17, -1,
    0, -10, 0, 4, 5, 0, 2, 0,
    0, 0, 0, 0, 0, -3, -2, 0,
    0, 2, 2, -2, 4, -6, -3, 0,
    2, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, -1, -1, 0, -1, -2, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    -1, -2, -2, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, -2, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, -1, 0, -4, 2, 0, 0, -2,
    1, 2, 2, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 1,
    0, 0, -2, 0, -2, -1, -2, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    -2, 0, 0, 0, 0, -2, -3, 0,
    0, 0, 2, 0, 4, -4, 0, 0,
    0, 0, 0, 0, 0, 6, -1, 1,
    -6, 0, 0, 5, -10, -10, -8, -4,
    2, 0, -2, -12, -3, 0, -3, 0,
    -4, 3, -3, -12, 0, -5, 0, 0,
    1, -1, 2, -1, 0, 2, 0, -6,
    -7, 0, -10, -5, -4, -5, -6, -2,
    -5, 0, -4, -5, -5, -2, -4, 2,
    -2, 1, 5, -3, -12, -5, -5, -5,
    0, 1, 0, -2, 0, 0, 0, 1,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -1,
    0, -1, -2, 0, -3, -4, -4, -1,
    0, -6, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 1, -1, 0,
    0, 0, 0, -2, 2, 0, 0, 0,
    -4, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 1, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, -4, 0, 0, 0,
    0, -10, -6, 0, 0, 0, -3, -10,
    0, 0, -2, 2, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, -3, 0, 2, 0, 2,
    -21, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 2, 0, 1, -4, -4, 0,
    -2, -2, -2, 0, 0, 0, 0, 0,
    0, -6, 0, -2, 0, -3, -2, 0,
    -4, -5, -6, -2, 0, -4, 0, -6,
    0, 0, 0, 0, 15, 0, 0, 1,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 2, 0, 0, -4, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, -18,
    -3, 6, 6, -2, -8, 0, 2, -3,
    0, -10, -1, -2, 2, -13, -2, 2,
    0, 3, -7, -3, -7, -6, -8, 0,
    0, -12, 0, 11, 0, 0, -1, 0,
    0, 0, -1, -1, -2, -5, -6, 0,
    2, 0, 0, 0, 0, -18, -15, 2,
    4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    -1, -2, -3, 0, 0, -4, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, -4, 0, 0, 4,
    -1, 2, 0, -4, 2, -1, -1, -5,
    -2, 0, -2, -2, -1, 0, -3, -3,
    0, 0, -2, -1, -1, -3, -2, 0,
    0, -2, 0, 2, -1, 0, -4, 0,
    0, 0, -4, 0, -3, 0, -3, -3,
    -2, 0, 0, 0, -1, 2, 1, -1,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 2, 0, -3,
    0, -1, -2, -6, -1, -1, -1, -1,
    -1, -2, -1, 0, 0, 0, 0, 0,
    -2, -2, -2, 0, 0, 0, 0, 2,
    -1, 0, -1, 0, 0, 0, -1, -2,
    -1, -2, -2, -2, -1, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    2, 8, -1, 0, -5, 0, -1, 4,
    0, -2, -8, -2, 3, 0, 0, -9,
    -3, 2, -3, 1, 0, -1, -2, -6,
    0, -3, 1, 0, 0, -3, 0, 0,
    0, 2, 2, -4, -4, 0, -3, -2,
    -3, -2, -2, 0, -3, 1, -4, -3,
    -2, 0, 0, 0, -1, 6, 2, -2,
    -9, -2, 2, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, -2, 0,
    0, -2, -2, 0, 0, 0, 0, -2,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, -3, 0, -4, 0, 0, 0,
    -6, 0, 1, -4, 4, 0, -1, -9,
    0, 0, -4, -2, 0, -8, -5, -5,
    0, 0, -8, -2, -8, -7, -9, 0,
    -5, 0, 2, 13, -2, 0, -4, -2,
    -1, -2, -3, -5, -3, -7, -8, -4,
    0, 0, 0, 0, 0, -2, -2, -1,
    0, -2, -2, -2, 0, 0, -1, 0,
    1, 0, 0, -13, -2, 6, 4, -4,
    -7, 0, 1, -6, 0, -10, -1, -2,
    4, -18, -2, 1, 0, 0, -12, -2,
    -10, -2, -14, 0, 0, -13, 0, 11,
    1, 0, -1, 0, 0, 0, 0, -1,
    -1, -7, -1, 0, 0, 0, 0, 0,
    0, -12, -15, 1, 0, 0, 0, 0,
    0, 0, 0, 0, -6, 0, -2, 0,
    -1, -5, -9, 0, 0, -1, -3, -6,
    -2, 0, -1, 0, 0, 0, 0, -9,
    -2, -6, -6, -2, -3, -5, -2, -3,
    0, -4, -2, -6, -3, 0, -2, -4,
    -2, -4, 0, 1, 0, -1, -6, 0,
    0, 0, 0, 0, 0, 4, 0, 0,
    -10, -4, -4, -4, 0, -3, 0, 0,
    0, 0, 2, 0, 1, -4, 8, 0,
    -2, -2, -2, 0, 0, 0, 0, 0,
    0, -6, 0, -2, 0, -3, -2, 0,
    -4, -5, -6, -2, 0, -4, 2, 8,
    0, 0, 0, 0, 15, 0, 0, 1,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 2, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, -4,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, -2, -2, 0, 0, -4, -2, 0,
    0, -4, 0, 3, -1, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0,
    -2, 0, 0, 0, 4, 2, -2, 0,
    -6, -3, 0, 6, -6, -6, -4, -4,
    8, 3, 2, -17, -1, 4, -2, 0,
    -2, 2, -2, -7, 0, -2, 2, -2,
    -2, -6, -2, 0, 0, 6, 4, 0,
    -5, 0, -11, -2, 6, -2, -7, 1,
    -2, -6, -6, -2, -4, 0, 0, 0,
    0, 8, 6, -2, -11, 2, 7, 3,
    2, 0, -3, 0, -5, 0, 2, 6,
    -4, -7, -8, -5, 6, 0, 1, -14,
    -2, 2, -3, -1, -4, 0, -4, -7,
    -3, -3, -2, 0, 0, -4, -4, -2,
    0, 6, 4, -2, -11, 0, -11, -3,
    0, -7, -11, -1, -6, -3, -6, -5,
    -6, 0, 0, 0, 0, 5, 4, -2,
    -14, 3, 7, 4, 0, 0, -2, 0,
    -4, -2, 0, -2, -3, 0, 3, -6,
    2, 0, 0, -10, 0, -2, -4, -3,
    -1, -6, -5, -6, -4, 0, -6, -2,
    -4, -4, -6, -2, 0, 0, 1, 9,
    -3, 0, -6, -2, 0, -2, -4, -4,
    -5, -5, -7, -2, -2, 0, 0, 0,
    0, -4, 0, -2, 1, -2, -2, -2,
    4, 0, -3, 0, -10, -2, 1, 4,
    -6, -7, -4, -6, 6, -2, 1, -18,
    -3, 4, -4, -3, -7, 0, -6, -8,
    -2, -2, -2, -2, -4, -6, -1, 0,
    0, 6, 5, -1, -12, 0, -12, -4,
    5, -7, -13, -4, -7, -8, -10, -6,
    -8, 0, 0, 0, -4, 4, 4, -3,
    -16, 6, 6, 5, 0, 0, 0, 0,
    -2, 0, 0, 2, -2, 4, 1, -4,
    4, 0, 0, -6, -1, 0, -1, 0,
    1, 1, -2, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 2, 6,
    0, 0, -2, 0, 0, 0, 0, -1,
    -1, -2, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 2, 0, 0, 0, 0, 2, 0,
    -2, 0, 7, 0, 3, 1, 1, -2,
    0, 4, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 3, 0, 0, 1, 0,
    0, 0, 0, 0, 0, -12, 0, -2,
    3, 0, 6, 0, 0, 19, 2, -4,
    -4, 2, 2, -1, 1, -10, 0, 0,
    9, -12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -13, 7, 27,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0,
    6, -12, -6, 2, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -4, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, -5,
    0, 0, 1, 0, 0, 2, 25, -4,
    -2, 6, 5, -5, 2, 0, 0, 2,
    2, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -25, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 3, -1, -2,
    5, 0, -14, 2, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, -5,
    0, 0, 0, 0, -4, -1, 0, 0,
    0, -4, 0, -2, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -13, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, -4, -4, 0,
    0, 0, 0, 0, 0, -3, 0, -5,
    0, 0, 0, -3, 2, -2, 0, 0,
    -5, -2, -4, 0, 0, -5, 0, -2,
    0, -9, 0, -2, 0, 0, -16, -4,
    -8, -2, -7, 0, 0, -13, 0, -5,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, -3, -3, -2, 0, 0, 0, 0,
    0, -3, -4, 0, -2, 0, 0, 0,
    0, 0, 0, 0, -4, 0, -4, 2,
    -2, 4, 0, -1, -4, -1, -3, -4,
    0, -2, -1, -1, 1, -5, -1, 0,
    0, 0, -17, -2, -3, 0, -4, 0,
    -1, -9, -2, 0, 0, -1, -2, 0,
    0, 0, 0, 1, 0, -1, -3, -1,
    0, 0, 0, 0, -2, 3, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -1, 0, 0, 0, -4,
    2, 0, 0, 0, -5, -2, -4, 0,
    0, -5, 0, -2, 0, -9, 0, 0,
    0, 0, -19, 0, -4, -7, -10, 0,
    0, -13, 0, -1, -3, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -3, -1,
    0, 0, 0, 0, 0, -3, -4, 0,
    -2, 0, 0, 0, 1, 0, 0, 3,
    -2, 0, 6, 9, -2, -2, -6, 2,
    9, 3, 4, -5, 2, 8, 2, 6,
    4, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 9, -3,
    -2, 0, -2, 15, 8, 15, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 7, 8, -1, -2, 13, 9, 12,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, -16, -2, -2, -8, -9, 0,
    0, -13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, -16, -2,
    -2, -8, -9, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    -4, 2, 0, -2, 2, 3, 2, -6,
    0, 0, -2, 2, 0, 2, 0, 0,
    0, 0, -5, 0, -2, -1, -4, 0,
    -2, -8, 0, 12, -2, 0, -4, -1,
    0, -1, -3, 0, -2, -5, -4, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -1, -1, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, -16, -2,
    -2, -8, -9, 0, 0, -13, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, -6, -2, -2, 6,
    -2, -2, -8, 1, -1, 1, -1, -5,
    0, 4, 0, 2, 1, 2, -5, -8,
    -2, 0, -7, -4, -5, -8, -7, 0,
    -3, -4, -2, -2, -2, -1, -2, -1,
    0, -1, -1, 3, 0, 3, -1, 0,
    0, 0, 0, 0, 2, 6, 6, 1,
    -7, -1, -1, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -2, -2, 0, 0, -5, 0, -1,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, -2, 0, 0, 0, 0, 0,
    0, -2, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, -3,
    -2, 2, 0, -3, -4, -1, 0, -6,
    -1, -4, -1, -2, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -13, 0, 6, 0, 0, -3, 0,
    0, 0, 0, -2, 0, -2, 0, 0,
    0, 0, 0, 0, -2, -1, -4, 0,
    0, 0, 0, 0, 0, 0, -1, 0,
    -4, 0, 0, 8, -2, -6, -6, 1,
    2, 2, 0, -5, 1, 3, 1, 6,
    1, 6, -1, -5, 0, 0, -8, 0,
    0, -6, -5, 0, 0, -4, 0, -2,
    -3, 0, -3, 0, -3, 0, -1, 3,
    0, -2, -6, -2, 0, 0, 0, 0,
    0, 7, 6, 0, -6, 0, 0, 0,
    0, 0, -2, 0, -4, 0, 0, 2,
    -4, 0, 2, -2, 2, 0, 0, -6,
    0, -1, -1, 0, -2, 2, -2, 0,
    0, 0, -8, -2, -4, 0, -6, 0,
    0, -9, 0, 7, -2, 0, -3, 0,
    1, 0, -2, 0, -2, -6, 0, -2,
    0, 0, 0, 0, 0, 2, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 2, -2, 1, 0, 0,
    -2, -1, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -12, 0, 4,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, -2, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 8, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -11, 1, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    -7, 0, 0, 5, -6, -1, 2, -7,
    3, -2, -2, -7, -2, 1, -6, -4,
    -6, 0, -2, -9, 0, -4, 0, 0,
    0, -2, 2, 0, 0, 3, 1, 3,
    -8, 0, -6, -4, -5, -4, -8, -4,
    -5, -4, -5, -8, -5, 0, 0, 0,
    -2, 0, 2, -2, -4, -4, 5, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, -2, 0, 0, 0, -2, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 2, 4, 0, 0,
    0, 0, 3, 0, -4, -6, -6, -2,
    6, 0, 2, -2, 0, 5, -2, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 10, 3, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 4, 0, 0, 0, 0, 3,
    0, 1, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 1, 2, 0,
    -1, 0, 0, 1, 1, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -11, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 4, 0, 4, 0, 0, 0, 0,
    0, -12, -11, 1, 8, 6, 3, -8,
    1, 8, 0, 7, 0, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, 0, 0, 0, -1, -7, 0, -12,
    -3, 0, 0, 0, -8, 1, 8, -9,
    -8, 0, 0, -8, 0, -8, -8, 0,
    -1, -26, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -18, 2, 10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, -4, -10,
    1, -11, -17, -2, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, -6, 0, -4, -5, -4, 0,
    -2, 0, 0, 0, 0, -6, 0, -6,
    0, -8, -5, 0, -2, -6, -6, -3,
    0, -8, 0, -6, -2, 0, 0, 0,
    -2, 0, 0, 1, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 15, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, -16, -2,
    -2, -8, -9, 0, 0, -13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    0, -3, 0, 1, 0, 0, -1, 0,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0,
    -1, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 71,
    .right_class_cnt     = 60,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t montserrat_latino_12 = {
#else
lv_font_t montserrat_latino_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if MONTSERRAT_LATINO_12*/

