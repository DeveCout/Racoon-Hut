#pragma once
#include "WaveOperator.h"

class AddWave : public WaveOperator
{


public:

	virtual float getValue(float const& time)const;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;


};

