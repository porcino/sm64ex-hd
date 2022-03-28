const GeoLayout bowser_bomb_geo[] = {
	GEO_CULLING_RADIUS(1000),
	GEO_OPEN_NODE(),
		GEO_SCALE(LAYER_FORCE, 196608),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, bomb_000_displaylist_mesh),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bomb_000_displaylist_001_mesh),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
