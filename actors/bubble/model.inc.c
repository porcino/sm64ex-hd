// Bubble

// 0x0401CD20
static const Vtx bubble_seg4_vertex_0401CD20[] = {
    {{{   -16,      0,      0}, 0, {     0,    992}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    16,      0,      0}, 0, {   992,    992}, {0xff, 0xff, 0xff, 0xff}}},
    {{{    16,     32,      0}, 0, {   992,      0}, {0xff, 0xff, 0xff, 0xff}}},
    {{{   -16,     32,      0}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xff}}},
};

// 0x0401CD60
ALIGNED8 static const u8 bubble_seg4_texture_0401CD60[] = {
#include "actors/bubble/bubble.rgba16.inc.c"
};

// 0x0401D560
ALIGNED8 static const u8 bubble_seg4_texture_0401D560[] = {
#include "actors/bubble/mr_i_bubble.rgba16.inc.c"
};

// 0x0401DD60 - 0x0401DDE0
Lights1 bubble_mat_bubble_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx bubble_bubble_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 bubble_bubble_rgba16[] = {
	#include "actors/bubble/bubble.rgba16.inc.c"
};

Vtx bubble_000_displaylist_mesh_vtx_0[4] = {
	{{{-16, 0, 0},0, {-16, 7920},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{16, 0, 0},0, {7920, 7920},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{16, 32, 0},0, {7920, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-16, 32, 0},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx bubble_000_displaylist_mesh_tri_0[] = {
	gsSPVertex(bubble_000_displaylist_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_bubble_mat_bubble_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 256, bubble_bubble_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 8, 0, G_TX_WRAP | G_TX_NOMIRROR, 8, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 1020, 1020),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 8, 0, G_TX_WRAP | G_TX_NOMIRROR, 8, 0),
	gsDPSetTileSize(0, 0, 0, 1020, 1020),
	gsSPSetLights1(bubble_mat_bubble_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx bubble_seg4_dl_0401DD60[] = {
	gsSPDisplayList(mat_bubble_mat_bubble_f3d),
	gsSPDisplayList(bubble_000_displaylist_mesh_tri_0),
	gsSPEndDisplayList(),
};



Gfx bubble_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};


// 0x0401DDE0 - 0x0401DE60
const Gfx bubble_seg4_dl_0401DDE0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bubble_seg4_texture_0401D560, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_CLAMP, G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(bubble_seg4_vertex_0401CD20, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};
