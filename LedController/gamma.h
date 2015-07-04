#ifndef GAMMA_H
#define GAMMA_H
// Adapted from HexaWS2811: https://github.com/raplin/HexaWS2811/blob/master/HexaWS2811
/* Dithered luminance correction table - autogenerated by gamma.py */
#include <stdint.h>

#define DITHER_BITS 2

const uint8_t  gammaTable[] PROGMEM = {
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x2,0x2,0x2,0x2,0x2,0x2,0x2,0x2,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x4,0x4,0x4,0x4,0x4,0x4,0x5,0x5,0x5,0x5,0x5,0x6,0x6,0x6,0x6,0x7,0x7,0x7,0x7,0x8,0x8,0x8,0x8,0x9,0x9,0x9,0xa,0xa,0xa,0xa,0xb,0xb,0xb,0xc,0xc,0xc,0xd,0xd,0xe,0xe,0xe,0xf,0xf,0x10,0x10,0x10,0x11,0x11,0x12,0x12,0x13,0x13,0x14,0x14,0x14,0x15,0x15,0x16,0x16,0x17,0x18,0x18,0x19,0x19,0x1a,0x1a,0x1b,0x1b,0x1c,0x1d,0x1d,0x1e,0x1f,0x1f,0x20,0x20,0x21,0x22,0x22,0x23,0x24,0x25,0x25,0x26,0x27,0x28,0x28,0x29,0x2a,0x2b,0x2b,0x2c,0x2d,0x2e,0x2f,0x2f,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x38,0x39,0x3a,0x3b,0x3c,0x3d,0x3e,0x3f,0x40,0x41,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4a,0x4b,0x4c,0x4e,0x4f,0x50,0x51,0x52,0x54,0x55,0x56,0x57,0x59,0x5a,0x5b,0x5d,0x5e,0x5f,0x61,0x62,0x63,0x65,0x66,0x68,0x69,0x6a,0x6c,0x6d,0x6f,0x70,0x72,0x73,0x75,0x76,0x78,0x7a,0x7b,0x7d,0x7e,0x80,0x82,0x83,0x85,0x87,0x88,0x8a,0x8c,0x8d,0x8f,0x91,0x93,0x95,0x96,0x98,0x9a,0x9c,0x9e,0xa0,0xa2,0xa3,0xa5,0xa7,0xa9,0xab,0xad,0xaf,0xb1,0xb3,0xb5,0xb7,0xb9,0xbc,0xbe,0xc0,0xc2,0xc4,0xc6,0xc9,0xcb,0xcd,0xcf,0xd1,0xd4,0xd6,0xd8,0xdb,0xdd,0xdf,0xe2,0xe4,0xe6,0xe9,0xeb,0xee,0xf0,0xf3,0xf5,0xf8,0xfa,0xfd,
	0x0,0x0,0x0,0x0,0x0,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x2,0x2,0x2,0x2,0x2,0x2,0x2,0x2,0x2,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x4,0x4,0x4,0x4,0x4,0x4,0x5,0x5,0x5,0x5,0x5,0x6,0x6,0x6,0x6,0x6,0x7,0x7,0x7,0x7,0x8,0x8,0x8,0x8,0x9,0x9,0x9,0x9,0xa,0xa,0xa,0xb,0xb,0xb,0xc,0xc,0xc,0xd,0xd,0xd,0xe,0xe,0xe,0xf,0xf,0x10,0x10,0x10,0x11,0x11,0x12,0x12,0x13,0x13,0x14,0x14,0x14,0x15,0x15,0x16,0x16,0x17,0x18,0x18,0x19,0x19,0x1a,0x1a,0x1b,0x1b,0x1c,0x1d,0x1d,0x1e,0x1e,0x1f,0x20,0x20,0x21,0x22,0x22,0x23,0x24,0x24,0x25,0x26,0x27,0x27,0x28,0x29,0x2a,0x2a,0x2b,0x2c,0x2d,0x2d,0x2e,0x2f,0x30,0x31,0x32,0x33,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,0x3c,0x3d,0x3e,0x3f,0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x4a,0x4b,0x4c,0x4d,0x4e,0x4f,0x51,0x52,0x53,0x54,0x55,0x57,0x58,0x59,0x5a,0x5c,0x5d,0x5e,0x60,0x61,0x62,0x64,0x65,0x67,0x68,0x69,0x6b,0x6c,0x6e,0x6f,0x71,0x72,0x74,0x75,0x77,0x78,0x7a,0x7c,0x7d,0x7f,0x80,0x82,0x84,0x85,0x87,0x89,0x8a,0x8c,0x8e,0x90,0x91,0x93,0x95,0x97,0x99,0x9b,0x9c,0x9e,0xa0,0xa2,0xa4,0xa6,0xa8,0xaa,0xac,0xae,0xb0,0xb2,0xb4,0xb6,0xb8,0xba,0xbc,0xbe,0xc0,0xc2,0xc5,0xc7,0xc9,0xcb,0xcd,0xd0,0xd2,0xd4,0xd7,0xd9,0xdb,0xdd,0xe0,0xe2,0xe5,0xe7,0xe9,0xec,0xee,0xf1,0xf3,0xf6,0xf8,0xfb,0xfd,
	0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x2,0x2,0x2,0x2,0x2,0x2,0x2,0x2,0x2,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x4,0x4,0x4,0x4,0x4,0x4,0x5,0x5,0x5,0x5,0x5,0x6,0x6,0x6,0x6,0x6,0x7,0x7,0x7,0x7,0x8,0x8,0x8,0x8,0x9,0x9,0x9,0xa,0xa,0xa,0xa,0xb,0xb,0xb,0xc,0xc,0xc,0xd,0xd,0xd,0xe,0xe,0xf,0xf,0xf,0x10,0x10,0x11,0x11,0x11,0x12,0x12,0x13,0x13,0x14,0x14,0x15,0x15,0x16,0x16,0x17,0x17,0x18,0x18,0x19,0x19,0x1a,0x1b,0x1b,0x1c,0x1c,0x1d,0x1e,0x1e,0x1f,0x1f,0x20,0x21,0x21,0x22,0x23,0x23,0x24,0x25,0x26,0x26,0x27,0x28,0x29,0x29,0x2a,0x2b,0x2c,0x2c,0x2d,0x2e,0x2f,0x30,0x31,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,0x3c,0x3d,0x3e,0x3f,0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4a,0x4c,0x4d,0x4e,0x4f,0x50,0x51,0x53,0x54,0x55,0x56,0x58,0x59,0x5a,0x5c,0x5d,0x5e,0x60,0x61,0x62,0x64,0x65,0x66,0x68,0x69,0x6b,0x6c,0x6e,0x6f,0x71,0x72,0x74,0x75,0x77,0x78,0x7a,0x7b,0x7d,0x7f,0x80,0x82,0x83,0x85,0x87,0x89,0x8a,0x8c,0x8e,0x8f,0x91,0x93,0x95,0x97,0x98,0x9a,0x9c,0x9e,0xa0,0xa2,0xa4,0xa6,0xa8,0xaa,0xab,0xad,0xaf,0xb2,0xb4,0xb6,0xb8,0xba,0xbc,0xbe,0xc0,0xc2,0xc4,0xc7,0xc9,0xcb,0xcd,0xcf,0xd2,0xd4,0xd6,0xd9,0xdb,0xdd,0xe0,0xe2,0xe4,0xe7,0xe9,0xec,0xee,0xf1,0xf3,0xf6,0xf8,0xfb,0xfd,
	0x0,0x0,0x0,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x2,0x2,0x2,0x2,0x2,0x2,0x2,0x2,0x2,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x3,0x4,0x4,0x4,0x4,0x4,0x4,0x5,0x5,0x5,0x5,0x5,0x5,0x6,0x6,0x6,0x6,0x6,0x7,0x7,0x7,0x7,0x8,0x8,0x8,0x8,0x9,0x9,0x9,0x9,0xa,0xa,0xa,0xb,0xb,0xb,0xc,0xc,0xc,0xd,0xd,0xd,0xe,0xe,0xe,0xf,0xf,0xf,0x10,0x10,0x11,0x11,0x12,0x12,0x12,0x13,0x13,0x14,0x14,0x15,0x15,0x16,0x16,0x17,0x17,0x18,0x18,0x19,0x19,0x1a,0x1a,0x1b,0x1c,0x1c,0x1d,0x1d,0x1e,0x1f,0x1f,0x20,0x21,0x21,0x22,0x23,0x23,0x24,0x25,0x25,0x26,0x27,0x28,0x28,0x29,0x2a,0x2b,0x2b,0x2c,0x2d,0x2e,0x2f,0x2f,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x36,0x37,0x38,0x39,0x3a,0x3b,0x3c,0x3d,0x3e,0x3f,0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x48,0x49,0x4a,0x4b,0x4c,0x4d,0x4e,0x50,0x51,0x52,0x53,0x54,0x56,0x57,0x58,0x59,0x5b,0x5c,0x5d,0x5f,0x60,0x61,0x63,0x64,0x65,0x67,0x68,0x6a,0x6b,0x6d,0x6e,0x70,0x71,0x73,0x74,0x76,0x77,0x79,0x7a,0x7c,0x7d,0x7f,0x81,0x82,0x84,0x86,0x87,0x89,0x8b,0x8c,0x8e,0x90,0x92,0x93,0x95,0x97,0x99,0x9b,0x9d,0x9e,0xa0,0xa2,0xa4,0xa6,0xa8,0xaa,0xac,0xae,0xb0,0xb2,0xb4,0xb6,0xb8,0xba,0xbc,0xbe,0xc1,0xc3,0xc5,0xc7,0xc9,0xcb,0xce,0xd0,0xd2,0xd4,0xd7,0xd9,0xdb,0xde,0xe0,0xe2,0xe5,0xe7,0xea,0xec,0xef,0xf1,0xf4,0xf6,0xf9,0xfb,0xfe
	};

uint8_t gamma(uint8_t n, uint16_t ditherCycle) {
    int ft = ditherCycle & ((1<<DITHER_BITS)-1);
    return pgm_read_byte(gammaTable + (ft<<8) + n);
}

#endif