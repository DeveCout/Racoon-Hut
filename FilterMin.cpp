#include "FilterMin.h"

FilterMin::FilterMin(Wave& input, float const& value):Filter(input),minValue(value)
{

}

float FilterMin::getValue(float const& time)const
{
	float val = input->getValue(time);
	return (val > minValue) ? val : minValue;
}

