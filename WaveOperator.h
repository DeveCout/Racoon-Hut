#pragma once
#include "Wave.h"
#include <vector>

class WaveOperator : public Wave
{
protected:
	std::vector<Wave*> inputs;

public :

	virtual float getValue(float const& time)const = 0;
	void addWave(Wave* const& newWave);
};
