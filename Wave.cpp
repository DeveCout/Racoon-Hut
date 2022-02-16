#include "Wave.h"

float Wave::getInverseValue(float const& time) const
{
    return -getValue(time);
}
