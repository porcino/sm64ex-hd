// Exclamation Box Outline

// 0x08024CB8
static const Lights1 exclamation_box_outline_seg8_lights_08024CB8 = gdSPDefLights1(
    0x7f, 0x00, 0x00,
    0xff, 0x00, 0x00, 0x28, 0x28, 0x28
);

// 0x08024CD0
static const Lights1 exclamation_box_outline_seg8_lights_08024CD0 = gdSPDefLights1(
    0x00, 0x7f, 0x00,
    0x00, 0xff, 0x00, 0x28, 0x28, 0x28
);

// 0x08024CE8
static const Lights1 exclamation_box_outline_seg8_lights_08024CE8 = gdSPDefLights1(
    0x00, 0x00, 0x7f,
    0x00, 0x00, 0xff, 0x28, 0x28, 0x28
);

// 0x08024D00
static const Lights1 exclamation_box_outline_seg8_lights_08024D00 = gdSPDefLights1(
    0x7f, 0x6a, 0x00,
    0xff, 0xd4, 0x00, 0x28, 0x28, 0x28
);

// 0x08024D18
static const Vtx exclamation_box_outline_seg8_vertex_08024D18[] = {
    {{{    26,      1,    -25}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0x50}}},
    {{{    26,     52,     26}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0x50}}},
    {{{    26,      1,     26}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0x50}}},
    {{{    26,      1,     26}, 0, {     0,      0}, {0x00, 0x81, 0x00, 0x50}}},
    {{{   -25,      1,     26}, 0, {     0,      0}, {0x00, 0x81, 0x00, 0x50}}},
    {{{   -25,      1,    -25}, 0, {     0,      0}, {0x00, 0x81, 0x00, 0x50}}},
    {{{    26,      1,    -25}, 0, {     0,      0}, {0x00, 0x81, 0x00, 0x50}}},
    {{{    26,      1,     26}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0x50}}},
    {{{    26,     52,     26}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0x50}}},
    {{{   -25,     52,     26}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0x50}}},
    {{{   -25,      1,     26}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0x50}}},
    {{{   -25,      1,     26}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x50}}},
    {{{   -25,     52,     26}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x50}}},
    {{{   -25,     52,    -25}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x50}}},
    {{{   -25,      1,    -25}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x50}}},
};

// 0x08024E08
static const Vtx exclamation_box_outline_seg8_vertex_08024E08[] = {
    {{{   -25,      1,    -25}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0x50}}},
    {{{   -25,     52,    -25}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0x50}}},
    {{{    26,     52,    -25}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0x50}}},
    {{{    26,      1,    -25}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0x50}}},
    {{{    26,      1,    -25}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0x50}}},
    {{{    26,     52,    -25}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0x50}}},
    {{{    26,     52,     26}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0x50}}},
    {{{   -25,     52,     26}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0x50}}},
    {{{    26,     52,     26}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0x50}}},
    {{{    26,     52,    -25}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0x50}}},
    {{{   -25,     52,    -25}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0x50}}},
};

