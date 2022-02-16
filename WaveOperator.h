#pragma once
#include "Wave.h"


class WaveOperator : public Wave
{
protected:
	std::vector<Wave*> inputs;

public :

	virtual float getValue(float const& time)const = 0;
	void addWave(Wave* const& newWave);
	virtual void draw(sf::RenderTarget & target, sf::RenderStates states)const = 0;
};
