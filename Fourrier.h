#pragma once
#include <vector>
#include "Wave.h"

enum e_FourrierSynth{
	PIANO
};

class Fourrier : public Wave
{

	std::vector<std::pair<float, float>> vals;

public :

	Fourrier();
	Fourrier(e_FourrierSynth instrument,float freq);
	Fourrier(float const& freq, float const& enveloppe, float const& offset);
	virtual float getValue(float const& time)const;

	//--Modification
	void addWave(float const& freq, float const& env);
};

