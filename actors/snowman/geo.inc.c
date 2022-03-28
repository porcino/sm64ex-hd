// 0x0C00021C
const GeoLayout mr_blizzard_hidden_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SCALE(LAYER_FORCE, 16384),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, snowman_000_displaylist_mesh),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 356, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_ALPHA, snowman_000_displaylist_001_mesh),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_ALPHA, 356, 0, 0, NULL),
					GEO_ANIMATED_PART(LAYER_ALPHA, 356, 0, 0, NULL),
					GEO_SWITCH_CASE(2, geo_switch_anim_state),
					GEO_OPEN_NODE(),
					   GEO_NODE_START(),
					   GEO_NODE_START(),
					   GEO_OPEN_NODE(),
						  GEO_SCALE(0x00, 65536),
						  GEO_OPEN_NODE(),
							 GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 490, 14, 43, 305, 0, 248, mario_cap_seg3_dl_03022F48),
						  GEO_CLOSE_NODE(),
					   GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 45, 0, -185, NULL),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, snowman_000_offset_003_mesh),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 104, 2, 0, snowman_000_offset_004_mesh),
							GEO_ASM(0, geo_update_projectile_pos_from_parent),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 356, 0, 0, NULL),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, snowman_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, snowman_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};


// 0x0C000348
const GeoLayout mr_blizzard_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xB4, 160),
   GEO_OPEN_NODE(),
      GEO_BRANCH_AND_LINK(mr_blizzard_hidden_geo),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
