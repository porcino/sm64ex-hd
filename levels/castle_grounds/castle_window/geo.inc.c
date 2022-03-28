const GeoLayout castle_window_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_window_Castle__Stone00_AT_001_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_window_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout castle_window_dark_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
	GEO_SCALE(0x00, 73728),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_window_dark_Castle__Stone00_AT_001_mesh),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_window_material_revert_render_settings),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