// 0x08024EB8 - 0x08024F30
const Gfx exclamation_box_outline_seg8_dl_08024EB8[] = {
    gsSPVertex(exclamation_box_outline_seg8_vertex_08024D18, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  5,  6, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles( 7,  9, 10, 0x0, 11, 12, 13, 0x0),
    gsSP1Triangle(11, 13, 14, 0x0),
    gsSPVertex(exclamation_box_outline_seg8_vertex_08024E08, 11, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  8,  9, 0x0),
    gsSP1Triangle( 7,  9, 10, 0x0),
    gsSPEndDisplayList(),
};

// 0x08024F30 - 0x08024F58
const Gfx exclamation_box_outline_seg8_dl_08024F30[] = {
    gsDPPipeSync(),
    gsDPSetEnvColor(255, 255, 255, 80),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPEndDisplayList(),
};

// 0x08024F58 - 0x08024F88
const Gfx exclamation_box_outline_seg8_dl_08024F58[] = {
    gsSPDisplayList(exclamation_box_outline_seg8_dl_08024EB8),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPEndDisplayList(),
};

// 0x08024F88 - 0x08024FA8
const Gfx exclamation_box_outline_seg8_dl_08024F88[] = {
    gsSPDisplayList(exclamation_box_outline_seg8_dl_08024F30),
    gsSPLight(&exclamation_box_outline_seg8_lights_08024CB8.l, 1),
    gsSPLight(&exclamation_box_outline_seg8_lights_08024CB8.a, 2),
    gsSPBranchList(exclamation_box_outline_seg8_dl_08024F58),
};

// 0x08024FA8 - 0x08024FC8
const Gfx exclamation_box_outline_seg8_dl_08024FA8[] = {
    gsSPDisplayList(exclamation_box_outline_seg8_dl_08024F30),
    gsSPLight(&exclamation_box_outline_seg8_lights_08024CD0.l, 1),
    gsSPLight(&exclamation_box_outline_seg8_lights_08024CD0.a, 2),
    gsSPBranchList(exclamation_box_outline_seg8_dl_08024F58),
};

// 0x08024FC8 - 0x08024FE8
const Gfx exclamation_box_outline_seg8_dl_08024FC8[] = {
    gsSPDisplayList(exclamation_box_outline_seg8_dl_08024F30),
    gsSPLight(&exclamation_box_outline_seg8_lights_08024CE8.l, 1),
    gsSPLight(&exclamation_box_outline_seg8_lights_08024CE8.a, 2),
    gsSPBranchList(exclamation_box_outline_seg8_dl_08024F58),
};

// 0x08024FE8 - 0x08025008
const Gfx exclamation_box_outline_seg8_dl_08024FE8[] = {
    gsSPDisplayList(exclamation_box_outline_seg8_dl_08024F30),
    gsSPLight(&exclamation_box_outline_seg8_lights_08024D00.l, 1),
    gsSPLight(&exclamation_box_outline_seg8_lights_08024D00.a, 2),
    gsSPBranchList(exclamation_box_outline_seg8_dl_08024F58),
};

// 0x08025008
static const Vtx exclamation_box_outline_seg8_vertex_08025008[] = {
    {{{   -25,     52,     26}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    26,     52,     26}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    26,     52,    -25}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -25,     52,    -25}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    26,      1,     26}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -25,     52,     26}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -25,      1,     26}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    26,      1,    -25}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    26,     52,    -25}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    26,     52,     26}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    26,      1,     26}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -25,      1,    -25}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    26,      1,    -25}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -25,     52,    -25}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x080250E8
static const Vtx exclamation_box_outline_seg8_vertex_080250E8[] = {
    {{{   -25,      1,     26}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -25,     52,     26}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -25,     52,    -25}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -25,      1,    -25}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -25,      1,     26}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -25,      1,    -25}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    26,      1,    -25}, 0, {   996,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    26,      1,     26}, 0, {   -26,      0}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x08025168
ALIGNED8 static const u8 exclamation_box_outline_seg8_texture_08025168[] = {
#include "actors/exclamation_box_outline/exclamation_box_outline.rgba16.inc.c"
};

// 0x08025968 - 0x080259F8
const Gfx exclamation_box_outline_seg8_dl_08025968[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, exclamation_box_outline_seg8_texture_08025168),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(exclamation_box_outline_seg8_vertex_08025008, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  1,  5, 0x0,  4,  5,  6, 0x0),
    gsSP2Triangles( 7,  8,  9, 0x0,  7,  9, 10, 0x0),
    gsSP2Triangles(11,  8, 12, 0x0, 11, 13,  8, 0x0),
    gsSPVertex(exclamation_box_outline_seg8_vertex_080250E8, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSPEndDisplayList(),
};

// 0x080259F8 - 0x08025A68
const Gfx exclamation_box_outline_seg8_dl_080259F8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(exclamation_box_outline_seg8_dl_08025968),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsSPEndDisplayList(),
};

