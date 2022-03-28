// Amp

// 0x08000F18
ALIGNED8 static const u8 amp_seg8_texture_08000F18[] = {
#include "actors/amp/amp_electricity.rgba16.inc.c"
};

// 0x08001318
ALIGNED8 static const u8 amp_seg8_texture_08001318[] = {
#include "actors/amp/amp_eyes.rgba16.inc.c"
};

// 0x08001B18
ALIGNED8 static const u8 amp_seg8_texture_08001B18[] = {
#include "actors/amp/amp_body.rgba16.inc.c"
};

// 0x08002318
ALIGNED8 static const u8 amp_seg8_texture_08002318[] = {
#include "actors/amp/amp_mouth.rgba16.inc.c"
};

// 0x08002B18
static const Vtx amp_seg8_vertex_08002B18[] = {
    {{{   224,      0,    -89}, 0, {     0,    480}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   187,    149,      0}, 0, {   223,   1078}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   224,      0,     90}, 0, {   479,    478}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   187,   -148,      0}, 0, {   224,   -122}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   224,      0,    -89}, 0, {     0,    478}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x08002B68 - 0x08002BA0
const Gfx amp_seg8_dl_08002B68[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, amp_seg8_texture_08000F18),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 16 * 32 - 1, CALC_DXT(16, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(amp_seg8_vertex_08002B18, 5, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  4, 0x0),
    gsSPEndDisplayList(),
};

// 0x08002BA0 - 0x08002C10
const Gfx amp_seg8_dl_08002BA0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 4, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (16 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(amp_seg8_dl_08002B68),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK),
    gsSPEndDisplayList(),
};

// 0x08002C10
static const Vtx amp_seg8_vertex_08002C10[] = {
    {{{    68,     72,    158}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -27,    -71,    164}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    68,    -71,    158}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -27,     72,    164}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x08002C50 - 0x08002C88
