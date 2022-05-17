#include "WaveDrawer.h"

WaveDrawer::WaveDrawer(Wave& wave_, float const& duration_, int const& nbSample_):wave(&wave_),duration(duration_),nbSample(nbSample_)
{
	color = sf::Color::White;
}

void WaveDrawer::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	sf::VertexArray lines = sf::VertexArray(sf::PrimitiveType::LineStrip, nbSample);

	for (size_t i = 0; i < nbSample; i++)
	{
		lines[i].position = sf::Vector2f(900 / nbSample * i, -wave->getValue(duration / nbSample * i) * 300 + 450);
		float lineVal = lines[i].position.y;
		lines[i].color = color;
	}

	target.draw(lines);
}

void WaveDrawer::setColor(sf::Color const& newColor)
{
	color = newColor;
}