// 0x08025A68
static const Lights1 exclamation_box_outline_seg8_lights_08025A68 = gdSPDefLights1(
    0x7f, 0x7f, 0x7f,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x08025A80
ALIGNED8 static const u8 exclamation_box_outline_seg8_texture_08025A80[] = {
#include "actors/exclamation_box_outline/exclamation_point.rgba16.inc.c"
};

// 0x08025E80
static const Vtx exclamation_box_outline_seg8_vertex_08025E80[] = {
    {{{   -22,     49,      0}, 0, {  -157,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   -22,      4,      0}, 0, {  -157,   1048}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{    23,      4,      0}, 0, {   605,   1048}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{    23,     49,      0}, 0, {   605,      0}, {0x00, 0x00, 0x7f, 0xff}}},
};

// 0x08025EC0 - 0x08025F08
const Gfx exclamation_box_outline_seg8_dl_08025EC0[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, exclamation_box_outline_seg8_texture_08025A80),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 16 * 32 - 1, CALC_DXT(16, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&exclamation_box_outline_seg8_lights_08025A68.l, 1),
    gsSPLight(&exclamation_box_outline_seg8_lights_08025A68.a, 2),
    gsSPVertex(exclamation_box_outline_seg8_vertex_08025E80, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x08025F08 - 0x08025F78
Lights1 exclamation_box_outline_BlockSwitchMat01_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx exclamation_box_outline_BlockSwitchExclamation_alb_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 exclamation_box_outline_BlockSwitchExclamation_alb_rgba16[] = {
	#include "actors/exclamation_box/BlockSwitchExclamation_alb.rgba16.inc.c"
};

Vtx exclamation_box_outline_sm64_mesh_mesh_vtx_0[192] = {
	{{{-5, 44, -6},0, {2417, 354},{0xBA, 0x46, 0xB1, 0xFF}}},
	{{{-6, 44, -5},0, {2543, 313},{0xBA, 0x46, 0xB1, 0xFF}}},
	{{{-5, 45, -5},0, {2451, 265},{0xBA, 0x46, 0xB1, 0xFF}}},
	{{{6, 44, -5},0, {1524, 319},{0x46, 0x46, 0xB1, 0xFF}}},
	{{{5, 44, -6},0, {1650, 359},{0x46, 0x46, 0xB1, 0xFF}}},
	{{{5, 45, -5},0, {1616, 266},{0x46, 0x46, 0xB1, 0xFF}}},
	{{{-5, 19, -5},0, {2448, 2571},{0xBA, 0xBA, 0xB1, 0xFF}}},
	{{{-6, 20, -5},0, {2540, 2518},{0xBA, 0xBA, 0xB1, 0xFF}}},
	{{{-5, 20, -6},0, {2414, 2478},{0xBA, 0xBA, 0xB1, 0xFF}}},
	{{{6, 20, -5},0, {1521, 2524},{0x46, 0xBA, 0xB1, 0xFF}}},
	{{{5, 19, -5},0, {1613, 2573},{0x46, 0xBA, 0xB1, 0xFF}}},
	{{{5, 20, -6},0, {1647, 2483},{0x46, 0xBA, 0xB1, 0xFF}}},
	{{{-5, 16, -6},0, {2394, 3185},{0xBA, 0x46, 0xB1, 0xFF}}},
	{{{-6, 16, -5},0, {2496, 3175},{0xBA, 0x46, 0xB1, 0xFF}}},
	{{{-5, 17, -5},0, {2424, 3087},{0xBA, 0x46, 0xB1, 0xFF}}},
	{{{6, 16, -5},0, {1569, 3174},{0x46, 0x46, 0xB1, 0xFF}}},
	{{{5, 16, -6},0, {1671, 3190},{0x46, 0x46, 0xB1, 0xFF}}},
	{{{5, 17, -5},0, {1641, 3083},{0x46, 0x46, 0xB1, 0xFF}}},
	{{{-5, 8, -5},0, {2423, 3813},{0xBA, 0xBA, 0xB1, 0xFF}}},
	{{{-6, 9, -5},0, {2495, 3722},{0xBA, 0xBA, 0xB1, 0xFF}}},
	{{{-5, 9, -6},0, {2393, 3706},{0xBA, 0xBA, 0xB1, 0xFF}}},
	{{{6, 9, -5},0, {1568, 3721},{0x46, 0xBA, 0xB1, 0xFF}}},
	{{{5, 8, -5},0, {1640, 3809},{0x46, 0xBA, 0xB1, 0xFF}}},
	{{{5, 9, -6},0, {1670, 3711},{0x46, 0xBA, 0xB1, 0xFF}}},
	{{{5, 44, 6},0, {2417, 354},{0x46, 0x46, 0x4F, 0xFF}}},
	{{{6, 44, 5},0, {2543, 313},{0x46, 0x46, 0x4F, 0xFF}}},
	{{{5, 45, 5},0, {2451, 265},{0x46, 0x46, 0x4F, 0xFF}}},
	{{{-6, 44, 5},0, {1524, 319},{0xBA, 0x46, 0x4F, 0xFF}}},
	{{{-5, 44, 6},0, {1650, 359},{0xBA, 0x46, 0x4F, 0xFF}}},
	{{{-5, 45, 5},0, {1616, 266},{0xBA, 0x46, 0x4F, 0xFF}}},
	{{{5, 19, 5},0, {2448, 2571},{0x46, 0xBA, 0x4F, 0xFF}}},
	{{{6, 20, 5},0, {2540, 2518},{0x46, 0xBA, 0x4F, 0xFF}}},
	{{{5, 20, 6},0, {2414, 2478},{0x46, 0xBA, 0x4F, 0xFF}}},
	{{{-6, 20, 5},0, {1521, 2524},{0xBA, 0xBA, 0x4F, 0xFF}}},
	{{{-5, 19, 5},0, {1613, 2573},{0xBA, 0xBA, 0x4F, 0xFF}}},
	{{{-5, 20, 6},0, {1647, 2483},{0xBA, 0xBA, 0x4F, 0xFF}}},
	{{{5, 16, 6},0, {2394, 3185},{0x46, 0x46, 0x4F, 0xFF}}},
	{{{6, 16, 5},0, {2496, 3175},{0x46, 0x46, 0x4F, 0xFF}}},
	{{{5, 17, 5},0, {2424, 3087},{0x46, 0x46, 0x4F, 0xFF}}},
	{{{-6, 16, 5},0, {1569, 3174},{0xBA, 0x46, 0x4F, 0xFF}}},
	{{{-5, 16, 6},0, {1671, 3190},{0xBA, 0x46, 0x4F, 0xFF}}},
	{{{-5, 17, 5},0, {1641, 3083},{0xBA, 0x46, 0x4F, 0xFF}}},
	{{{5, 8, 5},0, {2423, 3813},{0x46, 0xBA, 0x4F, 0xFF}}},
	{{{6, 9, 5},0, {2495, 3722},{0x46, 0xBA, 0x4F, 0xFF}}},
	{{{5, 9, 6},0, {2393, 3706},{0x46, 0xBA, 0x4F, 0xFF}}},
	{{{-6, 9, 5},0, {1568, 3721},{0xBA, 0xBA, 0x4F, 0xFF}}},
	{{{-5, 8, 5},0, {1640, 3809},{0xBA, 0xBA, 0x4F, 0xFF}}},
	{{{-5, 9, 6},0, {1670, 3711},{0xBA, 0xBA, 0x4F, 0xFF}}},
	{{{6, 20, 5},0, {2540, 2518},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{5, 19, 5},0, {2448, 2571},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{5, 19, -5},0, {1613, 2573},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{6, 20, -5},0, {1521, 2524},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{5, 44, -6},0, {1650, 359},{0x0, 0x0, 0x81, 0xFF}}},
	{{{5, 20, -6},0, {1647, 2483},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-5, 44, -6},0, {2417, 354},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-5, 20, -6},0, {2414, 2478},{0x0, 0x0, 0x81, 0xFF}}},
	{{{5, 19, 5},0, {2448, 2571},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-5, 19, 5},0, {1613, 2573},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-5, 19, -5},0, {2448, 2571},{0x0, 0x81, 0x0, 0xFF}}},
	{{{5, 19, -5},0, {1613, 2573},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-6, 44, 5},0, {1524, 319},{0xA6, 0x5A, 0x0, 0xFF}}},
	{{{-5, 45, 5},0, {1616, 266},{0xA6, 0x5A, 0x0, 0xFF}}},
	{{{-5, 45, -5},0, {2451, 265},{0xA6, 0x5A, 0x0, 0xFF}}},
	{{{-6, 44, -5},0, {2543, 313},{0xA6, 0x5A, 0x0, 0xFF}}},
	{{{-5, 45, 5},0, {1578, 3118},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{5, 45, 5},0, {1578, 3763},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{5, 45, -5},0, {2458, 3763},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-5, 45, -5},0, {2458, 3118},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-6, 44, -5},0, {2543, 313},{0xAC, 0x0, 0xA1, 0xFF}}},
	{{{-5, 44, -6},0, {2417, 354},{0xAC, 0x0, 0xA1, 0xFF}}},
	{{{-6, 20, -5},0, {2540, 2518},{0xAC, 0x0, 0xA1, 0xFF}}},
	{{{-5, 20, -6},0, {2414, 2478},{0xAC, 0x0, 0xA1, 0xFF}}},
	{{{-5, 44, -6},0, {2417, 354},{0x0, 0x54, 0xA1, 0xFF}}},
	{{{-5, 45, -5},0, {2451, 265},{0x0, 0x54, 0xA1, 0xFF}}},
	{{{5, 44, -6},0, {1650, 359},{0x0, 0x54, 0xA1, 0xFF}}},
	{{{5, 45, -5},0, {1616, 266},{0x0, 0x54, 0xA1, 0xFF}}},
	{{{5, 44, -6},0, {1650, 359},{0x54, 0x0, 0xA1, 0xFF}}},
	{{{6, 44, -5},0, {1524, 319},{0x54, 0x0, 0xA1, 0xFF}}},
	{{{5, 20, -6},0, {1647, 2483},{0x54, 0x0, 0xA1, 0xFF}}},
	{{{6, 20, -5},0, {1521, 2524},{0x54, 0x0, 0xA1, 0xFF}}},
	{{{-5, 19, -5},0, {2448, 2571},{0x0, 0xAC, 0xA1, 0xFF}}},
	{{{-5, 20, -6},0, {2414, 2478},{0x0, 0xAC, 0xA1, 0xFF}}},
	{{{5, 19, -5},0, {1613, 2573},{0x0, 0xAC, 0xA1, 0xFF}}},
	{{{5, 20, -6},0, {1647, 2483},{0x0, 0xAC, 0xA1, 0xFF}}},
	{{{5, 45, 5},0, {2451, 265},{0x5A, 0x5A, 0x0, 0xFF}}},
	{{{6, 44, 5},0, {2543, 313},{0x5A, 0x5A, 0x0, 0xFF}}},
	{{{6, 44, -5},0, {1524, 319},{0x5A, 0x5A, 0x0, 0xFF}}},
	{{{5, 45, -5},0, {1616, 266},{0x5A, 0x5A, 0x0, 0xFF}}},
	{{{5, 16, -6},0, {1671, 3190},{0x0, 0x0, 0x81, 0xFF}}},
	{{{5, 9, -6},0, {1670, 3711},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-5, 16, -6},0, {2394, 3185},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-5, 9, -6},0, {2393, 3706},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-6, 9, 5},0, {1568, 3721},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-6, 16, 5},0, {1569, 3174},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-6, 16, -5},0, {2496, 3175},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-6, 9, -5},0, {2495, 3722},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5, 17, 5},0, {1641, 3083},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{5, 17, 5},0, {2424, 3087},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{5, 17, -5},0, {1641, 3083},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-5, 17, -5},0, {2424, 3087},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-6, 16, -5},0, {2496, 3175},{0xAC, 0x0, 0xA1, 0xFF}}},
	{{{-5, 16, -6},0, {2394, 3185},{0xAC, 0x0, 0xA1, 0xFF}}},
	{{{-6, 9, -5},0, {2495, 3722},{0xAC, 0x0, 0xA1, 0xFF}}},
	{{{-5, 9, -6},0, {2393, 3706},{0xAC, 0x0, 0xA1, 0xFF}}},
	{{{-5, 16, -6},0, {2394, 3185},{0x0, 0x54, 0xA1, 0xFF}}},
	{{{-5, 17, -5},0, {2424, 3087},{0x0, 0x54, 0xA1, 0xFF}}},
	{{{5, 16, -6},0, {1671, 3190},{0x0, 0x54, 0xA1, 0xFF}}},
	{{{5, 17, -5},0, {1641, 3083},{0x0, 0x54, 0xA1, 0xFF}}},
	{{{5, 16, -6},0, {1671, 3190},{0x54, 0x0, 0xA1, 0xFF}}},
	{{{6, 16, -5},0, {1569, 3174},{0x54, 0x0, 0xA1, 0xFF}}},
	{{{5, 9, -6},0, {1670, 3711},{0x54, 0x0, 0xA1, 0xFF}}},
	{{{6, 9, -5},0, {1568, 3721},{0x54, 0x0, 0xA1, 0xFF}}},
	{{{-5, 8, -5},0, {2423, 3813},{0x0, 0xAC, 0xA1, 0xFF}}},
	{{{-5, 9, -6},0, {2393, 3706},{0x0, 0xAC, 0xA1, 0xFF}}},
	{{{5, 8, -5},0, {1640, 3809},{0x0, 0xAC, 0xA1, 0xFF}}},
	{{{5, 9, -6},0, {1670, 3711},{0x0, 0xAC, 0xA1, 0xFF}}},
	{{{-5, 19, 5},0, {1613, 2573},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-6, 20, 5},0, {1521, 2524},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-6, 20, -5},0, {2540, 2518},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-5, 19, -5},0, {2448, 2571},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-5, 44, 6},0, {1650, 359},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-5, 20, 6},0, {1647, 2483},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{5, 44, 6},0, {2417, 354},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{5, 20, 6},0, {2414, 2478},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-6, 44, -5},0, {2543, 313},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-6, 20, -5},0, {2540, 2518},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-6, 20, 5},0, {1521, 2524},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-6, 44, 5},0, {1524, 319},{0x81, 0x0, 0x0, 0xFF}}},
	{{{6, 44, 5},0, {2543, 313},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{6, 20, 5},0, {2540, 2518},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{6, 20, -5},0, {1521, 2524},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{6, 44, -5},0, {1524, 319},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{6, 44, 5},0, {2543, 313},{0x54, 0x0, 0x5F, 0xFF}}},
	{{{5, 44, 6},0, {2417, 354},{0x54, 0x0, 0x5F, 0xFF}}},
	{{{6, 20, 5},0, {2540, 2518},{0x54, 0x0, 0x5F, 0xFF}}},
	{{{5, 20, 6},0, {2414, 2478},{0x54, 0x0, 0x5F, 0xFF}}},
	{{{5, 44, 6},0, {2417, 354},{0x0, 0x54, 0x5F, 0xFF}}},
	{{{5, 45, 5},0, {2451, 265},{0x0, 0x54, 0x5F, 0xFF}}},
	{{{-5, 44, 6},0, {1650, 359},{0x0, 0x54, 0x5F, 0xFF}}},
	{{{-5, 45, 5},0, {1616, 266},{0x0, 0x54, 0x5F, 0xFF}}},
	{{{-5, 44, 6},0, {1650, 359},{0xAC, 0x0, 0x5F, 0xFF}}},
	{{{-6, 44, 5},0, {1524, 319},{0xAC, 0x0, 0x5F, 0xFF}}},
	{{{-5, 20, 6},0, {1647, 2483},{0xAC, 0x0, 0x5F, 0xFF}}},
	{{{-6, 20, 5},0, {1521, 2524},{0xAC, 0x0, 0x5F, 0xFF}}},
	{{{5, 19, 5},0, {2448, 2571},{0x0, 0xAC, 0x5F, 0xFF}}},
	{{{5, 20, 6},0, {2414, 2478},{0x0, 0xAC, 0x5F, 0xFF}}},
	{{{-5, 19, 5},0, {1613, 2573},{0x0, 0xAC, 0x5F, 0xFF}}},
	{{{-5, 20, 6},0, {1647, 2483},{0x0, 0xAC, 0x5F, 0xFF}}},
	{{{6, 9, 5},0, {2495, 3722},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{5, 8, 5},0, {2423, 3813},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{5, 8, -5},0, {1640, 3809},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{6, 9, -5},0, {1568, 3721},{0x5A, 0xA6, 0x0, 0xFF}}},
	{{{-6, 16, 5},0, {1569, 3174},{0xA6, 0x5A, 0x0, 0xFF}}},
	{{{-5, 17, 5},0, {1641, 3083},{0xA6, 0x5A, 0x0, 0xFF}}},
	{{{-5, 17, -5},0, {2424, 3087},{0xA6, 0x5A, 0x0, 0xFF}}},
	{{{-6, 16, -5},0, {2496, 3175},{0xA6, 0x5A, 0x0, 0xFF}}},
	{{{5, 17, 5},0, {2424, 3087},{0x5A, 0x5A, 0x0, 0xFF}}},
	{{{6, 16, 5},0, {2496, 3175},{0x5A, 0x5A, 0x0, 0xFF}}},
	{{{6, 16, -5},0, {1569, 3174},{0x5A, 0x5A, 0x0, 0xFF}}},
	{{{5, 17, -5},0, {1641, 3083},{0x5A, 0x5A, 0x0, 0xFF}}},
	{{{-5, 8, 5},0, {1640, 3809},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-6, 9, 5},0, {1568, 3721},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-6, 9, -5},0, {2495, 3722},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-5, 8, -5},0, {2423, 3813},{0xA6, 0xA6, 0x0, 0xFF}}},
	{{{-5, 16, 6},0, {1671, 3190},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-5, 9, 6},0, {1670, 3711},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{5, 16, 6},0, {2394, 3185},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{5, 9, 6},0, {2393, 3706},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{5, 8, 5},0, {1608, 3796},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-5, 8, 5},0, {2460, 3796},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-5, 8, -5},0, {2460, 3128},{0x0, 0x81, 0x0, 0xFF}}},
	{{{5, 8, -5},0, {1608, 3128},{0x0, 0x81, 0x0, 0xFF}}},
	{{{6, 9, -5},0, {1568, 3721},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{6, 16, -5},0, {1569, 3174},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{6, 16, 5},0, {2496, 3175},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{6, 9, 5},0, {2495, 3722},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{6, 16, 5},0, {2496, 3175},{0x54, 0x0, 0x5F, 0xFF}}},
	{{{5, 16, 6},0, {2394, 3185},{0x54, 0x0, 0x5F, 0xFF}}},
	{{{6, 9, 5},0, {2495, 3722},{0x54, 0x0, 0x5F, 0xFF}}},
	{{{5, 9, 6},0, {2393, 3706},{0x54, 0x0, 0x5F, 0xFF}}},
	{{{5, 16, 6},0, {2394, 3185},{0x0, 0x54, 0x5F, 0xFF}}},
	{{{5, 17, 5},0, {2424, 3087},{0x0, 0x54, 0x5F, 0xFF}}},
	{{{-5, 16, 6},0, {1671, 3190},{0x0, 0x54, 0x5F, 0xFF}}},
	{{{-5, 17, 5},0, {1641, 3083},{0x0, 0x54, 0x5F, 0xFF}}},
	{{{-5, 16, 6},0, {1671, 3190},{0xAC, 0x0, 0x5F, 0xFF}}},
	{{{-6, 16, 5},0, {1569, 3174},{0xAC, 0x0, 0x5F, 0xFF}}},
	{{{-5, 9, 6},0, {1670, 3711},{0xAC, 0x0, 0x5F, 0xFF}}},
	{{{-6, 9, 5},0, {1568, 3721},{0xAC, 0x0, 0x5F, 0xFF}}},
	{{{5, 8, 5},0, {2423, 3813},{0x0, 0xAC, 0x5F, 0xFF}}},
	{{{5, 9, 6},0, {2393, 3706},{0x0, 0xAC, 0x5F, 0xFF}}},
	{{{-5, 8, 5},0, {1640, 3809},{0x0, 0xAC, 0x5F, 0xFF}}},
	{{{-5, 9, 6},0, {1670, 3711},{0x0, 0xAC, 0x5F, 0xFF}}},
};

