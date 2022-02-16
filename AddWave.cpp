#include "AddWave.h"

float AddWave::getValue(float const& time) const
{
	float val = 0;
	for (size_t i = 0; i < inputs.size(); i++)
	{
		val += inputs[i]->getValue(time);
	}
	return val/inputs.size();
}

void AddWave::draw(sf::RenderTarget& target, sf::RenderStates state) const
{
	sf::VertexArray lines = sf::VertexArray(sf::PrimitiveType::LineStrip, 900);

	for (size_t i = 0; i < nbSample; i++)
	{
		float value = getValue(1 / nbSample * 50);
		lines[i].position = sf::Vector2f(900 / nbSample * i, -getValue(durationOnDraw / nbSample * i) * 300 + 450);
		float lineVal = lines[i].position.y;
		lines[i].color = sf::Color::White;
	}

	target.draw(lines);
}
