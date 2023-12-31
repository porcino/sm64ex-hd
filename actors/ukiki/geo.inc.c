const GeoLayout ukiki_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 80),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_mesh),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 91, 10, NULL),
					GEO_OPEN_NODE(),
						GEO_SWITCH_CASE(4, geo_switch_anim_state),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_002_mesh),
							GEO_CLOSE_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_002_mesh),
							GEO_CLOSE_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_002_mesh),
								GEO_OPEN_NODE(),
									GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 113, 42, 0, -90, -90, 0, mario_cap_seg3_dl_03022F48),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_002_mesh),
								GEO_OPEN_NODE(),
									GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 113, 42, 0, -90, -90, 0, mario_cap_seg3_dl_03022F48),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_003_skinned),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 71, 69, 4, NULL),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_003_mesh),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_004_skinned),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 64, -6, 0, ukiki_000_offset_004_mesh),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_005_skinned),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 64, 0, 0, ukiki_000_offset_005_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_006_skinned),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -71, 68, 4, NULL),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_006_mesh),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_007_skinned),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 64, -6, 0, ukiki_000_offset_007_mesh),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_008_skinned),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 64, 0, 0, ukiki_000_offset_008_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_009_skinned),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 43, -22, -1, NULL),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_009_mesh),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_010_skinned),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 46, 0, 0, ukiki_000_offset_010_mesh),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_011_skinned),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 36, 0, 0, ukiki_000_offset_011_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_012_skinned),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -43, -22, -1, NULL),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_012_mesh),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_013_skinned),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 46, 0, 0, ukiki_000_offset_013_mesh),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_014_skinned),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 36, 0, 0, ukiki_000_offset_014_mesh),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_015_skinned),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -38, -53, NULL),
					GEO_OPEN_NODE(),
						GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 0, 0, 0, 90, 0),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ukiki_000_offset_015_mesh),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_016_skinned),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 70, 0, 0, ukiki_000_offset_016_mesh),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_000_offset_017_skinned),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 66, 0, 0, ukiki_000_offset_017_mesh),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ukiki_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
