#pragma once
#include "Filter.h"


class FilterMin : public Filter
{
protected:

	float minValue;

public :
	
	FilterMin(Wave & input,float const& value = 0);
	virtual float getValue(float const& time)const;
	void draw(sf::RenderTarget& target, sf::RenderStates states)const;

};

