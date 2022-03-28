const GeoLayout purple_switch_base_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, purple_switch_base_Odyssey_Switch_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, purple_switch_base_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
