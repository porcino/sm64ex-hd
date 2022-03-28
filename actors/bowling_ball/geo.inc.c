// This is a weird file where it cross-references another actor.
// Most likely, it was a compile time optimization due to the
// exact same DL being referenced.

// 0x0F000640
const GeoLayout bowling_ball_geo[] = {
	GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xC8, 280),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 280),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 170393),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, bowling_ball_000_displaylist_mesh),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bowling_ball_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

// 0x0F00066C
const GeoLayout bowling_ball_track_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 280),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 170393),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, bowling_ball_000_displaylist_mesh),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, bowling_ball_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout spitter_ball_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 280),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 170393),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, spitter_ball_000_displaylist_mesh),
				GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_TRANSPARENT, 0, 0, 0, spitter_ball_000_displaylist_001_mesh),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};