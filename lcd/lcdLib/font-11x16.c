#include "lcdutils.h"

const unsigned int font_11x16[95][11] = { // offset 0x20
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, //
  0x0000, 0x0000, 0x0000, 0x007C, 0x33FF, 0x33FF, 0x007C, 0x0000, 0x0000, 0x0000, 0x0000, // !
  0x0000, 0x0000, 0x003C, 0x003C, 0x0000, 0x0000, 0x003C, 0x003C, 0x0000, 0x0000, 0x0000, // "
  0x0200, 0x1E10, 0x1F90, 0x03F0, 0x027E, 0x1E1E, 0x1F90, 0x03F0, 0x027E, 0x001E, 0x0010, // #
  0x0000, 0x0478, 0x0CFC, 0x0CCC, 0x3FFF, 0x3FFF, 0x0CCC, 0x0FCC, 0x0788, 0x0000, 0x0000, // $
  0x3000, 0x3838, 0x1C38, 0x0E38, 0x0700, 0x0380, 0x01C0, 0x38E0, 0x3870, 0x3838, 0x001C, // %
  0x0000, 0x1F00, 0x3FB8, 0x31FC, 0x21C6, 0x37E2, 0x1E3E, 0x1C1C, 0x3600, 0x2200, 0x0000, // &
  0x0000, 0x0000, 0x0000, 0x0027, 0x003F, 0x001F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // '
  0x0000, 0x0000, 0x03F0, 0x0FFC, 0x1FFE, 0x3807, 0x2001, 0x2001, 0x0000, 0x0000, 0x0000, // (
  0x0000, 0x0000, 0x2001, 0x2001, 0x3807, 0x1FFE, 0x0FFC, 0x03F0, 0x0000, 0x0000, 0x0000, // )
  0x0000, 0x0C98, 0x0EB8, 0x03E0, 0x0FF8, 0x0FF8, 0x03E0, 0x0EB8, 0x0C98, 0x0000, 0x0000, // *
  0x0000, 0x0180, 0x0180, 0x0180, 0x0FF0, 0x0FF0, 0x0180, 0x0180, 0x0180, 0x0000, 0x0000, // +
  0x0000, 0x0000, 0x0000, 0xB800, 0xF800, 0x7800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // ,
  0x0000, 0x0180, 0x0180, 0x0180, 0x0180, 0x0180, 0x0180, 0x0180, 0x0180, 0x0000, 0x0000, // -
  0x0000, 0x0000, 0x0000, 0x3800, 0x3800, 0x3800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // .
  0x1800, 0x1C00, 0x0E00, 0x0700, 0x0380, 0x01C0, 0x00E0, 0x0070, 0x0038, 0x001C, 0x000E, // /
  0x07F8, 0x1FFE, 0x1E06, 0x3303, 0x3183, 0x30C3, 0x3063, 0x3033, 0x181E, 0x1FFE, 0x07F8, // 0
  0x0000, 0x0000, 0x300C, 0x300C, 0x300E, 0x3FFF, 0x3FFF, 0x3000, 0x3000, 0x3000, 0x0000, // 1
  0x301C, 0x381E, 0x3C07, 0x3E03, 0x3703, 0x3383, 0x31C3, 0x30E3, 0x3077, 0x303E, 0x301C, // 2
  0x0C0C, 0x1C0E, 0x3807, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x39E7, 0x1F7E, 0x0E3C, // 3
  0x03C0, 0x03E0, 0x0370, 0x0338, 0x031C, 0x030E, 0x0307, 0x3FFF, 0x3FFF, 0x0300, 0x0300, // 4
  0x0C3F, 0x1C7F, 0x3863, 0x3063, 0x3063, 0x3063, 0x3063, 0x3063, 0x38E3, 0x1FC3, 0x0F83, // 5
  0x0FC0, 0x1FF0, 0x39F8, 0x30DC, 0x30CE, 0x30C7, 0x30C3, 0x30C3, 0x39C3, 0x1F80, 0x0F00, // 6
  0x0003, 0x0003, 0x0003, 0x3003, 0x3C03, 0x0F03, 0x03C3, 0x00F3, 0x003F, 0x000F, 0x0003, // 7
  0x0F00, 0x1FBC, 0x39FE, 0x30E7, 0x30C3, 0x30C3, 0x30C3, 0x30E7, 0x39FE, 0x1FBC, 0x0F00, // 8
  0x003C, 0x007E, 0x30E7, 0x30C3, 0x30C3, 0x38C3, 0x1CC3, 0x0EC3, 0x07E7, 0x03FE, 0x00FC, // 9
  0x0000, 0x0000, 0x0000, 0x1C70, 0x1C70, 0x1C70, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // :
  0x0000, 0x0000, 0x0000, 0x9C70, 0xFC70, 0x7C70, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // ;
  0x0000, 0x00C0, 0x01E0, 0x03F0, 0x0738, 0x0E1C, 0x1C0E, 0x3807, 0x3003, 0x0000, 0x0000, // <
  0x0000, 0x0660, 0x0660, 0x0660, 0x0660, 0x0660, 0x0660, 0x0660, 0x0660, 0x0660, 0x0000, // =
  0x0000, 0x3003, 0x3807, 0x1C0E, 0x0E1C, 0x0738, 0x03F0, 0x01E0, 0x00C0, 0x0000, 0x0000, // >
  0x001C, 0x001E, 0x0007, 0x0003, 0x3783, 0x37C3, 0x00E3, 0x0077, 0x003E, 0x001C, 0x0000, // ?
  0x0FF8, 0x1FFE, 0x1807, 0x33F3, 0x37FB, 0x361B, 0x37FB, 0x37FB, 0x3607, 0x03FE, 0x01F8, // @
  0x3800, 0x3F00, 0x07E0, 0x06FC, 0x061F, 0x061F, 0x06FC, 0x07E0, 0x3F00, 0x3800, 0x0000, // A
  0x3FFF, 0x3FFF, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x30E7, 0x39FE, 0x1FBC, 0x0F00, 0x0000, // B
  0x03F0, 0x0FFC, 0x1C0E, 0x3807, 0x3003, 0x3003, 0x3003, 0x3807, 0x1C0E, 0x0C0C, 0x0000, // C
  0x3FFF, 0x3FFF, 0x3003, 0x3003, 0x3003, 0x3003, 0x3807, 0x1C0E, 0x0FFC, 0x03F0, 0x0000, // D
  0x3FFF, 0x3FFF, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x3003, 0x3003, 0x0000, // E
  0x3FFF, 0x3FFF, 0x00C3, 0x00C3, 0x00C3, 0x00C3, 0x00C3, 0x00C3, 0x0003, 0x0003, 0x0000, // F
  0x03F0, 0x0FFC, 0x1C0E, 0x3807, 0x3003, 0x30C3, 0x30C3, 0x30C3, 0x3FC7, 0x3FC6, 0x0000, // G
  0x3FFF, 0x3FFF, 0x00C0, 0x00C0, 0x00C0, 0x00C0, 0x00C0, 0x00C0, 0x3FFF, 0x3FFF, 0x0000, // H
  0x0000, 0x0000, 0x3003, 0x3003, 0x3FFF, 0x3FFF, 0x3003, 0x3003, 0x0000, 0x0000, 0x0000, // I
  0x0E00, 0x1E00, 0x3800, 0x3000, 0x3000, 0x3000, 0x3000, 0x3800, 0x1FFF, 0x07FF, 0x0000, // J
  0x3FFF, 0x3FFF, 0x00C0, 0x01E0, 0x03F0, 0x0738, 0x0E1C, 0x1C0E, 0x3807, 0x3003, 0x0000, // K
  0x3FFF, 0x3FFF, 0x3000, 0x3000, 0x3000, 0x3000, 0x3000, 0x3000, 0x3000, 0x3000, 0x0000, // L
  0x3FFF, 0x3FFF, 0x001E, 0x0078, 0x01E0, 0x01E0, 0x0078, 0x001E, 0x3FFF, 0x3FFF, 0x0000, // M
  0x3FFF, 0x3FFF, 0x000E, 0x0038, 0x00F0, 0x03C0, 0x0700, 0x1C00, 0x3FFF, 0x3FFF, 0x0000, // N
  0x03F0, 0x0FFC, 0x1C0E, 0x3807, 0x3003, 0x3003, 0x3807, 0x1C0E, 0x0FFC, 0x03F0, 0x0000, // O
  0x3FFF, 0x3FFF, 0x0183, 0x0183, 0x0183, 0x0183, 0x0183, 0x01C7, 0x00FE, 0x007C, 0x0000, // P
  0x03F0, 0x0FFC, 0x1C0E, 0x3807, 0x3003, 0x3603, 0x3E07, 0x1C0E, 0x3FFC, 0x33F0, 0x0000, // Q
  0x3FFF, 0x3FFF, 0x0183, 0x0183, 0x0383, 0x0783, 0x0F83, 0x1DC7, 0x38FE, 0x307C, 0x0000, // R
  0x0C3C, 0x1C7E, 0x38E7, 0x30C3, 0x30C3, 0x30C3, 0x30C3, 0x39C7, 0x1F8E, 0x0F0C, 0x0000, // S
  0x0000, 0x0003, 0x0003, 0x0003, 0x3FFF, 0x3FFF, 0x0003, 0x0003, 0x0003, 0x0000, 0x0000, // T
  0x07FF, 0x1FFF, 0x3800, 0x3000, 0x3000, 0x3000, 0x3000, 0x3800, 0x1FFF, 0x07FF, 0x0000, // U
  0x0007, 0x003F, 0x01F8, 0x0FC0, 0x3E00, 0x3E00, 0x0FC0, 0x01F8, 0x003F, 0x0007, 0x0000, // V
  0x3FFF, 0x3FFF, 0x1C00, 0x0600, 0x0380, 0x0380, 0x0600, 0x1C00, 0x3FFF, 0x3FFF, 0x0000, // W
  0x3003, 0x3C0F, 0x0E1C, 0x0330, 0x01E0, 0x01E0, 0x0330, 0x0E1C, 0x3C0F, 0x3003, 0x0000, // X
  0x0003, 0x000F, 0x003C, 0x00F0, 0x3FC0, 0x3FC0, 0x00F0, 0x003C, 0x000F, 0x0003, 0x0000, // Y
  0x3003, 0x3C03, 0x3E03, 0x3303, 0x31C3, 0x30E3, 0x3033, 0x301F, 0x300F, 0x3003, 0x0000, // Z
  0x0000, 0x0000, 0x3FFF, 0x3FFF, 0x3003, 0x3003, 0x3003, 0x3003, 0x0000, 0x0000, 0x0000, // [
  0x000E, 0x001C, 0x0038, 0x0070, 0x00E0, 0x01C0, 0x0380, 0x0700, 0x0E00, 0x1C00, 0x1800, // ''
  0x0000, 0x0000, 0x3003, 0x3003, 0x3003, 0x3003, 0x3FFF, 0x3FFF, 0x0000, 0x0000, 0x0000, // ]
  0x0060, 0x0070, 0x0038, 0x001C, 0x000E, 0x0007, 0x000E, 0x001C, 0x0038, 0x0070, 0x0060, // ^
  0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, // _
  0x0000, 0x0000, 0x0000, 0x0000, 0x003E, 0x007E, 0x004E, 0x0000, 0x0000, 0x0000, 0x0000, // `
  0x1C00, 0x3E40, 0x3360, 0x3360, 0x3360, 0x3360, 0x3360, 0x3360, 0x3FE0, 0x3FC0, 0x0000, // a
  0x3FFF, 0x3FFF, 0x30C0, 0x3060, 0x3060, 0x3060, 0x3060, 0x38E0, 0x1FC0, 0x0F80, 0x0000, // b
  0x0F80, 0x1FC0, 0x38E0, 0x3060, 0x3060, 0x3060, 0x3060, 0x3060, 0x18C0, 0x0880, 0x0000, // c
  0x0F80, 0x1FC0, 0x38E0, 0x3060, 0x3060, 0x3060, 0x30E0, 0x30C0, 0x3FFF, 0x3FFF, 0x0000, // d
  0x0F80, 0x1FC0, 0x3BE0, 0x3360, 0x3360, 0x3360, 0x3360, 0x3360, 0x13C0, 0x0180, 0x0000, // e
  0x00C0, 0x00C0, 0x3FFC, 0x3FFE, 0x00C7, 0x00C3, 0x00C3, 0x0003, 0x0000, 0x0000, 0x0000, // f
  0x0380, 0xC7C0, 0xCEE0, 0xCC60, 0xCC60, 0xCC60, 0xCC60, 0xE660, 0x7FE0, 0x3FE0, 0x0000, // g
  0x3FFF, 0x3FFF, 0x00C0, 0x0060, 0x0060, 0x0060, 0x00E0, 0x3FC0, 0x3F80, 0x0000, 0x0000, // h
  0x0000, 0x0000, 0x3000, 0x3060, 0x3FEC, 0x3FEC, 0x3000, 0x3000, 0x0000, 0x0000, 0x0000, // i
  0x0000, 0x0000, 0x6000, 0xE000, 0xC000, 0xC060, 0xFFEC, 0x7FEC, 0x0000, 0x0000, 0x0000, // j
  0x0000, 0x3FFF, 0x3FFF, 0x0300, 0x0780, 0x0FC0, 0x1CE0, 0x3860, 0x3000, 0x0000, 0x0000, // k
  0x0000, 0x0000, 0x3000, 0x3003, 0x3FFF, 0x3FFF, 0x3000, 0x3000, 0x0000, 0x0000, 0x0000, // l
  0x3FE0, 0x3FC0, 0x00E0, 0x00E0, 0x3FC0, 0x3FC0, 0x00E0, 0x00E0, 0x3FC0, 0x3F80, 0x0000, // m
  0x0000, 0x3FE0, 0x3FE0, 0x0060, 0x0060, 0x0060, 0x0060, 0x00E0, 0x3FC0, 0x3F80, 0x0000, // n
  0x0F80, 0x1FC0, 0x38E0, 0x3060, 0x3060, 0x3060, 0x3060, 0x38E0, 0x1FC0, 0x0F80, 0x0000, // o
  0xFFE0, 0xFFE0, 0x0C60, 0x1860, 0x1860, 0x1860, 0x1860, 0x1CE0, 0x0FC0, 0x0780, 0x0000, // p
  0x0780, 0x0FC0, 0x1CE0, 0x1860, 0x1860, 0x1860, 0x1860, 0x0C60, 0xFFE0, 0xFFE0, 0x0000, // q
  0x0000, 0x3FE0, 0x3FE0, 0x00C0, 0x0060, 0x0060, 0x0060, 0x0060, 0x00E0, 0x00C0, 0x0000, // r
  0x11C0, 0x33E0, 0x3360, 0x3360, 0x3360, 0x3360, 0x3F60, 0x1E40, 0x0000, 0x0000, 0x0000, // s
  0x0060, 0x0060, 0x1FFE, 0x3FFE, 0x3060, 0x3060, 0x3060, 0x3000, 0x0000, 0x0000, 0x0000, // t
  0x0FE0, 0x1FE0, 0x3800, 0x3000, 0x3000, 0x3000, 0x3000, 0x1800, 0x3FE0, 0x3FE0, 0x0000, // u
  0x0060, 0x01E0, 0x0780, 0x1E00, 0x3800, 0x3800, 0x1E00, 0x0780, 0x01E0, 0x0060, 0x0000, // v
  0x07E0, 0x1FE0, 0x3800, 0x1C00, 0x0FE0, 0x0FE0, 0x1C00, 0x3800, 0x1FE0, 0x07E0, 0x0000, // w
  0x3060, 0x38E0, 0x1DC0, 0x0F80, 0x0700, 0x0F80, 0x1DC0, 0x38E0, 0x3060, 0x0000, 0x0000, // x
  0x0000, 0x0060, 0x81E0, 0xE780, 0x7E00, 0x1E00, 0x0780, 0x01E0, 0x0060, 0x0000, 0x0000, // y
  0x3060, 0x3860, 0x3C60, 0x3660, 0x3360, 0x31E0, 0x30E0, 0x3060, 0x3020, 0x0000, 0x0000, // z
  0x0000, 0x0080, 0x01C0, 0x1FFC, 0x3F7E, 0x7007, 0x6003, 0x6003, 0x6003, 0x0000, 0x0000, // {
  0x0000, 0x0000, 0x0000, 0x0000, 0x3FFF, 0x3FFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // |
  0x0000, 0x6003, 0x6003, 0x6003, 0x7007, 0x3F7E, 0x1FFC, 0x01C0, 0x0080, 0x0000, 0x0000, // }
  0x0010, 0x0018, 0x000C, 0x0004, 0x000C, 0x0018, 0x0010, 0x0018, 0x000C, 0x0004, 0x0000  // ~
};

