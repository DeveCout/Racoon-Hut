#include "MultiplyWave.h"

float MultiplyWave::getValue(float const& time) const
{
	float val = inputs[0]->getValue(time);
	for (size_t i = 1; i < inputs.size(); i++)
	{
		val *= inputs[i]->getValue(time);
	}
	return val;
}
