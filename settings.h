#pragma once

namespace settings {
	namespace bones
	{
		bool head = true;
		bool neck = false;
		bool torso = false;
		bool pelvis = false;
	}

	namespace aimbot {

		bool enable = false;
		bool bulletp = false;
		bool memory = false;
		bool mouse = false;
		bool silent = false;
		bool sticky_silent = false;
		bool interpolate = false;
		bool constant = false;
		bool show_fov = false;
		bool visible_only = false;
		bool target_line = false;
		float mouse_speed = 5;
		float interpolate_speed = 5;
		float field_of_view = 20;
	}

	namespace player {
		bool enable = false;
		bool skeleton = false;
		bool box = true;
		bool normal_box = false;
		bool cornered_box = false;
		bool snapline = false;
		bool eyes = false;
		bool player_name = false;
		bool active_weapon = false;
		bool display_distance = false;
		float max_distance = 350;
	}

	namespace containers {
		bool enable = false;
		bool ignore_opened = false;
		bool display_distance = false;
		bool lines = false;
		bool chest = false;
		bool ammo_box = false;
		bool cooler_and_food = false;
		bool safe = false;
		bool others = false;
		float max_distance = 450;
		float line_offset = 20;
	}

	namespace pickups {
		bool enable = false;
		bool display_distance = false;
		bool lines = false;
		bool common = false;
		bool uncommon = false;
		bool rare = false;
		bool epic = false;
		bool legendary = false;
		bool mythic = false;
		float max_distance = 450;
		float line_offset = 20;
	}

	namespace weakspot {
		bool enable = false;
		bool weakspot_aimbot = false;
		bool silent = false;
		bool interpolate = false;
		bool constant = false;
		bool target_line = false;
		float interpolate_speed = 1;
	}

	namespace radar {
		bool enable = false;
		bool show_line_of_sight = false;
		bool useless_circle = false;
		bool players = false;
		bool containers = false;
		bool pickups = false;
		bool vehicles = false;
		float range = 10;
		float positionx = 50;
		float positiony = 50;
		float size = 200;
	}

	namespace exploits {
		bool enable_hooks = false;
		bool enable_patches = false;
		bool spinbot = false;
		bool fov_changer = false;
		float fov_value = 110;
	}

	namespace miscellaneous {
		bool vehiclefly = false;
		float vehicle_flight_speed = 50;
		bool fovchanger = false;
		float fovslider = 105;
	}
	
	namespace rifts {
		bool enable = false;
		bool display_distance = false;
		float max_distance = 150;
	}

	namespace miscactors {
		bool enable = false;
		bool display_distance = false;
		float max_distance = 150;
		bool vehicles = false;
		bool rifts = false;
		bool flags = false;
		bool traps = false;

	}
	namespace vehicles {
		bool enable = false;
		bool display_distance = false;
		float max_distance = 150;
	}

	namespace style {
		bool text_outlined = false;
		bool performance = false;
	}
}