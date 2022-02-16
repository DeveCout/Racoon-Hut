#pragma once
#include <SFML/Graphics.hpp>

class Wave : public sf::Drawable 
{

public  :

	virtual float getValue(float const& time)const = 0;
	virtual float getInverseValue(float const& time)const;


};