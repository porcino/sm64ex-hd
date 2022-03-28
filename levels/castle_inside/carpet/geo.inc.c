#include "src/game/envfx_snow.h"

const GeoLayout carpet_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, carpet_SouvenirPeach1C__CarpetSun00_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, carpet_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