const Gfx amp_seg8_dl_08002C50[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, amp_seg8_texture_08001318),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(amp_seg8_vertex_08002C10, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x08002C88 - 0x08002CF8
Lights1 amp_seg8_dl_08002C88_MI_face_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Vtx amp_seg8_dl_08002C88_amp_mesh_vtx_0[31] = {
	{{{-83, 78, 101},0, {5086, 10210},{0xD1, 0x40, 0x63, 0xFF}}},
	{{{-21, 85, 126},0, {4805, 7089},{0xF4, 0x49, 0x67, 0xFF}}},
	{{{-36, 117, 90},0, {3535, 8163},{0xEA, 0x59, 0x57, 0xFF}}},
	{{{-87, 41, 120},0, {6555, 10210},{0xC8, 0x23, 0x6D, 0xFF}}},
	{{{-25, 45, 146},0, {6400, 7089},{0xEF, 0x28, 0x77, 0xFF}}},
	{{{-49, 0, 148},0, {8176, 8163},{0xD8, 0x0, 0x79, 0xFF}}},
	{{{-106, 0, 112},0, {8176, 11153},{0xBC, 0x0, 0x6B, 0xFF}}},
	{{{-87, -41, 120},0, {9797, 10210},{0xC8, 0xDD, 0x6D, 0xFF}}},
	{{{-25, -45, 146},0, {9952, 7089},{0xEF, 0xD8, 0x77, 0xFF}}},
	{{{-83, -78, 101},0, {11266, 10210},{0xD1, 0xC0, 0x63, 0xFF}}},
	{{{-21, -85, 126},0, {11547, 7089},{0xF4, 0xB7, 0x67, 0xFF}}},
	{{{-36, -117, 90},0, {12817, 8163},{0xEA, 0xA7, 0x57, 0xFF}}},
	{{{31, -107, 97},0, {12425, 5042},{0x12, 0xAE, 0x60, 0xFF}}},
	{{{60, -81, 110},0, {11404, 3565},{0x23, 0xC2, 0x69, 0xFF}}},
	{{{42, -38, 139},0, {9678, 4099},{0x26, 0xDA, 0x73, 0xFF}}},
	{{{83, -41, 115},0, {9822, 2444},{0x41, 0xE3, 0x69, 0xFF}}},
	{{{42, -38, 139},0, {9678, 4099},{0x26, 0xDA, 0x73, 0xFF}}},
	{{{83, -41, 115},0, {9822, 2444},{0x41, 0xE3, 0x69, 0xFF}}},
	{{{61, 0, 136},0, {8176, 3242},{0x3C, 0x0, 0x70, 0xFF}}},
	{{{97, 0, 109},0, {8176, 1871},{0x4B, 0x0, 0x66, 0xFF}}},
	{{{83, 41, 115},0, {6530, 2444},{0x41, 0x1D, 0x69, 0xFF}}},
	{{{42, 38, 139},0, {6674, 4099},{0x26, 0x26, 0x73, 0xFF}}},
	{{{60, 81, 110},0, {4948, 3565},{0x23, 0x3E, 0x69, 0xFF}}},
	{{{-21, 85, 126},0, {4805, 7089},{0xF4, 0x49, 0x67, 0xFF}}},
	{{{31, 107, 97},0, {3927, 5042},{0x12, 0x52, 0x60, 0xFF}}},
	{{{-36, 117, 90},0, {3535, 8163},{0xEA, 0x59, 0x57, 0xFF}}},
	{{{-25, 45, 146},0, {6400, 7089},{0xEF, 0x28, 0x77, 0xFF}}},
	{{{18, 0, 150},0, {8176, 5042},{0x12, 0x0, 0x7E, 0xFF}}},
	{{{-49, 0, 148},0, {8176, 8163},{0xD8, 0x0, 0x79, 0xFF}}},
	{{{-25, -45, 146},0, {9952, 7089},{0xEF, 0xD8, 0x77, 0xFF}}},
	{{{-21, -85, 126},0, {11547, 7089},{0xF4, 0xB7, 0x67, 0xFF}}},
};

Gfx amp_seg8_dl_08002C88_amp_mesh_tri_0[] = {
	gsSPVertex(amp_seg8_dl_08002C88_amp_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSP1Triangle(10, 13, 14, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(amp_seg8_dl_08002C88_amp_mesh_vtx_0 + 16, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(5, 2, 4, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(10, 5, 7, 0),
	gsSP1Triangle(10, 11, 5, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(13, 0, 11, 0),
	gsSP1Triangle(13, 14, 0, 0),
	gsSP1Triangle(11, 0, 2, 0),
	gsSP1Triangle(11, 2, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_amp_seg8_dl_08002C88_MI_face_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 512, amp_seg8_texture_08001318),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 128, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 9, 0, G_TX_WRAP | G_TX_NOMIRROR, 9, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 2044, 2044),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 128, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 9, 0, G_TX_WRAP | G_TX_NOMIRROR, 9, 0),
	gsDPSetTileSize(0, 0, 0, 2044, 2044),
	gsDPSetPrimColor(0, 0, 187, 187, 187, 255),
	gsSPSetLights1(amp_seg8_dl_08002C88_MI_face_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_amp_seg8_dl_08002C88_MI_face_f3d[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

const Gfx amp_seg8_dl_08002C88[] = {
	gsSPDisplayList(mat_amp_seg8_dl_08002C88_MI_face_f3d),
	gsSPDisplayList(amp_seg8_dl_08002C88_amp_mesh_tri_0),
	gsSPDisplayList(mat_revert_amp_seg8_dl_08002C88_MI_face_f3d),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

// 0x08002CF8
static const Vtx amp_seg8_vertex_08002CF8[] = {
    {{{   -29,     72,    164}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -124,    -71,    121}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -29,    -71,    164}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{  -124,     72,    121}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x08002D38 - 0x08002D70
const Gfx amp_seg8_dl_08002D38[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, amp_seg8_texture_08002318),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(amp_seg8_vertex_08002CF8, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x08002D70 - 0x08002DE0
const Gfx amp_seg8_dl_08002D70[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(amp_seg8_dl_08002D38),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x08002DE0
static const Vtx amp_seg8_vertex_08002DE0[] = {
    {{{   -39,    -39,      0}, 0, {     0,    990}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,     40,      0}, 0, {   990,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -39,     40,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    40,    -39,      0}, 0, {   990,    990}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x08002E20 - 0x08002E58
const Gfx amp_seg8_dl_08002E20[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, amp_seg8_texture_08001B18),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPVertex(amp_seg8_vertex_08002DE0, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x08002E58 - 0x08002EC8
const Gfx amp_seg8_dl_08002E58[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(amp_seg8_dl_08002E20),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x08002EC8
static const Lights1 amp_seg8_lights_08002EC8 = gdSPDefLights1(
    0x33, 0x3f, 0x00,
    0xcf, 0xff, 0x00, 0x28, 0x28, 0x28
);

// //! Another malformed entry: Vertex interpreted as light
// 0x08002EE0
static const Vtx amp_seg8_vertex_08002EE0[] = {
    {{{   280,      0,     35}, 0, {     0,      0}, {0x7b, 0xe2, 0x00, 0x00}}},
    {{{   240,   -160,      0}, 0, {     0,      0}, {0x7b, 0xe2, 0x00, 0x00}}},
    {{{   280,      0,    -35}, 0, {     0,      0}, {0x7b, 0xe2, 0x00, 0x00}}},
    {{{   280,      0,    -35}, 0, {     0,      0}, {0x7b, 0x1e, 0x00, 0xff}}},
    {{{   240,    160,      0}, 0, {     0,      0}, {0x7b, 0x1e, 0x00, 0xff}}},
    {{{   280,      0,     35}, 0, {     0,      0}, {0x7b, 0x1e, 0x00, 0xff}}},
};

// 0x08002F40
static const Vtx amp_seg8_vertex_08002F40[] = {
    {{{   280,      0,     35}, 0, {     0,      0}, {0x7b, 0xe2, 0x00, 0x00}}},
    {{{   240,   -160,      0}, 0, {     0,      0}, {0x7b, 0xe2, 0x00, 0x00}}},
    {{{   280,      0,    -35}, 0, {     0,      0}, {0x7b, 0xe2, 0x00, 0x00}}},
    {{{   280,      0,    -35}, 0, {     0,      0}, {0x7b, 0x1e, 0x00, 0xff}}},
    {{{   240,    160,      0}, 0, {     0,      0}, {0x7b, 0x1e, 0x00, 0xff}}},
    {{{   280,      0,     35}, 0, {     0,      0}, {0x7b, 0x1e, 0x00, 0xff}}},
};

// 0x08002FA0
static const Vtx amp_seg8_vertex_08002FA0[] = {
    {{{   280,      0,     35}, 0, {     0,      0}, {0x7b, 0xe2, 0x00, 0x00}}},
    {{{   240,   -160,      0}, 0, {     0,      0}, {0x7b, 0xe2, 0x00, 0x00}}},
    {{{   280,      0,    -35}, 0, {     0,      0}, {0x7b, 0xe2, 0x00, 0x00}}},
    {{{   280,      0,    -35}, 0, {     0,      0}, {0x7b, 0x1e, 0x00, 0xff}}},
    {{{   240,    160,      0}, 0, {     0,      0}, {0x7b, 0x1e, 0x00, 0xff}}},
    {{{   280,      0,     35}, 0, {     0,      0}, {0x7b, 0x1e, 0x00, 0xff}}},
};

// 0x08003000
static const Vtx amp_seg8_vertex_08003000[] = {
    {{{   280,      0,    -35}, 0, {     0,      0}, {0x7b, 0x1e, 0x00, 0x00}}},
    {{{   240,    160,      0}, 0, {     0,      0}, {0x7b, 0x1e, 0x00, 0x00}}},
    {{{   280,      0,     35}, 0, {     0,      0}, {0x7b, 0x1e, 0x00, 0x00}}},
    {{{   280,      0,     35}, 0, {     0,      0}, {0x7b, 0xe2, 0x00, 0xff}}},
    {{{   240,   -160,      0}, 0, {     0,      0}, {0x7b, 0xe2, 0x00, 0xff}}},
    {{{   280,      0,    -35}, 0, {     0,      0}, {0x7b, 0xe2, 0x00, 0xff}}},
};

// 0x08003060
static const Vtx amp_seg8_vertex_08003060[] = {
    {{{  -184,    -54,    -54}, 0, {     0,      0}, {0x8b, 0xde, 0xde, 0x00}}},
    {{{  -184,    -76,      0}, 0, {     0,      0}, {0x8b, 0xd0, 0x00, 0x00}}},
    {{{  -200,      0,      0}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x00}}},
    {{{  -141,   -100,   -100}, 0, {     0,      0}, {0xa6, 0xc1, 0xc1, 0xff}}},
    {{{  -141,   -141,      0}, 0, {     0,      0}, {0xa6, 0xa7, 0x00, 0xff}}},
    {{{   -76,   -130,   -130}, 0, {     0,      0}, {0xd0, 0xae, 0xae, 0xff}}},
    {{{   -76,   -184,      0}, 0, {     0,      0}, {0xd0, 0x8b, 0x00, 0xff}}},
    {{{     0,   -141,   -141}, 0, {     0,      0}, {0x00, 0xa7, 0xa7, 0xff}}},
    {{{     0,   -200,      0}, 0, {     0,      0}, {0x00, 0x81, 0x00, 0xff}}},
    {{{    76,   -130,   -130}, 0, {     0,      0}, {0x30, 0xae, 0xae, 0xff}}},
    {{{    76,   -184,      0}, 0, {     0,      0}, {0x30, 0x8b, 0x00, 0xff}}},
    {{{   141,   -100,   -100}, 0, {     0,      0}, {0x5a, 0xc1, 0xc1, 0xff}}},
    {{{   141,   -141,      0}, 0, {     0,      0}, {0x5a, 0xa7, 0x00, 0xff}}},
    {{{   184,    -54,    -54}, 0, {     0,      0}, {0x75, 0xde, 0xde, 0xff}}},
    {{{   184,    -76,      0}, 0, {     0,      0}, {0x75, 0xd0, 0x00, 0xff}}},
    {{{   200,      0,      0}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
};

// 0x08003160
static const Vtx amp_seg8_vertex_08003160[] = {
    {{{  -184,      0,    -76}, 0, {     0,      0}, {0x8b, 0x00, 0xd0, 0xff}}},
    {{{  -184,    -54,    -54}, 0, {     0,      0}, {0x8b, 0xde, 0xde, 0x00}}},
    {{{  -200,      0,      0}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x00}}},
    {{{  -141,      0,   -141}, 0, {     0,      0}, {0xa6, 0x00, 0xa7, 0xff}}},
    {{{  -141,   -100,   -100}, 0, {     0,      0}, {0xa6, 0xc1, 0xc1, 0xff}}},
    {{{   -76,      0,   -184}, 0, {     0,      0}, {0xd0, 0x00, 0x8b, 0xff}}},
    {{{   -76,   -130,   -130}, 0, {     0,      0}, {0xd0, 0xae, 0xae, 0xff}}},
    {{{     0,      0,   -200}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{     0,   -141,   -141}, 0, {     0,      0}, {0x00, 0xa7, 0xa7, 0xff}}},
    {{{    76,      0,   -184}, 0, {     0,      0}, {0x30, 0x00, 0x8b, 0xff}}},
    {{{    76,   -130,   -130}, 0, {     0,      0}, {0x30, 0xae, 0xae, 0xff}}},
    {{{   141,      0,   -141}, 0, {     0,      0}, {0x5a, 0x00, 0xa7, 0xff}}},
    {{{   141,   -100,   -100}, 0, {     0,      0}, {0x5a, 0xc1, 0xc1, 0xff}}},
    {{{   184,      0,    -76}, 0, {     0,      0}, {0x75, 0x00, 0xd0, 0xff}}},
    {{{   184,    -54,    -54}, 0, {     0,      0}, {0x75, 0xde, 0xde, 0xff}}},
    {{{   200,      0,      0}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
};

// 0x08003260
static const Vtx amp_seg8_vertex_08003260[] = {
    {{{  -184,     54,    -54}, 0, {     0,      0}, {0x8b, 0x22, 0xde, 0xff}}},
    {{{  -184,      0,    -76}, 0, {     0,      0}, {0x8b, 0x00, 0xd0, 0x00}}},
    {{{  -200,      0,      0}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x00}}},
    {{{  -141,    100,   -100}, 0, {     0,      0}, {0xa6, 0x3f, 0xc1, 0xff}}},
    {{{  -141,      0,   -141}, 0, {     0,      0}, {0xa6, 0x00, 0xa7, 0xff}}},
    {{{   -76,    130,   -130}, 0, {     0,      0}, {0xd0, 0x52, 0xae, 0xff}}},
    {{{   -76,      0,   -184}, 0, {     0,      0}, {0xd0, 0x00, 0x8b, 0xff}}},
    {{{     0,    141,   -141}, 0, {     0,      0}, {0x00, 0x59, 0xa7, 0xff}}},
    {{{     0,      0,   -200}, 0, {     0,      0}, {0x00, 0x00, 0x81, 0xff}}},
    {{{    76,    130,   -130}, 0, {     0,      0}, {0x30, 0x52, 0xae, 0xff}}},
    {{{    76,      0,   -184}, 0, {     0,      0}, {0x30, 0x00, 0x8b, 0xff}}},
    {{{   141,    100,   -100}, 0, {     0,      0}, {0x5a, 0x3f, 0xc1, 0xff}}},
    {{{   141,      0,   -141}, 0, {     0,      0}, {0x5a, 0x00, 0xa7, 0xff}}},
    {{{   184,     54,    -54}, 0, {     0,      0}, {0x75, 0x22, 0xde, 0xff}}},
    {{{   184,      0,    -76}, 0, {     0,      0}, {0x75, 0x00, 0xd0, 0xff}}},
    {{{   200,      0,      0}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
};

// 0x08003360
static const Vtx amp_seg8_vertex_08003360[] = {
    {{{  -184,     76,      0}, 0, {     0,      0}, {0x8b, 0x30, 0x00, 0xff}}},
    {{{  -184,     54,    -54}, 0, {     0,      0}, {0x8b, 0x22, 0xde, 0x00}}},
    {{{  -200,      0,      0}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x00}}},
    {{{  -141,    141,      0}, 0, {     0,      0}, {0xa6, 0x59, 0x00, 0xff}}},
    {{{  -141,    100,   -100}, 0, {     0,      0}, {0xa6, 0x3f, 0xc1, 0xff}}},
    {{{   -76,    184,      0}, 0, {     0,      0}, {0xd0, 0x75, 0x00, 0xff}}},
    {{{   -76,    130,   -130}, 0, {     0,      0}, {0xd0, 0x52, 0xae, 0xff}}},
    {{{     0,    200,      0}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{     0,    141,   -141}, 0, {     0,      0}, {0x00, 0x59, 0xa7, 0xff}}},
    {{{    76,    184,      0}, 0, {     0,      0}, {0x30, 0x75, 0x00, 0xff}}},
    {{{    76,    130,   -130}, 0, {     0,      0}, {0x30, 0x52, 0xae, 0xff}}},
    {{{   141,    141,      0}, 0, {     0,      0}, {0x5a, 0x59, 0x00, 0xff}}},
    {{{   141,    100,   -100}, 0, {     0,      0}, {0x5a, 0x3f, 0xc1, 0xff}}},
    {{{   184,     76,      0}, 0, {     0,      0}, {0x75, 0x30, 0x00, 0xff}}},
    {{{   184,     54,    -54}, 0, {     0,      0}, {0x75, 0x22, 0xde, 0xff}}},
    {{{   200,      0,      0}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
};

// 0x08003460
static const Vtx amp_seg8_vertex_08003460[] = {
    {{{  -184,     54,     54}, 0, {     0,      0}, {0x8b, 0x22, 0x22, 0xff}}},
    {{{  -184,     76,      0}, 0, {     0,      0}, {0x8b, 0x30, 0x00, 0x00}}},
    {{{  -200,      0,      0}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x00}}},
    {{{  -141,    100,    100}, 0, {     0,      0}, {0xa6, 0x3f, 0x3f, 0xff}}},
    {{{  -141,    141,      0}, 0, {     0,      0}, {0xa6, 0x59, 0x00, 0xff}}},
    {{{   -76,    130,    130}, 0, {     0,      0}, {0xd0, 0x52, 0x52, 0xff}}},
    {{{   -76,    184,      0}, 0, {     0,      0}, {0xd0, 0x75, 0x00, 0xff}}},
    {{{     0,    141,    141}, 0, {     0,      0}, {0x00, 0x59, 0x59, 0xff}}},
    {{{     0,    200,      0}, 0, {     0,      0}, {0x00, 0x7f, 0x00, 0xff}}},
    {{{    76,    130,    130}, 0, {     0,      0}, {0x30, 0x52, 0x52, 0xff}}},
    {{{    76,    184,      0}, 0, {     0,      0}, {0x30, 0x75, 0x00, 0xff}}},
    {{{   141,    100,    100}, 0, {     0,      0}, {0x5a, 0x3f, 0x3f, 0xff}}},
    {{{   141,    141,      0}, 0, {     0,      0}, {0x5a, 0x59, 0x00, 0xff}}},
    {{{   184,     54,     54}, 0, {     0,      0}, {0x75, 0x22, 0x22, 0xff}}},
    {{{   184,     76,      0}, 0, {     0,      0}, {0x75, 0x30, 0x00, 0xff}}},
    {{{   200,      0,      0}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
};

// 0x08003560
static const Vtx amp_seg8_vertex_08003560[] = {
    {{{  -184,      0,     76}, 0, {     0,      0}, {0x8b, 0x00, 0x30, 0xff}}},
    {{{  -184,     54,     54}, 0, {     0,      0}, {0x8b, 0x22, 0x22, 0x00}}},
    {{{  -200,      0,      0}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x00}}},
    {{{  -141,      0,    141}, 0, {     0,      0}, {0xa6, 0x00, 0x59, 0xff}}},
    {{{  -141,    100,    100}, 0, {     0,      0}, {0xa6, 0x3f, 0x3f, 0xff}}},
    {{{   -76,      0,    184}, 0, {     0,      0}, {0xd0, 0x00, 0x75, 0xff}}},
    {{{   -76,    130,    130}, 0, {     0,      0}, {0xd0, 0x52, 0x52, 0xff}}},
    {{{     0,      0,    200}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{     0,    141,    141}, 0, {     0,      0}, {0x00, 0x59, 0x59, 0xff}}},
    {{{    76,      0,    184}, 0, {     0,      0}, {0x30, 0x00, 0x75, 0xff}}},
    {{{    76,    130,    130}, 0, {     0,      0}, {0x30, 0x52, 0x52, 0xff}}},
    {{{   141,      0,    141}, 0, {     0,      0}, {0x5a, 0x00, 0x59, 0xff}}},
    {{{   141,    100,    100}, 0, {     0,      0}, {0x5a, 0x3f, 0x3f, 0xff}}},
    {{{   184,      0,     76}, 0, {     0,      0}, {0x75, 0x00, 0x30, 0xff}}},
    {{{   184,     54,     54}, 0, {     0,      0}, {0x75, 0x22, 0x22, 0xff}}},
    {{{   200,      0,      0}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
};

// 0x08003660
static const Vtx amp_seg8_vertex_08003660[] = {
    {{{  -184,    -54,     54}, 0, {     0,      0}, {0x8b, 0xde, 0x22, 0xff}}},
    {{{  -184,      0,     76}, 0, {     0,      0}, {0x8b, 0x00, 0x30, 0x00}}},
    {{{  -200,      0,      0}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x00}}},
    {{{  -141,   -100,    100}, 0, {     0,      0}, {0xa6, 0xc1, 0x3f, 0xff}}},
    {{{  -141,      0,    141}, 0, {     0,      0}, {0xa6, 0x00, 0x59, 0xff}}},
    {{{   -76,   -130,    130}, 0, {     0,      0}, {0xd0, 0xae, 0x52, 0xff}}},
    {{{   -76,      0,    184}, 0, {     0,      0}, {0xd0, 0x00, 0x75, 0xff}}},
    {{{     0,   -141,    141}, 0, {     0,      0}, {0x00, 0xa7, 0x59, 0xff}}},
    {{{     0,      0,    200}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{    76,   -130,    130}, 0, {     0,      0}, {0x30, 0xae, 0x52, 0xff}}},
    {{{    76,      0,    184}, 0, {     0,      0}, {0x30, 0x00, 0x75, 0xff}}},
    {{{   141,   -100,    100}, 0, {     0,      0}, {0x5a, 0xc1, 0x3f, 0xff}}},
    {{{   141,      0,    141}, 0, {     0,      0}, {0x5a, 0x00, 0x59, 0xff}}},
    {{{   184,    -54,     54}, 0, {     0,      0}, {0x75, 0xde, 0x22, 0xff}}},
    {{{   184,      0,     76}, 0, {     0,      0}, {0x75, 0x00, 0x30, 0xff}}},
    {{{   200,      0,      0}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
};

// 0x08003760
static const Vtx amp_seg8_vertex_08003760[] = {
    {{{  -184,    -76,      0}, 0, {     0,      0}, {0x8b, 0xd0, 0x00, 0xff}}},
    {{{  -184,    -54,     54}, 0, {     0,      0}, {0x8b, 0xde, 0x22, 0x00}}},
    {{{  -200,      0,      0}, 0, {     0,      0}, {0x81, 0x00, 0x00, 0x00}}},
    {{{  -141,   -141,      0}, 0, {     0,      0}, {0xa6, 0xa7, 0x00, 0xff}}},
    {{{  -141,   -100,    100}, 0, {     0,      0}, {0xa6, 0xc1, 0x3f, 0xff}}},
    {{{   -76,   -184,      0}, 0, {     0,      0}, {0xd0, 0x8b, 0x00, 0xff}}},
    {{{   -76,   -130,    130}, 0, {     0,      0}, {0xd0, 0xae, 0x52, 0xff}}},
    {{{     0,   -200,      0}, 0, {     0,      0}, {0x00, 0x81, 0x00, 0xff}}},
    {{{     0,   -141,    141}, 0, {     0,      0}, {0x00, 0xa7, 0x59, 0xff}}},
    {{{    76,   -184,      0}, 0, {     0,      0}, {0x30, 0x8b, 0x00, 0xff}}},
    {{{    76,   -130,    130}, 0, {     0,      0}, {0x30, 0xae, 0x52, 0xff}}},
    {{{   141,   -141,      0}, 0, {     0,      0}, {0x5a, 0xa7, 0x00, 0xff}}},
    {{{   141,   -100,    100}, 0, {     0,      0}, {0x5a, 0xc1, 0x3f, 0xff}}},
    {{{   184,    -76,      0}, 0, {     0,      0}, {0x75, 0xd0, 0x00, 0xff}}},
    {{{   184,    -54,     54}, 0, {     0,      0}, {0x75, 0xde, 0x22, 0xff}}},
    {{{   200,      0,      0}, 0, {     0,      0}, {0x7f, 0x00, 0x00, 0xff}}},
};

// 0x08003860
static const Vtx amp_seg8_vertex_08003860[] = {
    {{{   -37,     90,    205}, 0, {     0,      0}, {0xcc, 0x00, 0x73, 0x00}}},
    {{{  -129,     90,    163}, 0, {     0,      0}, {0xcc, 0x00, 0x73, 0x00}}},
    {{{  -129,    -90,    163}, 0, {     0,      0}, {0xcc, 0x00, 0x73, 0x00}}},
    {{{   -37,    -90,    205}, 0, {     0,      0}, {0xcc, 0x00, 0x73, 0xff}}},
};

// 0x080038A0
static const Vtx amp_seg8_vertex_080038A0[] = {
    {{{   112,     -7,    182}, 0, {     0,      0}, {0x4c, 0xd8, 0x5c, 0x00}}},
    {{{    66,   -139,    162}, 0, {     0,      0}, {0x4c, 0xd8, 0x5c, 0x00}}},
    {{{   175,    -77,     98}, 0, {     0,      0}, {0x4c, 0xd8, 0x5c, 0x00}}},
};

// 0x080038D0
static const Vtx amp_seg8_vertex_080038D0[] = {
    {{{    63,     90,    198}, 0, {     0,      0}, {0x08, 0x00, 0x7e, 0x00}}},
    {{{   -35,     90,    205}, 0, {     0,      0}, {0x08, 0x00, 0x7e, 0x00}}},
    {{{   -35,    -90,    205}, 0, {     0,      0}, {0x08, 0x00, 0x7e, 0x00}}},
    {{{    63,    -90,    198}, 0, {     0,      0}, {0x08, 0x00, 0x7e, 0xff}}},
};

// 0x08003910 - 0x08003940
const Gfx amp_seg8_dl_08003910[] = {
    gsSPLight(&amp_seg8_lights_08002EC8.l, 1),
    gsSPLight(&amp_seg8_lights_08002EC8.a, 2),
    gsSPVertex(amp_seg8_vertex_08002EE0, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSPEndDisplayList(),
};

// 0x08003940 - 0x08003970
const Gfx amp_seg8_dl_08003940[] = {
    gsSPLight(&amp_seg8_lights_08002EC8.l, 1),
    gsSPLight(&amp_seg8_lights_08002EC8.a, 2),
    gsSPVertex(amp_seg8_vertex_08002F40, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSPEndDisplayList(),
};

// 0x08003970 - 0x080039A0
const Gfx amp_seg8_dl_08003970[] = {
    gsSPLight(&amp_seg8_lights_08002EC8.l, 1),
    gsSPLight(&amp_seg8_lights_08002EC8.a, 2),
    gsSPVertex(amp_seg8_vertex_08002FA0, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSPEndDisplayList(),
};

// 0x080039A0 - 0x080039D0
const Gfx amp_seg8_dl_080039A0[] = {
    gsSPLight(&amp_seg8_lights_08002EC8.l, 1),
    gsSPLight(&amp_seg8_lights_08002EC8.a, 2),
    gsSPVertex(amp_seg8_vertex_08003000, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSPEndDisplayList(),
};

// 0x080039D0 - 0x08003DA8
const Gfx amp_seg8_dl_080039D0[] = {
    gsSPLight((const u8*)amp_seg8_vertex_08002EE0 + 0x8, 1),
    gsSPLight((const u8*)amp_seg8_vertex_08002EE0, 2),
    gsSPVertex(amp_seg8_vertex_08003060, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  0,  3, 0x0),
    gsSP2Triangles( 1,  3,  4, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  8,  7,  9, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 10,  9, 11, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 12, 11, 13, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 14, 13, 15, 0x0),
    gsSPVertex(amp_seg8_vertex_08003160, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  0,  3, 0x0),
    gsSP2Triangles( 1,  3,  4, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  8,  7,  9, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 10,  9, 11, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 12, 11, 13, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 14, 13, 15, 0x0),
    gsSPVertex(amp_seg8_vertex_08003260, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  0,  3, 0x0),
    gsSP2Triangles( 1,  3,  4, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  8,  7,  9, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 10,  9, 11, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 12, 11, 13, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 14, 13, 15, 0x0),
    gsSPVertex(amp_seg8_vertex_08003360, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  0,  3, 0x0),
    gsSP2Triangles( 1,  3,  4, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  8,  7,  9, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 10,  9, 11, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 12, 11, 13, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 14, 13, 15, 0x0),
    gsSPVertex(amp_seg8_vertex_08003460, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  0,  3, 0x0),
    gsSP2Triangles( 1,  3,  4, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  8,  7,  9, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 10,  9, 11, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 12, 11, 13, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 14, 13, 15, 0x0),
    gsSPVertex(amp_seg8_vertex_08003560, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  0,  3, 0x0),
    gsSP2Triangles( 1,  3,  4, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  8,  7,  9, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 10,  9, 11, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 12, 11, 13, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 14, 13, 15, 0x0),
    gsSPVertex(amp_seg8_vertex_08003660, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  0,  3, 0x0),
    gsSP2Triangles( 1,  3,  4, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  8,  7,  9, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 10,  9, 11, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 12, 11, 13, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 14, 13, 15, 0x0),
    gsSPVertex(amp_seg8_vertex_08003760, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  0,  3, 0x0),
    gsSP2Triangles( 1,  3,  4, 0x0,  4,  3,  5, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  8,  7,  9, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 10,  9, 11, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 12, 11, 13, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 14, 13, 15, 0x0),
    gsSPEndDisplayList(),
};

// 0x08003DA8 - 0x08003DD8
const Gfx amp_seg8_dl_08003DA8[] = {
    gsSPLight((const u8*)amp_seg8_vertex_08002EE0 + 0x8, 1),
    gsSPLight((const u8*)amp_seg8_vertex_08002EE0, 2),
    gsSPVertex(amp_seg8_vertex_08003860, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x08003DD8 - 0x08003E00
const Gfx amp_seg8_dl_08003DD8[] = {
    gsSPLight((const u8*)amp_seg8_vertex_08002EE0 + 0x8, 1),
    gsSPLight((const u8*)amp_seg8_vertex_08002EE0, 2),
    gsSPVertex(amp_seg8_vertex_080038A0, 3, 0),
    gsSP1Triangle( 0,  1,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x08003E00 - 0x08003E30
const Gfx amp_seg8_dl_08003E00[] = {
    gsSPLight((const u8*)amp_seg8_vertex_08002EE0 + 0x8, 1),
    gsSPLight((const u8*)amp_seg8_vertex_08002EE0, 2),
    gsSPVertex(amp_seg8_vertex_080038D0, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};
