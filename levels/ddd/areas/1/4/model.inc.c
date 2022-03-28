Lights1 ddd_seg7_dl_07005F78_arrow_mat_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx ddd_seg7_dl_07005F78_paint_ddd_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 ddd_seg7_dl_07005F78_paint_ddd_rgba16[] = {
	#include "levels/ddd/paint_ddd.rgba16.inc.c"
};

Vtx ddd_seg7_dl_07005F78_sm64_mesh_mesh_vtx_0[35] = {
	{{{3123, -4197, -255},0, {26744, 8003},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3123, -4197, 256},0, {26744, 21308},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3123, -3839, 0},0, {20147, 14643},{0x81, 0x0, 0x0, 0xFF}}},
	{{{5988, 244, 0},0, {10826, 32752},{0xA7, 0xA6, 0x0, 0xFF}}},
	{{{5734, 497, 256},0, {-16, 29009},{0xA7, 0xA6, 0x0, 0xFF}}},
	{{{5734, 497, -255},0, {10826, 21297},{0xA7, 0xA6, 0x0, 0xFF}}},
	{{{5786, -2746, -255},0, {20147, 8003},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{5786, -2746, 256},0, {20147, 21308},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{6144, -2746, 0},0, {10826, 14643},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3123, -2149, -255},0, {6581, 7993},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3123, -2149, 256},0, {6581, 21297},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3123, -1791, 0},0, {-16, 14632},{0x81, 0x0, 0x0, 0xFF}}},
	{{{7322, -2746, -255},0, {21663, 32752},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{7322, -2746, 256},0, {10826, 25033},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{7680, -2746, 0},0, {21663, 21308},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3123, -4505, -153},0, {32419, 13315},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3123, -4197, 51},0, {26744, 18626},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3123, -4197, -50},0, {26744, 15997},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3123, -4505, 154},0, {32419, 21308},{0x81, 0x0, 0x0, 0xFF}}},
	{{{5734, 497, -50},0, {24131, 8003},{0xA6, 0xA7, 0x0, 0xFF}}},
	{{{5734, 497, 51},0, {21501, 8003},{0xA6, 0xA7, 0x0, 0xFF}}},
	{{{5517, 715, 154},0, {18819, -5},{0xA6, 0xA7, 0x0, 0xFF}}},
	{{{5517, 715, -153},0, {26812, -5},{0xA6, 0xA7, 0x0, 0xFF}}},
	{{{5478, -2746, -153},0, {21663, 24733},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{5786, -2746, 51},0, {26974, 32752},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{5786, -2746, -50},0, {24344, 32752},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{5478, -2746, 154},0, {29656, 24733},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3123, -2457, -153},0, {32488, 10},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3123, -2457, 154},0, {32488, 8003},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3123, -2149, 51},0, {26812, 5322},{0x81, 0x0, 0x0, 0xFF}}},
	{{{3123, -2149, -50},0, {26812, 2692},{0x81, 0x0, 0x0, 0xFF}}},
	{{{7014, -2746, -153},0, {10826, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{7014, -2746, 154},0, {18819, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{7322, -2746, 51},0, {16137, 8003},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{7322, -2746, -50},0, {13508, 8003},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx ddd_seg7_dl_07005F78_sm64_mesh_mesh_tri_0[] = {
	gsSPVertex(ddd_seg7_dl_07005F78_sm64_mesh_mesh_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(ddd_seg7_dl_07005F78_sm64_mesh_mesh_vtx_0 + 15, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(ddd_seg7_dl_07005F78_sm64_mesh_mesh_vtx_0 + 31, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_ddd_seg7_dl_07005F78_arrow_mat[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, PRIMITIVE, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, PRIMITIVE, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1024, ddd_seg7_dl_07005F78_paint_ddd_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 256, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 4092, 4092),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 256, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPSetTileSize(0, 0, 0, 4092, 4092),
	gsDPSetPrimColor(0, 0, 70, 43, 135, 255),
	gsSPSetLights1(ddd_seg7_dl_07005F78_arrow_mat_lights),
	gsSPEndDisplayList(),
};


Gfx ddd_seg7_dl_07005F78[] = {
	gsSPDisplayList(mat_ddd_seg7_dl_07005F78_arrow_mat),
	gsSPDisplayList(ddd_seg7_dl_07005F78_sm64_mesh_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};



