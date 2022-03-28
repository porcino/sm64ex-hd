Lights1 wf_seg7_dl_07005690_arrow_mat_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx wf_seg7_dl_07005690_paint_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 wf_seg7_dl_07005690_paint_rgba16[] = {
	#include "levels/wf/paint.rgba16.inc.c"
};

Vtx wf_seg7_dl_07005690_sm64_mesh_mesh_vtx_0[15] = {
	{{{1270, 2944, -772},0, {44221, 42220},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{1343, 2739, -844},0, {29647, 29805},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{1198, 2739, -699},0, {44221, 23063},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{3594, 1459, 870},0, {10227, 7089},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{3594, 1587, 1126},0, {31939, -3767},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{3594, 1331, 1126},0, {31939, 17945},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{3594, 1459, -511},0, {29647, 42220},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{3594, 1587, -255},0, {10227, 27655},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{3594, 1331, -255},0, {29647, 17945},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-1033, 2944, 512},0, {7617, -2313},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-1033, 2816, 256},0, {7617, 20501},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-1033, 2688, 512},0, {-11485, 8008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-824, 2944, -1017},0, {10227, 20501},{0x8A, 0x0, 0xD0, 0xFF}}},
	{{{-727, 2816, -1254},0, {-629, 42220},{0x8A, 0x0, 0xD0, 0xFF}}},
	{{{-824, 2688, -1017},0, {-11485, 20501},{0x8A, 0x0, 0xD0, 0xFF}}},
};

Gfx wf_seg7_dl_07005690_sm64_mesh_mesh_tri_0[] = {
	gsSPVertex(wf_seg7_dl_07005690_sm64_mesh_mesh_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPEndDisplayList(),
};


Gfx mat_wf_seg7_dl_07005690_arrow_mat[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1024, wf_seg7_dl_07005690_paint_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 256, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 4092, 4092),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 256, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPSetTileSize(0, 0, 0, 4092, 4092),
	gsSPSetLights1(wf_seg7_dl_07005690_arrow_mat_lights),
	gsSPEndDisplayList(),
};


Gfx wf_seg7_dl_07005690[] = {
	gsSPDisplayList(mat_wf_seg7_dl_07005690_arrow_mat),
	gsSPDisplayList(wf_seg7_dl_07005690_sm64_mesh_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};



