#include "FilterMin.h"

FilterMin::FilterMin(Wave& input, float const& value):Filter(input),minValue(value)
{

}

float FilterMin::getValue(float const& time)const
{
	float val = input.getValue(time);
	return (val > minValue) ? val : minValue;
}

void FilterMin::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	sf::VertexArray lines = sf::VertexArray(sf::PrimitiveType::LineStrip, nbSample);

	for (size_t i = 0; i < nbSample; i++)
	{
		lines[i].position = sf::Vector2f(900 / nbSample * i, -getValue(durationOnDraw / nbSample * i) * 300 + 450);
		lines[i].color = sf::Color::White;
	}

	target.draw(lines);
}
