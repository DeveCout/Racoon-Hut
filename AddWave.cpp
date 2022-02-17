#include "AddWave.h"



float AddWave::getValue(float const& time) const
{
	float val = 0;
	for (size_t i = 0; i < inputs.size(); i++)
	{
		val += inputs[i]->getValue(time);
	}
	return val;
}

