#pragma once
#include "Wave.h"
#include <vector>
#include <memory>

class WaveOperator : public Wave
{
protected:
	std::vector<std::unique_ptr<Wave>> inputs;

public :

	virtual float getValue(float const& time)const = 0;
	void addWave(Wave & newWave);
};
