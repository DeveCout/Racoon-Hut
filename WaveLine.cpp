#include "WaveLine.h"

WaveLine::WaveLine(float const& a_, float const& b_):a(a_),b(b_)
{
}

WaveLine WaveLine::createLine(float const& startAt, float const& endAt)
{ 
    float a = 1.0/(endAt-startAt);
    return WaveLine(a,-a*startAt);
}

float WaveLine::getValue(float const& time) const
{
    return a * time + b;
}
