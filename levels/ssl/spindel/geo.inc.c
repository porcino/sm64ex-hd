const GeoLayout ssl_geo_000764[] = {
	GEO_CULLING_RADIUS(550),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, spindel_000_displaylist_mesh),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_DISPLAY_LIST(LAYER_OPAQUE, spindel_material_revert_render_settings),
	GEO_END(),
};
