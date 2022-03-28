const GeoLayout ssl_geo_000734[] = {
	GEO_CULLING_RADIUS(700),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 550),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, grindel_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_DISPLAY_LIST(LAYER_OPAQUE, grindel_material_revert_render_settings),
	GEO_END(),
};
