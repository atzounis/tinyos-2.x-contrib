//#include "stdafx.h"
unsigned int dh_size = 1808;
unsigned long dbg_handler[0x200] = {
0xeac00006,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0xee1efe10,0x6afffffd,0xee08ee10,0xee1efe10,
0x5afffffd,0xee19ee10,0xe22ee4f1,0xe22ee8a5,
0xe22ee901,0xe35e000c,0x8afffff7,0xe08ff10e,
0xe1a00000,0xea00000b,0xea00000c,0xea00000b,
0xea00000a,0xea0000ff,0xea0000fe,0xea0000fd,
0xea000014,0xea000050,0xea000108,0xea000148,
0xea000148,0xea00009a,0xe3a00401,0xea0000eb,
0xe1a0300e,0xeb0000e1,0xe1a02000,0xeb0000df,
0xe1a01000,0xe3530002,0x34d20001,0x00d200b2,
0x84920004,0xeb0000dd,0xe2511001,0x1afffff8,
0xe3a00001,0xea0000dd,0xeb0000d4,0xe1a0b000,
0xeb0000d2,0xe1a0a000,0xeb0000d0,0xe1a09000,
0xeb0000ce,0xe1a0c000,0xe3a00070,0xe5cb0000,
0xeb0000ca,0xe1a01000,0xeb0000c8,0xe1a02000,
0xeb0000c6,0xe1a03000,0xeb0000c4,0xe1a04000,
0xeb0000c2,0xe1a05000,0xeb0000c0,0xe1a06000,
0xeb0000be,0xe1a07000,0xeb0000bc,0xe1a08000,
0xe5db0000,0xe3100080,0x0afffffc,0xe3a000e8,
0xe5cb0000,0xe5db0000,0xe3100080,0x0afffffc,
0xe5cbc000,0xe1a00001,0xeb0000ba,0xe1a00002,
0xeb0000b8,0xe1a00003,0xeb0000b6,0xe1a00004,
0xeb0000b4,0xe1a00005,0xeb0000b2,0xe1a00006,
0xeb0000b0,0xe1a00007,0xeb0000ae,0xe1a00008,
0xeb0000ac,0xe3a000d0,0xe54b0020,0xe25aa001,
0x1affffd2,0xe55b0004,0xe3100080,0x0afffffc,
0xe3a010ff,0xe54b1004,0xea0000a0,0xeb000097,
0xe1a0b000,0xeb000095,0xe1a0a000,0xeb000093,
0xe1a09000,0xeb000091,0xe1a0c000,0xe3a00070,
0xe0000990,0xe1cb00b0,0xeb00008c,0xe1a01000,
0xeb00008a,0xe1a02000,0xeb000088,0xe1a03000,
0xeb000086,0xe1a04000,0xeb000084,0xe1a05000,
0xeb000082,0xe1a06000,0xeb000080,0xe1a07000,
0xeb00007e,0xe1a08000,0xe3a0d080,0xe00d099d,
0xe1db00b0,0xe000000d,0xe150000d,0x1afffffb,
0xe3a000e8,0xe0000990,0xe1cb00b0,0xe3a0d080,
0xe00d099d,0xe1db00b0,0xe000000d,0xe150000d,
0x1afffffb,0xe1cbc0b0,0xe1a00001,0xeb00001c,
0xe1a00002,0xeb00001a,0xe1a00003,0xeb000018,
0xe1a00004,0xeb000016,0xe1a00005,0xeb000014,
0xe1a00006,0xeb000012,0xe1a00007,0xeb000010,
0xe1a00008,0xeb00000e,0xe3a000d0,0xe0000990,
0xe14b02b0,0xe25aa001,0x1affffca,0xe3a0d080,
0xe00d099d,0xe15b00b4,0xe000000d,0xe150000d,
0x1afffffb,0xe3a010ff,0xe3811cff,0xe14b10b4,
0xea000056,0xe0cb00b2,0xe1a00820,0xe0cb00b2,
0xe1a0f00e,0xeb000049,0xe12fff10,0x00000000,
0xea00004e,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0xee1efe10,0x5afffffd,0xee190e10,0xe1a0f00e,
0xee1efe10,0x6afffffd,0xee080e10,0xe1a0f00e,
0xebfffffa,0xeafffef8,0xe4cb0001,0xe1a00420,
0xe4cb0001,0xe1a00420,0xe4cb0001,0xe1a00420,
0xe4cb0001,0xe1a0f00e,0xe1a0300e,0xebffffeb,
0xe1a02000,0xebffffe9,0xe1a01000,0xebffffe7,
0xe3530005,0x34c20001,0x00c200b2,0x84820004,
0xe2511001,0x1afffff8,0xe3a00001,0xeaffffe7,
0xebffffde,0xe1a0b000,0xebffffdc,0xe1a0a000,
0xebffffda,0xe1a09000,0xebffffd8,0xe1a0c000,
0xe3a00070,0xe0000990,0xe58b0000,0xebffffd3,
0xe1a01000,0xebffffd1,0xe1a02000,0xebffffcf,
0xe1a03000,0xebffffcd,0xe1a04000,0xebffffcb,
0xe1a05000,0xebffffc9,0xe1a06000,0xebffffc7,
0xe1a07000,0xebffffc5,0xe1a08000,0xe3a0d080,
0xe00d099d,0xe59b0000,0xe000000d,0xe150000d,
0x1afffffb,0xe3a000e8,0xe0000990,0xe58b0000,
0xe3a0d080,0xe00d099d,0xe59b0000,0xe000000d,
0xe150000d,0x1afffffb,0xe58bc000,0xe48b1004,
0xe48b2004,0xe48b3004,0xe48b4004,0xe48b5004,
0xe48b6004,0xe48b7004,0xe48b8004,0xe3a000d0,
0xe0000990,0xe50b0020,0xe25aa001,0x1affffd2,
0xe3a0d080,0xe00d099d,0xe51b0004,0xe000000d,
0xe150000d,0x1afffffb,0xe3e01000,0xe50b1004,
0xeaffffa6,0xeaffffa5,0xebffff9c,0xe1a02000,
0xebffff9a,0xe1a01000,0xe4920004,0xe3700001,
0x1a000001,0xe2511001,0x1afffffa,0xebffff97,
0xe2420004,0xebffff95,0xe1a00001,0xeaffff97,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0x00000000,0x00000000,0x00000000,0x00000000,
0xeaffff4e,0xeaffff4d,0x00000710,0x00000000

};