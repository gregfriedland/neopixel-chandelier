#ifndef PALETTE_H
#define PALETTE_H

#include <stdint.h>
#include <inttypes.h>
#include <avr/pgmspace.h>

#include "FastLED.h"
#include "settings.h"

class Palette {
public:
  Palette(int palIndex, int palSize);
  
  CRGB getColor(colind_t colIndex);
  CRGB getColor(int palIndex2, colind_t colIndex) { return 0; }

private:
  int m_palIndex;
  int m_palSize;
  CRGBPalette16 m_rgbPalette[NUM_COLORS_PER_PALETTE];
};

const uint32_t PROGMEM colorTable[] =
{0xFF0000,0x00FF00,0x0000FF,0xFFFF00,0x00FFFF,
0x690011,0xBF0426,0xCC2738,0xF2D99C,0xE5B96F,
0x04BFBF,0xCAFCD8,0xF7E967,0xA9CF54,0x588F27,
0x63A69F,0xF2E1AC,0xF2836B,0xF2594B,0xCD2C24,
0x2B3A42,0x3F5765,0xBDD4DE,0xEFEFEF,0xFF530D,
0xDCEBDD,0xA0D5D6,0x789AA1,0x304345,0xAD9A27,
0xFF6138,0xFFFF9D,0xBEEB9F,0x79BD8F,0x00A388,
0x261822,0x40152A,0x731630,0xCC1E2C,0xFF5434,
0x105B63,0xFFFAD5,0xFFD34E,0xDB9E36,0xBD4932,
0x575146,0x99633F,0xBDA66C,0xCDE08E,0xBFFFB9,
0xFF5335,0xB29C85,0x306E73,0x3B424C,0x1D181F,
0x96526B,0xD17869,0xEBAD60,0xF5CF66,0x8BAB8D,
0x4C1B33,0xEFE672,0x98A942,0x2D6960,0x141D14,
0xE3CBAC,0x9C9985,0xC46D3B,0x788880,0x324654,
0xF1E6D4,0xBA3D49,0x791F33,0x9F9694,0xE3E1DC,
0x332532,0x644D52,0xF77A52,0xFF974F,0xA49A87,
0xC24704,0xD9CC3C,0xFFEB79,0xA0E0A9,0x00ADA7,
0xE3BE8D,0xFF7E8A,0xFF6C57,0xD9521F,0x8F4A2D,
0xBEE8E0,0x373C40,0x2E2621,0x73320B,0xFF5E00,
0x403F33,0x6E755F,0xAFC2AA,0xFFDEA1,0xE54C10,
0xF6F792,0x333745,0x77C4D3,0xDAEDE2,0xEA2E49,
0xFCFAD0,0xA1A194,0x5B605F,0x464646,0xA90641,
0x41434A,0x6E9489,0xDEDCC3,0xF2F1E9,0x877963,
0xB52C38,0xEBD1B0,0x536682,0xD9964B,0xDE6846,
0xCFC7A4,0x5A9E94,0x005275,0x002344,0xA38650,
0x273030,0x646B6B,0x9CA88E,0xC0DB89,0xBDED45,
0x24221F,0x363F45,0x4B5F6D,0x5E7C88,0xFEB41C,
0x002F32,0x42826C,0xA5C77F,0xFFC861,0xC84663,
0x8C3A40,0xC2644F,0xD9A378,0xA38E6D,0x736C56,
0xBA2000,0x261700,0x342101,0xA59259,0xFCE7B8,
0x383633,0x96815C,0xFFF2C4,0xC5D1C0,0x575C56,
0x7D2A35,0xCC9258,0x917A56,0xB4BA6C,0xFEFFC2,
0xFFAB4A,0xCCBAAB,0x1E2129,0x3D5E6E,0x47A3A3,
0x556354,0xE58F0D,0x8C948A,0x495450,0x42423F,
0x2F3837,0xC5C7B6,0xFFF8D3,0x4C493E,0x222028,
0x637D74,0x403D3A,0x8C3B3B,0xAB6937,0xD4A960,
0x26240C,0x594C25,0xBFB38E,0xF2E5BD,0x55A390,
0x5D7370,0x7FA6A1,0xB8D9B8,0xD6EDBD,0xFFF5BC,
0xA63343,0xE65159,0xF5E9DB,0xF4F7CF,0xBAD984,
0x3E5916,0x93A605,0xF28705,0xF25C05,0xE5EFFA,
0x32530D,0x4F6837,0x4C7059,0x466C7F,0x5237D0,
0xFF765E,0xC2AE8B,0xFCCF65,0xFFE5C6,0xB7BDC4,
0x1F1811,0x344C2C,0x5C6E36,0x869E62,0xB9F0B9,
0x76A19A,0x272123,0xA68D60,0xB0C5BB,0xD9593D,
0xB57E49,0x8A404A,0x519179,0x8FB081,0xCCAE5E,
0xD92332,0xA61F2B,0x03738C,0x0396A6,0xF2E9E4,
0x53EDED,0x6AD97B,0x8BBD1E,0x967F29,0x993129,
0x1B1D26,0x425955,0x778C7A,0xF1F2D8,0xBFBD9F,
0xFCAD43,0xA3612C,0x6B1E26,0x75674B,0xBB985A,
0xC4D4CB,0x55665E,0x30282A,0x542733,0xE84167,
0x022859,0x45648C,0x7C8EA6,0xCCCCCC,0x383838,
0xFFF7FA,0xD3E070,0x92A6A5,0x7F6047,0xE8603A,
0x5B567A,0x729FB2,0xA1CFB1,0xDAE87D,0xFFF0AD,
0x1B100D,0x6A2C0C,0xCB5909,0xF18E1C,0xFFFBB1,
0x575263,0xFFEFCB,0xFFE3E3,0xE8B0AB,0xFFE3D4,
0xC39D44,0xDEBF5F,0xE7CA78,0xF3E5B0,0xEFE7CE,
0x1C3C4C,0x735208,0xA6905F,0x40230B,0x50732C,
0x8C4432,0x403330,0x769946,0xF5D769,0x3B606B,
0x3D322A,0x8C667D,0xBFA99C,0xDAC9E0,0xFFE8D2,
0x919C74,0x373F42,0x662244,0xE8333F,0xFFC338,
0x453E3E,0x808A6A,0xBAA874,0xD9BD8F,0xFF6A57,
0x1B5911,0xF2EDDC,0xBFAA84,0xD94814,0xA60303,
0x012626,0x247373,0x44A69C,0x6BF2D9,0x0D0D0D,
0x91D6BC,0x768C6A,0x755F31,0xB27215,0xFFBA4B,
0xDAF1FF,0xFFD500,0x750D41,0x141D36,0x1FA68F,
0x372016,0xF29A43,0x9D0000,0x2AA92A,0x0F3FD0,
0xA0FF8F,0x308021,0x60FF42,0x508047,0x4DCC35,
0xFFE296,0xE4C94E,0x9BC492,0xFF5646,0x453824,
0x393A3D,0x6A3A7A,0x5D769B,0x92B1BF,0xA7C5FF,
0x45334A,0x796B7D,0xBD7C6C,0xCC8787,0xF0A6A1,
0xF24B6A,0x8C0D48,0xF277B0,0xF2E5A2,0xF2E2C4,
0xF0F1F2,0x232625,0x647362,0xFF5629,0xD2D9B8,
0x102629,0x2B423A,0xD9AE91,0xB25C5A,0x451F38,
0xE88C59,0xD4684F,0xBD4E41,0x9C3F51,0x702F63,
0x350C1F,0x8D1B16,0xC03600,0xFFFFB7,0x8B9906,
0xFFE681,0xB5B86F,0x635E45,0x7D3036,0x29131E,
0x152737,0x2B4E69,0x799AA5,0xFFFFF0,0x682321,
0x5F6360,0xA8A095,0x96774F,0x755645,0x523A39,
0x4B5657,0x969481,0xD2C9B0,0xF4E3C1,0xB6B835,
0x229396,0x8BA88F,0xC7C5A7,0xF0DFD0,0xF23C3C,
0xDED57F,0xC28800,0x55633E,0x00A683,0x90E0A1,
0xBAB293,0xA39770,0xEFE4BD,0xA32500,0x2B2922,
0x636266,0xE0CEA4,0xE8A579,0x7D6855,0x42403E,
0x267365,0xD1C087,0xF2E3B6,0xD94E4E,0x8C4242,
0x282E33,0x25373A,0x164852,0x495E67,0xFF3838,
0xD4C4AD,0x9EA39D,0x6C7778,0x7A3014,0x21231D,
0x171D29,0x00364C,0x00B08C,0x23FF98,0x49CC71,
0x181821,0x272229,0x524740,0x9C855F,0xBF283E,
0x34A9FF,0x5982DB,0x665EB8,0x684682,0x632E62,
0x473C35,0xA36D5C,0x9C968B,0xD9CEAD,0x8A866A,
0x3B0F1C,0x963414,0xEB6613,0xFFAE70,0x593E00,
0xA6FF9A,0x7DD496,0x6DA69D,0x716EB2,0x484E66,
0x423327,0xDB7E3C,0x4D8C80,0x574F3B,0x353D33,
0x99878E,0x615558,0xCF7996,0x7D495B,0x372129,
0xC9BA94,0xF2ECC1,0xD1DEBD,0xADCFB1,0x8BBDB3,
0x70735A,0x84A63C,0xA9BF04,0xC0D904,0xECE80D,
0x99D49B,0xA5BD7E,0xB29C58,0xD1AF56,0xF0B74A,
0x202B30,0x4E7178,0x4FA9B8,0x74C0CF,0xF1F7E2,
0x3B3B3B,0xA8877E,0xFFA49D,0xFF7474,0xFF476C,
0x292E33,0xE89343,0x966E61,0x704141,0x382C2C,
0x0F252B,0x1A4640,0x036F50,0x03F575,0x037C2B,
0xE6E2AF,0xA7A37E,0xEFECCA,0x046380,0x002F2F,
0x468966,0xFFF0A5,0xFFB03B,0xB64926,0x8E2800,
0xB9121B,0x4C1B1B,0xF6E497,0xFCFAE1,0xBD8D46,
0xD8CAA8,0x5C832F,0x284907,0x382513,0x363942,
0xFCFFF5,0xD1DBBD,0x91AA9D,0x3E606F,0x193441,
0x85DB18,0xCDE855,0xF5F6D4,0xA7C520,0x493F0B,
0xB4AF91,0x787746,0x40411E,0x32331D,0xC03000,
0xE8E595,0xD0A825,0x40627C,0x26393D,0xFFFAE4,
0x7D8A2E,0xC9D787,0xFFFFFF,0xFFC0A9,0xFF8598,
0xFFF8E3,0xCCCC9F,0x33332D,0x9FB4CC,0xDB4105,
0x000000,0x263248,0x7E8AA2,0xFFFFFF,0xFF9800,
0x73603D,0xBF8A49,0xF2CA80,0x5E5A59,0x0D0D0D,
0x595241,0xB8AE9C,0xFFFFFF,0xACCFCC,0x8A0917,
0x5A1F00,0xD1570D,0xFDE792,0x477725,0xA9CC66,
0x292929,0x5B7876,0x8F9E8B,0xF2E6B6,0x412A22,
0x000000,0x333333,0xFF358B,0x01B0F0,0xAEEE00,
0xB0CC99,0x677E52,0xB7CA79,0xF6E8B1,0x89725B,
0x2E0927,0xD90000,0xFF2D00,0xFF8C00,0x04756F,
0xB8ECD7,0x083643,0xB1E001,0xCEF09D,0x476C5E,
0x96CA2D,0xB5E655,0xEDF7F2,0x4BB5C1,0x7FC6BC,
0xF7F2B2,0xADCF4F,0x84815B,0x4A1A2C,0x8E3557,
0x1C1D21,0x31353D,0x445878,0x92CDCF,0xEEEFF7,
0x10222B,0x95AB63,0xBDD684,0xE2F0D6,0xF6FFE0,
0xE7E8D1,0xD3CEAA,0xFBF7E4,0x424242,0x8E001C,
0x225378,0x1695A3,0xACF0F2,0xF3FFE2,0xEB7F00,
0xDDDCC5,0x958976,0x611427,0x1D2326,0x6A6A61,
0x105B63,0xFFFAD5,0xFFD34E,0xDB9E36,0xBD4932,
0x405952,0x9C9B7A,0xFFD393,0xFF974F,0xF54F29,
0x004358,0x1F8A70,0xBEDB39,0xFFE11A,0xFD7400,
0xDC3522,0xD9CB9E,0x374140,0x2A2C2B,0x1E1E20,
0xFF6600,0xC13B00,0x5E6D70,0x424E4F,0x1B1D1E,
0x686E75,0x9BAAC1,0x82787B,0xE4F1DB,0xAAC19B,
0xC98B2F,0x803C27,0xC56520,0xE1B41B,0x807916,
0xFFF0A3,0xB8CC6E,0x4B6000,0xE4F8FF,0x004460,
0xE7E9D1,0xD3D4AA,0xFCFAE6,0x444444,0x901808,
0x2F2933,0x01A2A6,0x29D9C2,0xBDF271,0xFFFFA6,
0xE1E6FA,0xC4D7ED,0xABC8E2,0x375D81,0x183152,
0x354242,0xACEBAE,0xFFFF9D,0xC9DE55,0x7D9100,
0x170F0E,0x290418,0x505217,0xFFD372,0xFFF1AF,
0x450003,0x5C0002,0x94090D,0xD40D12,0xFF1D23,
0xBEBEBE,0xF1E4D8,0x594735,0x94C7BA,0xD8F1E4,
0x133463,0x365FB7,0x799AE0,0xF4EFDC,0xBA9B65,
0xFF8000,0xFFD933,0xCCCC52,0x8FB359,0x192B33,
0x13140F,0xD4FF00,0xE4FFE6,0x68776C,0x00D6DD,
0x962D3E,0x343642,0x979C9C,0xF2EBC7,0x348899,
0x2F2933,0x01A2A6,0x29D9C2,0xBDF271,0xFFFFA6,
0x04BFBF,0xCAFCD8,0xF7E967,0xA9CF54,0x588F27,
0x88A825,0x35203B,0x911146,0xCF4A30,0xED8C2B,
0x6C6E58,0x3E423A,0x417378,0xA4CFBE,0xF4F7D9,
0x36362C,0x5D917D,0xA8AD80,0xE6D4A7,0x825534,
0xF9E4AD,0xE6B098,0xCC4452,0x723147,0x31152B,
0x484A47,0xC1CE96,0xECEBF0,0x687D77,0x353129,
0xF0C755,0xE2AD3B,0xBF5C00,0x901811,0x5C110F,
0xCFC291,0xFFF6C5,0xA1E8D9,0xFF712C,0x695D46,
0xF6B1C3,0xF0788C,0xDE264C,0xBC0D35,0xA20D1E,
0x730046,0xBFBB11,0xFFC200,0xE88801,0xC93C00,
0x52656B,0xFF3B77,0xCDFF00,0xFFFFFF,0xB8B89F,
0x14212B,0x293845,0x4F6373,0x8F8164,0xD9D7AC,
0x332532,0x644D52,0xF77A52,0xFF974F,0xA49A87,
0xFF5335,0xB29C85,0x306E73,0x3B424C,0x1D181F,
0xDB5800,0xFF9000,0xF0C600,0x8EA106,0x59631E,
0xFF6138,0xFFFF9D,0xBEEB9F,0x79BD8F,0x00A388,
0xD5FBFF,0x9FBCBF,0x647678,0x2F3738,0x59D8E5,
0x705B35,0xC7B07B,0xE8D9AC,0xFFF6D9,0x570026,
0x1A1F2B,0x30395C,0x4A6491,0x85A5CC,0xD0E4F2,
0xAF7575,0xEFD8A1,0xBCD693,0xAFD7DB,0x3D9CA8,
0xF0E14C,0xFFBB20,0xFA7B12,0xE85305,0x59CC0D,
0x006D80,0xBDA44D,0x3C2000,0x84CECC,0x78A419,
0xE54661,0xFFA644,0x998A2F,0x2C594F,0x002D40,
0x16193B,0x35478C,0x4E7AC7,0x7FB2F0,0xADD5F7,
0xFF5B2B,0xB1221C,0x34393E,0x8CC6D7,0xFFDA8C,
0xE8980C,0xB1F543,0xF2FF00,0xFF5E00,0x59BBAB,
0x690011,0xBF0426,0xCC2738,0xF2D99C,0xE5B96F,
0xBAB293,0xA39770,0xEFE4BD,0xA32500,0x2B2922,
0x302B1D,0x3F522B,0x737D26,0xA99E46,0xD9CB84,
0x00261C,0x044C29,0x167F39,0x45BF55,0x96ED89,
0x32450C,0x717400,0xDC8505,0xEC5519,0xBE2805,
0x261F27,0xFEE169,0xCDD452,0xF9722E,0xC9313D,
0x00305A,0x004B8D,0x0074D9,0x4192D9,0x7ABAF2,
0x24221F,0x363F45,0x4B5F6D,0x5E7C88,0xFEB41C,
0x5E0042,0x2C2233,0x005869,0x00856A,0x8DB500,
0xCDDEC6,0x4DAAAB,0x1E4F6A,0x2A423C,0x93A189,
0x776045,0xA8C545,0xDFD3B6,0xFFFFFF,0x0092B2,
0x762B1B,0x807227,0xCCBF7A,0xFFEF98,0x60B0A1,
0x25064D,0x36175E,0x553285,0x7B52AB,0x9768D1,
0x523631,0xD1BE91,0x605E3A,0x4D462F,0x592F39,
0xCFCA4C,0xFCF5BF,0x9FE5C2,0x5EB299,0x745A33,
0x979926,0x38CCB5,0xEEFF8E,0xFFD767,0xCC2A09,
0x94B24D,0xD3FF82,0x363D52,0x121D2B,0x111B1C,
0x0C273D,0x54D0ED,0xFFFEF1,0x70B85D,0x2C5E2E,
0xFFDB97,0xB28F4E,0xFFFDFB,0x466CB2,0x97BBFF,
0xEF5411,0xFA5B0F,0xFF6517,0xFF6D1F,0xFF822E,
0x00585F,0x009393,0xFFFCC4,0xF0EDBB,0xFF3800,
0xB67D14,0xF2921F,0xF0B23E,0xA62409,0x441208,
0x6B0C22,0xD9042B,0xF4CB89,0x588C8C,0x011C26,
0x49404F,0x596166,0xD1FFCD,0xA9BD8B,0x948A54,
0x4F1025,0xC5003E,0xD9FF5B,0x78AA00,0x15362D,
0x03497E,0x0596D5,0x9DEBFC,0x8D7754,0xFEB228,
0xFFFBDC,0xBFBCA5,0x7F7D6E,0x3F3E37,0xE5E2C6,
0x7D2A35,0xCC9258,0x917A56,0xB4BA6C,0xFEFFC2};

#define NUM_PALETTES (sizeof(colorTable) / sizeof(colorTable[0]) / NUM_COLORS_PER_PALETTE)

#endif
