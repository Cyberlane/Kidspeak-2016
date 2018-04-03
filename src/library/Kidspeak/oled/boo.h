#include <avr/pgmspace.h>

const uint8_t boo[] PROGMEM={
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,   // 0x0010 (16) pixels
0xC0, 0xC0, 0xE0, 0xF0, 0x70, 0x78, 0x38, 0x1C, 0x1C, 0x1C, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x06,   // 0x0020 (32) pixels
0x06, 0x06, 0x06, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x1C, 0x1C, 0x1C, 0x38, 0x38, 0x70, 0x70,   // 0x0030 (48) pixels
0xE0, 0xE0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0040 (64) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,   // 0x0050 (80) pixels
0xC0, 0xF0, 0xF8, 0x3E, 0x1F, 0x07, 0x03, 0x01, 0xF1, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x00, 0x00,   // 0x0060 (96) pixels
0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0070 (112) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x07, 0x0F, 0x1E, 0x7C, 0xF0, 0xE0,   // 0x0080 (128) pixels
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0x0C,   // 0x0090 (144) pixels
0x0C, 0x1C, 0x18, 0xF8, 0xFE, 0x7F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x3B, 0x1F,   // 0x00A0 (160) pixels
0x03, 0x01, 0x01, 0x01, 0x03, 0x7F, 0x76, 0x3F, 0x07, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,   // 0x00B0 (176) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xC0, 0xC0,   // 0x00C0 (192) pixels
0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x03, 0x1F, 0xFF, 0xFC, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x00D0 (208) pixels
0x00, 0x00, 0x00, 0x03, 0x1F, 0x7E, 0xF0, 0xC0, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x0E, 0xFC,   // 0x00E0 (224) pixels
0x30, 0x30, 0x30, 0xF0, 0xB0, 0x30, 0xB0, 0xF8, 0x18, 0x18, 0xFC, 0xFC, 0x8C, 0x06, 0x06, 0x03,   // 0x00F0 (240) pixels
0xE3, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1C, 0x0C, 0x0E, 0x07,   // 0x0100 (256) pixels
0x03, 0x03, 0x01, 0x01, 0x01, 0x80, 0xC0, 0xE0, 0x79, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x1F, 0xFF,   // 0x0110 (272) pixels
0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7F, 0xFF,   // 0x0120 (288) pixels
0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0xF0, 0xF0, 0xFF, 0xFF, 0x3E, 0x0F, 0x07, 0x03, 0x06,   // 0x0130 (304) pixels
0x03, 0x01, 0x07, 0x0E, 0x1C, 0x1E, 0x07, 0xF1, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0140 (320) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x1C, 0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00,   // 0x0150 (336) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0160 (352) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x3F, 0xFE, 0xF0, 0xC0, 0x00, 0x00, 0x07, 0x3F, 0xFF, 0xFF,   // 0x0170 (368) pixels
0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0x3F, 0x07, 0x00,   // 0x0180 (384) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0190 (400) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x0F, 0x07, 0x07, 0x87, 0xC7,   // 0x01A0 (416) pixels
0xFE, 0xFE, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0F,   // 0x01B0 (432) pixels
0x3F, 0x7C, 0xF8, 0xE0, 0xC0, 0x83, 0x87, 0x0E, 0x0C, 0x18, 0x18, 0x30, 0x30, 0x18, 0x18, 0x1E,   // 0x01C0 (448) pixels
0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01D0 (464) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0x70, 0x78,   // 0x01E0 (480) pixels
0x38, 0x1C, 0x0E, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x01F0 (496) pixels
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x07, 0x0F, 0x0E, 0x1E,   // 0x0200 (512) pixels
0x1C, 0x1C, 0x38, 0x38, 0x38, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70,   // 0x0210 (528) pixels
0x70, 0x70, 0x38, 0x38, 0x38, 0x38, 0x38, 0x1C, 0x1C, 0x1C, 0x0E, 0x0E, 0x0F, 0x07, 0x07, 0x03,   // 0x0220 (544) pixels
0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // 0x0230 (560) pixels
};
