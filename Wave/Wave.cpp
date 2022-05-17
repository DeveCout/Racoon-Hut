#include "Wave.h"
#include <iostream>

Wave::Wave()
{
	offset = 0;
}

float Wave::getInverseValue(float const& time) const
{
    return -getValue(time);
}


void Wave::setOffset(float const& offset_)
{
	offset = offset_;
}