Gfx exclamation_box_outline_sm64_mesh_mesh_tri_0[] = {
	gsSPVertex(exclamation_box_outline_sm64_mesh_mesh_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(exclamation_box_outline_sm64_mesh_mesh_vtx_0 + 15, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(exclamation_box_outline_sm64_mesh_mesh_vtx_0 + 30, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(exclamation_box_outline_sm64_mesh_mesh_vtx_0 + 45, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(exclamation_box_outline_sm64_mesh_mesh_vtx_0 + 60, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(exclamation_box_outline_sm64_mesh_mesh_vtx_0 + 76, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(exclamation_box_outline_sm64_mesh_mesh_vtx_0 + 92, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(exclamation_box_outline_sm64_mesh_mesh_vtx_0 + 108, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(exclamation_box_outline_sm64_mesh_mesh_vtx_0 + 124, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(exclamation_box_outline_sm64_mesh_mesh_vtx_0 + 140, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(exclamation_box_outline_sm64_mesh_mesh_vtx_0 + 156, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(exclamation_box_outline_sm64_mesh_mesh_vtx_0 + 172, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(exclamation_box_outline_sm64_mesh_mesh_vtx_0 + 188, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSPEndDisplayList(),
};


Gfx mat_exclamation_box_outline_BlockSwitchMat01_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 128, exclamation_box_outline_BlockSwitchExclamation_alb_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 508, 508),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0),
	gsDPSetTileSize(0, 0, 0, 508, 508),
	gsSPSetLights1(exclamation_box_outline_BlockSwitchMat01_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx exclamation_box_outline_seg8_dl_08025F08[] = {
	gsSPDisplayList(mat_exclamation_box_outline_BlockSwitchMat01_f3d),
	gsSPDisplayList(exclamation_box_outline_sm64_mesh_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};




