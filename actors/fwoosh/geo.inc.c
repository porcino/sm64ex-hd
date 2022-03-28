const GeoLayout fwoosh_geo[] = {
	GEO_CULLING_RADIUS(200),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, fwoosh_000_displaylist_mesh),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
