Lights1 wf_seg7_dl_07005538_arrow_mat_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx wf_seg7_dl_07005538_paint_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 wf_seg7_dl_07005538_paint_rgba16[] = {
	#include "levels/wf/paint.rgba16.inc.c"
};

Vtx wf_seg7_dl_07005538_sm64_mesh_mesh_vtx_0[27] = {
	{{{3840, 1075, -1458},0, {26422, 45887},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3661, 1075, -1100},0, {7603, 31805},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{4019, 1075, -1100},0, {26422, 22383},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2278, 730, 1953},0, {39237, 45887},{0x0, 0x7B, 0xDF, 0xFF}}},
	{{{-2163, 641, 1617},0, {26422, 29765},{0x0, 0x7B, 0xDF, 0xFF}}},
	{{{-2394, 641, 1617},0, {39237, 25272},{0x0, 0x7B, 0xDF, 0xFF}}},
	{{{3392, 1959, 979},0, {21968, -289},{0x0, 0x78, 0x2A, 0xFF}}},
	{{{3277, 1832, 1341},0, {21968, 22383},{0x0, 0x78, 0x2A, 0xFF}}},
	{{{3533, 1832, 1341},0, {7603, 17895},{0x0, 0x78, 0x2A, 0xFF}}},
	{{{3277, 1364, 2669},0, {-13414, 3198},{0x0, 0x78, 0x2B, 0xFF}}},
	{{{3533, 1364, 2669},0, {1635, 3198},{0x0, 0x78, 0x2B, 0xFF}}},
	{{{3392, 1492, 2307},0, {-6654, 24841},{0x0, 0x78, 0x2B, 0xFF}}},
	{{{3840, 1075, -2482},0, {-13414, 35364},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3661, 1075, -2124},0, {7603, 24841},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{4019, 1075, -2124},0, {7603, 45887},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3533, 2304, -101},0, {37018, 4300},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3533, 2304, -409},0, {37018, 22383},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3277, 2304, -255},0, {21968, 13342},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2277, 1024, 3379},0, {35425, -12507},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2149, 1024, 3123},0, {35425, 4300},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2405, 1024, 3123},0, {21968, -2437},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1279, 1024, 3482},0, {35425, -3827},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1279, 1024, 3686},0, {46150, -9157},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1074, 1024, 3584},0, {46150, 4300},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{3277, 1165, -2940},0, {-680, -10922},{0x0, 0x69, 0xB9, 0xFF}}},
	{{{3405, 1309, -2729},0, {-680, 3198},{0x0, 0x69, 0xB9, 0xFF}}},
	{{{3533, 1165, -2940},0, {-13414, -2901},{0x0, 0x69, 0xB9, 0xFF}}},
};

Gfx wf_seg7_dl_07005538_sm64_mesh_mesh_tri_0[] = {
	gsSPVertex(wf_seg7_dl_07005538_sm64_mesh_mesh_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(wf_seg7_dl_07005538_sm64_mesh_mesh_vtx_0 + 15, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSPEndDisplayList(),
};


Gfx mat_wf_seg7_dl_07005538_arrow_mat[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1024, wf_seg7_dl_07005538_paint_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 256, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 4092, 4092),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 256, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPSetTileSize(0, 0, 0, 4092, 4092),
	gsSPSetLights1(wf_seg7_dl_07005538_arrow_mat_lights),
	gsSPEndDisplayList(),
};


Gfx wf_seg7_dl_07005538[] = {
	gsSPDisplayList(mat_wf_seg7_dl_07005538_arrow_mat),
	gsSPDisplayList(wf_seg7_dl_07005538_sm64_mesh_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};



