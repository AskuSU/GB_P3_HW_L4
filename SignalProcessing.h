#pragma once
#include <algorithm>
#define _USE_MATH_DEFINES
#include <math.h>

void generateAnalogSignal(std::vector<double_t>& vec)
{
	std::generate(vec.begin(), vec.end(), [n = 0]() mutable
		{
			return std::sin(n++ * 2 * M_PI / 100) * 10;
		});
}