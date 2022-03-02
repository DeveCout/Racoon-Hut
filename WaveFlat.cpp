#include "WaveFlat.h"

WaveFlat::WaveFlat(float const& value_):value(value_)
{

}

float WaveFlat::getValue(float const& time) const
{
	return value;
}
