#pragma once
#include "Wave.h"

class WaveFlat : public Wave
{
	float value;
public :
	WaveFlat(float const& value = 0);
	float getValue(float const& time)const;
};
