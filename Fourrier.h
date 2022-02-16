#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include "Wave.h"

class Fourrier : public Wave
{

	std::vector<std::pair<float, float>> vals;
	float durationOnDraw;
	int nbSample;

public :

	Fourrier();
	virtual float getValue(float const& time)const;
	virtual void draw(sf::RenderTarget & target, sf::RenderStates state)const;

	//--Modification
	void addWave(float const& env, float const& freq);
	void setDurationOnDraw(float const& duration);
	void setNbSample(int const& nb);
};

