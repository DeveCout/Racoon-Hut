#include "Fourrier.h"

#define PI 3.1415926535

Fourrier::Fourrier()
{
	nbSample = 900;
	durationOnDraw = 1;
}

float Fourrier::getValue(float const& time) const
{

    float val = 0;

	for (size_t i = 0; i < vals.size(); i++)
	{
		val += sin(time * vals[i].second * 2 *PI) * vals[i].first;
	}

    return val/vals.size();
}

void Fourrier::addWave(float const& env, float const& freq)
{
	vals.push_back(std::pair<float, float>(env, freq));
}

void Fourrier::setDurationOnDraw(float const& duration)
{
	durationOnDraw = duration;
}

void Fourrier::setNbSample(int const& nb)
{
	nbSample = nb;
}

void Fourrier::draw(sf::RenderTarget& target, sf::RenderStates state) const
{
	sf::VertexArray lines = sf::VertexArray(sf::PrimitiveType::LineStrip, nbSample);

	for (size_t i = 0; i < nbSample; i++)
	{
		lines[i].position = sf::Vector2f(900/nbSample*i,-getValue(durationOnDraw/nbSample * i)*300+450);
		lines[i].color = sf::Color::White;
	}
	
	target.draw(lines);
}
