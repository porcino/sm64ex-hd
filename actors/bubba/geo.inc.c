const GeoLayout bubba_armature_001_switch_option[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bubba_001_switch_option_001_displaylist_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bubba_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_NODE_START(),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(2, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, bubba_000_displaylist_mesh),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, bubba_armature_001_switch_option),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bubba_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
