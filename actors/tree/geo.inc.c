// 0x16000FE8
const GeoLayout bubbly_tree_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(800),
		GEO_RENDER_RANGE(-2048, 5000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bubbly_tree_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_RENDER_RANGE(5000, 32767),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bubbly_tree_low_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bubbly_tree_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

// 0x16001000
const GeoLayout spiky_tree_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(800),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, spiky_tree_geo_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, spiky_tree_geo_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

// 0x16001018
const GeoLayout snow_tree_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(800),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, snow_tree_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, snow_tree_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

// 0x16001030
const GeoLayout spiky_tree1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(800),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, spiky_tree_geo_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, spiky_tree_geo_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

// 0x16001048
const GeoLayout palm_tree_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(800),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, palm_tree_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, palm_tree_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
