#pragma once
#include <algorithm>
#define _USE_MATH_DEFINES
#include <math.h>
#include <numeric>

void generateAnalogSignal(std::vector<double_t>& vec)
{
	std::generate(vec.begin(), vec.end(), [n = 0]() mutable
		{
			return std::sin(n++ * (2 * M_PI / 100)) * 10;
		});
}

double_t calculateSignalConversionError(std::vector<double_t>& aVec, std::vector<int64_t>& dVec)
{
	return std::inner_product(aVec.begin(), aVec.end(), dVec.begin(), 0.0,
		std::plus<double_t>{}, 
		[](double_t a, int64_t b) 
		{
			return std::pow(a - b, 2);
		});
}