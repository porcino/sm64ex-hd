Lights1 wdw_seg7_dl_07012908_arrow_mat_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx wdw_seg7_dl_07012908_paint_y_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 wdw_seg7_dl_07012908_paint_y_rgba16[] = {
	#include "levels/wdw/paint_y.rgba16.inc.c"
};

Vtx wdw_seg7_dl_07012908_sm64_mesh_mesh_vtx_0[14] = {
	{{{-895, -1496, -3387},0, {27291, 22740},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-895, -1496, -3515},0, {32752, 24560},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1151, -1496, -3323},0, {20919, 32752},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-895, -1496, -3259},0, {21829, 20919},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-895, -1496, -3131},0, {16368, 19099},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-511, -1496, -3259},0, {27291, 4535},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-511, -1496, -3387},0, {32752, 6356},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1536, -1496, -3131},0, {16368, 12727},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1536, -1496, -3259},0, {10907, 14548},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1280, -1496, -3323},0, {4535, 4535},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1536, -1496, -3387},0, {5445, 16368},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1920, -1496, -3259},0, {16368, 30932},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1920, -1496, -3387},0, {10907, 32752},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1536, -1496, -3515},0, {-16, 18188},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx wdw_seg7_dl_07012908_sm64_mesh_mesh_tri_0[] = {
	gsSPVertex(wdw_seg7_dl_07012908_sm64_mesh_mesh_vtx_0 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSP1Triangle(5, 6, 0, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(8, 11, 10, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(10, 13, 9, 0),
	gsSPEndDisplayList(),
};


Gfx mat_wdw_seg7_dl_07012908_arrow_mat[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1024, wdw_seg7_dl_07012908_paint_y_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 256, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 4092, 4092),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 256, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPSetTileSize(0, 0, 0, 4092, 4092),
	gsSPSetLights1(wdw_seg7_dl_07012908_arrow_mat_lights),
	gsSPEndDisplayList(),
};


Gfx wdw_seg7_dl_07012908[] = {
	gsSPDisplayList(mat_wdw_seg7_dl_07012908_arrow_mat),
	gsSPDisplayList(wdw_seg7_dl_07012908_sm64_mesh_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};



