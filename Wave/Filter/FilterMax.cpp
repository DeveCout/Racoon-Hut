#include "FilterMax.h"

FilterMax::FilterMax(Wave& input, float const& value):Filter(input),maxValue(value)
{

}

float FilterMax::getValue(float const& time) const
{
	float val = input->getValue(time);
	return (val < maxValue) ? val : maxValue;
}
