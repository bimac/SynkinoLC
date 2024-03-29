#pragma once

#define busybee_xbm_width  17
#define busybee_xbm_height 17
static const unsigned char busybee_xbm_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0xfe, 0x20, 0x00, 0xfe, 0x20, 0x78, 0xfe, 0x00, 0x8c, 0xfe,
  0xc0, 0x86, 0xfe, 0xc6, 0x42, 0xfe, 0x30, 0xa3, 0xfe, 0xb0, 0x55, 0xfe,
  0xc0, 0x0e, 0xfe, 0x70, 0x35, 0xfe, 0x98, 0x7f, 0xfe, 0x0c, 0x0d, 0xfe,
  0x84, 0xf6, 0xfe, 0x44, 0x36, 0xfe, 0xa4, 0xd4, 0xfe, 0x58, 0x50, 0xfe,
  0x00, 0x00, 0xfe};

#define play_xbm_width  9
#define play_xbm_height 9
static const unsigned char play_xbm_bits[] U8X8_PROGMEM = {
  0x03, 0x00, 0x0F, 0x00, 0x3F, 0x00, 0xFF, 0x00, 0xFF, 0x01, 0xFF, 0x00,
  0x3F, 0x00, 0x0F, 0x00, 0x03, 0x00};

#define pause_xbm_width  8
#define pause_xbm_height 8
static const unsigned char pause_xbm_bits[] U8X8_PROGMEM = {
  0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7};

#define sync_xbm_width 20
#define sync_xbm_height 9
static const unsigned char sync_xbm_bits[] U8X8_PROGMEM = {
  0xFE, 0xFF, 0x07, 0xFF, 0xFF, 0x0F, 0xA7, 0xDA, 0x0C, 0xBB, 0x52, 0x0F,
  0x77, 0x4B, 0x0F, 0x6F, 0x5B, 0x0F, 0x73, 0xDB, 0x0C, 0xFF, 0xFF, 0x0F,
  0xFE, 0xFF, 0x07};

#define logo_xbm_width  96
#define logo_xbm_height 30
#define logo_xbm_x 14
#define logo_xbm_y 16
static const unsigned char logo_xbm_bits[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0x03,
  0x00, 0x1F, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x0E,
  0xC0, 0x60, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x0E, 0x38, 0xE0, 0x30,
  0x30, 0x08, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x0E, 0x38, 0xE0, 0x40,
  0x08, 0x14, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x00, 0x00, 0x80,
  0x04, 0x14, 0x8F, 0x0F, 0xEC, 0xDB, 0xEF, 0x4D, 0x4E, 0x20, 0x3C, 0xC0,
  0x04, 0x14, 0x87, 0xF7, 0xEF, 0x9B, 0xEF, 0x5D, 0xC4, 0x20, 0x42, 0xC0,
  0x02, 0x14, 0x8B, 0xFB, 0xDF, 0x9D, 0xEF, 0x2D, 0xC4, 0x20, 0x42, 0x80,
  0x02, 0x0E, 0x89, 0xFB, 0xDF, 0x5D, 0xEF, 0x3D, 0x44, 0x21, 0x81, 0x80,
  0x01, 0x05, 0x90, 0xFB, 0xBF, 0x5E, 0xEF, 0x1D, 0x44, 0x21, 0x81, 0x80,
  0x01, 0x05, 0x90, 0xF7, 0x7F, 0xDF, 0xEE, 0x15, 0x44, 0x22, 0x81, 0x80,
  0x81, 0x04, 0x90, 0x0F, 0x7F, 0xDF, 0xEE, 0x09, 0x44, 0x22, 0x81, 0x40,
  0x81, 0x1E, 0x90, 0xFF, 0x7E, 0xDF, 0xED, 0x19, 0x44, 0x24, 0x81, 0x40,
  0x81, 0x26, 0x90, 0xFF, 0x7D, 0xDF, 0xEB, 0x05, 0x44, 0x28, 0x81, 0x40,
  0x92, 0x24, 0x88, 0xFF, 0x7D, 0xDF, 0xEB, 0x2D, 0x44, 0x28, 0x81, 0x40,
  0x1A, 0x15, 0x88, 0xFF, 0x7D, 0xDF, 0xE7, 0x2D, 0x44, 0x30, 0x42, 0x40,
  0x1C, 0x1E, 0x84, 0xFF, 0x7E, 0xDF, 0xE7, 0x5D, 0x44, 0x30, 0x42, 0x40,
  0x1E, 0x05, 0x84, 0x03, 0x7F, 0xDF, 0xEF, 0x4D, 0x4E, 0x20, 0x3C, 0x40,
  0x1F, 0x05, 0x82, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x40,
  0x00, 0x82, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0x00, 0x00, 0x40,
  0xC0, 0x60, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x43,
  0x00, 0x1F, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x3F, 0x02, 0x00, 0x00, 0x4E,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x2A, 0x40, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x40,
  0x00, 0x00, 0x21, 0x40, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x20,
  0x00, 0x00, 0x2B, 0x4B, 0x9D, 0x0D, 0x67, 0x07, 0x02, 0x00, 0x00, 0x10,
  0x00, 0x00, 0x29, 0xD5, 0x54, 0x14, 0x15, 0x05, 0x1C, 0x00, 0x00, 0x0C,
  0x00, 0x00, 0x49, 0x55, 0x5D, 0x54, 0x17, 0x07, 0xE0, 0x00, 0xC0, 0x03,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0xFF, 0x3F, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00};

#define logolc_xbm_width  17
#define logolc_xbm_height 13
#define logolc_xbm_x 85
#define logolc_xbm_y 38
static const unsigned char logolc_xbm_bits[] U8X8_PROGMEM = {
  0xf8, 0x3f, 0xfe, 0xfc, 0x7f, 0xfe, 0xec, 0x63, 0xfe, 0xee, 0xfd, 0xfe,
  0xee, 0xfd, 0xfe, 0xee, 0xfd, 0xfe, 0xee, 0xfd, 0xfe, 0xee, 0xfd, 0xfe,
  0x0c, 0x63, 0xfe, 0xfc, 0x7f, 0xfe, 0xf8, 0x3f, 0xfe, 0xf0, 0x1f, 0xfe,
  0xc0, 0x07, 0xfe};

#define ifma_xbm_width 43
#define ifma_xbm_height 5
#define ifma_xbm_x 30
#define ifma_xbm_y 46
static const unsigned char ifma_xbm_bits[] U8X8_PROGMEM = {
  0x5d, 0x64, 0xa0, 0x02, 0x40, 0xf8, 0xc5, 0x96, 0x10, 0x02, 0x40, 0xf8,
  0x4d, 0xf5, 0xb6, 0xb2, 0x70, 0xfd, 0x45, 0x94, 0x90, 0x52, 0x51, 0xf9,
  0x45, 0x94, 0x90, 0x54, 0x75, 0xfe};
