#pragma once
#include <vector>
#include "Wave.h"

class Fourrier : public Wave
{

	std::vector<std::pair<float, float>> vals;

public :

	Fourrier();
	Fourrier(float const& freq, float const& enveloppe, float const& offset = 0);
	virtual float getValue(float const& time)const;

	//--Modification
	void addWave(float const& freq, float const& env);
};
