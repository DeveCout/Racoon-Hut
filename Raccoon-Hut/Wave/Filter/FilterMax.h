#pragma once
#include "Filter.h"

class FilterMax : public Filter
{
protected:

	float maxValue;

public :

	FilterMax(Wave& input, float const& value = 0);
	virtual float getValue(float const& time)const;

};