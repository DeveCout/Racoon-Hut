#pragma once
#include "Wave.h"

class Filter : public Wave
{
protected:
	Wave& input;
public :
	Filter(Wave& input_);
	void connect(Wave & newInput);
	virtual void draw(sf::RenderTarget & target, sf::RenderStates states)const = 0;
};

