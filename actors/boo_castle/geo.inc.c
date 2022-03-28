const GeoLayout boo_castle_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 70),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 26214),
			GEO_OPEN_NODE(),
				GEO_ASM(0, geo_update_layer_transparency),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_TRANSPARENT, 0, 0, 0, boo_castle_000_billboard_mesh),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, boo_castle_000_displaylist_mesh),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, boo_castle_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, boo_castle_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
