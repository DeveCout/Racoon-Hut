#include "Fourrier.h"
#include <iostream>

#define PI 3.1415926535

Fourrier::Fourrier()
{
	offset = 0;
}

Fourrier::Fourrier(e_FourrierSynth instrument, float freq)
{
}

Fourrier::Fourrier(float const& freq, float const& enveloppe, float const& offset_) :Wave()
{
	vals.push_back(std::pair<float, float>(freq, enveloppe));
	offset = offset_;

}

float Fourrier::getValue(float const& time) const
{
    float val = 0;
	for (size_t i = 0; i < vals.size(); i++)
	{
		val += sin((time * vals[i].first * 2 * PI)+offset ) * vals[i].second;
	}
    return val/vals.size();
}

void Fourrier::addWave(float const& freq,float const& env )
{
	vals.push_back(std::pair<float, float>(freq, env));
}
