#include "WaveTriangle.h"
#include <iostream>

WaveTriangle::WaveTriangle(float const& frequency)
{
	df = (float)(1.0f) / frequency;
}

float WaveTriangle::getValue(float const& time) const
{
	int nbPattern = time / df;
	float modTime = time - nbPattern*df;
	float ratio = modTime / df;
	if (ratio <= 0.5)
		return ratio * 4 - 1;
	return -(ratio-0.5) * 4 + 1;
}
