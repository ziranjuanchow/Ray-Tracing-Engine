// File: surface.hh

// Author: Yuxin Wu <ppwwyyxxc@gmail.com>

#pragma once

#include "color.hh"

class Surface {
	// http://en.wikipedia.org/wiki/Phong_reflection_model
	public:
		real_t transparency = 0,
			   shininess = 0,
			   ambient = 0,
			   specular = 0;
		Color diffuse = Color::BLACK,
			  emission = Color::BLACK;

		Surface(){}

		Surface(real_t _transparency, real_t _shininess,
				real_t _ambient, const Color& _diffuse, real_t _specular, const Color& _emission = Color::NONE):
			transparency(_transparency), shininess(_shininess),
			ambient(_ambient), specular(_specular), diffuse(_diffuse),
			emission(_emission) { }

		static const Surface BLACK, WHITE, WHITE_REFL, BLACK_REFL, BLUE, CYAN,
					 GOOD, GOOD_REFL, GLASS, MIRROR, GREEN;
};
