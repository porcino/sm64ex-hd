// 0x0D000450
const GeoLayout  treasure_chest_base_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_NODE_START(),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, treasure_chest_base_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, treasure_chest_base_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

// 0x0D000468
const GeoLayout treasure_chest_lid_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_NODE_START(),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, treasure_chest_lid_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, treasure_chest_lid_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
