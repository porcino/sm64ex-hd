Lights1 inside_castle_seg7_dl_07066E90_arrow_mat_lights = gdSPDefLights1(
	0x6A, 0x6E, 0x55,
	0xD5, 0xDC, 0xAA, 0x28, 0x28, 0x28);

Gfx inside_castle_seg7_dl_07066E90_TapeCyellow_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 inside_castle_seg7_dl_07066E90_TapeCyellow_rgba16[] = {
	#include "levels/castle_inside/TapeCyellow.rgba16.inc.c"
};

Vtx inside_castle_seg7_dl_07066E90_sm64_mesh_mesh_vtx_0[12] = {
	{{{3731, -2421, -665},0, {11868, -16},{0xB3, 0x65, 0x0, 0xFF}}},
	{{{3731, -2421, -357},0, {11868, 17855},{0xB3, 0x65, 0x0, 0xFF}}},
	{{{3894, -2297, -511},0, {-16, 8920},{0xB3, 0x65, 0x0, 0xFF}}},
	{{{4179, -2079, -511},0, {14283, 17855},{0xB3, 0x65, 0x0, 0xFF}}},
	{{{4016, -2204, -665},0, {14283, 32752},{0xB3, 0x65, 0x0, 0xFF}}},
	{{{4016, -2204, -357},0, {-16, 22032},{0xB3, 0x65, 0x0, 0xFF}}},
	{{{2011, -2405, -357},0, {14283, 10845},{0x5A, 0x5A, 0x0, 0xFF}}},
	{{{2011, -2405, -665},0, {28538, 66},{0x5A, 0x5A, 0x0, 0xFF}}},
	{{{1867, -2261, -511},0, {28538, 14881},{0x5A, 0x5A, 0x0, 0xFF}}},
	{{{1722, -2116, -357},0, {26182, 14881},{0x5A, 0x5A, 0x0, 0xFF}}},
	{{{1722, -2116, -665},0, {26182, 32752},{0x5A, 0x5A, 0x0, 0xFF}}},
	{{{1577, -1971, -511},0, {14283, 23816},{0x5A, 0x5A, 0x0, 0xFF}}},
};

Gfx inside_castle_seg7_dl_07066E90_sm64_mesh_mesh_tri_0[] = {
	gsSPVertex(inside_castle_seg7_dl_07066E90_sm64_mesh_mesh_vtx_0 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSPEndDisplayList(),
};


Gfx mat_inside_castle_seg7_dl_07066E90_arrow_mat[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1024, inside_castle_seg7_dl_07066E90_TapeCyellow_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 256, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 4092, 4092),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 256, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPSetTileSize(0, 0, 0, 4092, 4092),
	gsDPSetEnvColor(187, 187, 187, 114),
	gsSPSetLights1(inside_castle_seg7_dl_07066E90_arrow_mat_lights),
	gsSPEndDisplayList(),
};


Gfx inside_castle_seg7_dl_07066E90[] = {
	gsSPDisplayList(mat_inside_castle_seg7_dl_07066E90_arrow_mat),
	gsSPDisplayList(inside_castle_seg7_dl_07066E90_sm64_mesh_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};



