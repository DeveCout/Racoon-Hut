#include "WaveOperator.h"

void WaveOperator::addWave(Wave & newWave)
{
	inputs.push_back(std::unique_ptr<Wave>(&newWave));
}

