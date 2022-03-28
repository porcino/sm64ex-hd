Lights1 ddd_seg7_dl_07008F80_arrow_mat_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx ddd_seg7_dl_07008F80_paint_ddd_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 ddd_seg7_dl_07008F80_paint_ddd_rgba16[] = {
	#include "levels/ddd/paint_ddd.rgba16.inc.c"
};

Vtx ddd_seg7_dl_07008F80_sm64_mesh_mesh_vtx_0[35] = {
	{{{-869, -2746, -255},0, {19516, 32752},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-869, -2746, 256},0, {9023, 25278},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-511, -2746, 0},0, {19516, 21670},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-5068, -2149, -255},0, {6372, 6985},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5068, -2149, 256},0, {6372, 19869},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5068, -1791, 0},0, {-16, 13414},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-2405, -2746, -255},0, {19516, 21670},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2405, -2746, 256},0, {9023, 14196},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2047, -2746, 0},0, {19516, 10589},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2203, 244, 0},0, {-16, 26323},{0xA7, 0xA6, 0x0, 0xFF}}},
	{{{-2457, 497, 256},0, {9023, 19869},{0xA7, 0xA6, 0x0, 0xFF}}},
	{{{-2457, 497, -255},0, {9023, 32752},{0xA7, 0xA6, 0x0, 0xFF}}},
	{{{-5068, -4197, -255},0, {25904, 19869},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5068, -4197, 256},0, {25904, 32752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5068, -3839, 0},0, {19516, 26298},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-1177, -2746, -153},0, {19516, 12103},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-869, -2746, 51},0, {24659, 19869},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-869, -2746, -50},0, {22113, 19869},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1177, -2746, 154},0, {27256, 12103},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-5068, -2457, -153},0, {32752, 12128},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5068, -2149, 51},0, {27256, 17272},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5068, -2149, -50},0, {27256, 14725},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5068, -2457, 154},0, {32752, 19869},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-2713, -2746, -153},0, {19516, 4338},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2713, -2746, 154},0, {27256, 4338},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2405, -2746, 51},0, {24659, 12103},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2405, -2746, -50},0, {22113, 12103},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2457, 497, -50},0, {11619, 2834},{0xA6, 0xA7, 0x0, 0xFF}}},
	{{{-2674, 715, 154},0, {16763, 10589},{0xA6, 0xA7, 0x0, 0xFF}}},
	{{{-2674, 715, -153},0, {9023, 10589},{0xA6, 0xA7, 0x0, 0xFF}}},
	{{{-2457, 497, 51},0, {14166, 2834},{0xA6, 0xA7, 0x0, 0xFF}}},
	{{{-5068, -4505, -153},0, {31400, 25012},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5068, -4505, 154},0, {31400, 32752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5068, -4197, 51},0, {25904, 30155},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-5068, -4197, -50},0, {25904, 27609},{0x81, 0x0, 0x0, 0xFF}}},
};

Gfx ddd_seg7_dl_07008F80_sm64_mesh_mesh_tri_0[] = {
	gsSPVertex(ddd_seg7_dl_07008F80_sm64_mesh_mesh_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(ddd_seg7_dl_07008F80_sm64_mesh_mesh_vtx_0 + 15, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(ddd_seg7_dl_07008F80_sm64_mesh_mesh_vtx_0 + 31, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_ddd_seg7_dl_07008F80_arrow_mat[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, PRIMITIVE, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, PRIMITIVE, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1024, ddd_seg7_dl_07008F80_paint_ddd_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 256, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 4092, 4092),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 256, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPSetTileSize(0, 0, 0, 4092, 4092),
	gsDPSetPrimColor(0, 0, 70, 43, 135, 255),
	gsSPSetLights1(ddd_seg7_dl_07008F80_arrow_mat_lights),
	gsSPEndDisplayList(),
};


Gfx ddd_seg7_dl_07008F80[] = {
	gsSPDisplayList(mat_ddd_seg7_dl_07008F80_arrow_mat),
	gsSPDisplayList(ddd_seg7_dl_07008F80_sm64_mesh_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};



