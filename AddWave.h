#pragma once
#include "WaveOperator.h"

class AddWave : public WaveOperator
{


public:

	virtual float getValue(float const& time)const;

};

