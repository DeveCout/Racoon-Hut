#pragma once
#include <SFML/Graphics.hpp>
#include "Wave.h"

class WaveDrawer : public sf::Drawable
{
	float duration;
	float nbSample;
	Wave* wave;
	sf::Color color;

public :

	WaveDrawer(Wave& wave,float const& duration = 0.1, int const& nbSample = 512);
	void draw(sf::RenderTarget & target,sf::RenderStates states)const;
	void setColor(sf::Color const& newColor);
};

