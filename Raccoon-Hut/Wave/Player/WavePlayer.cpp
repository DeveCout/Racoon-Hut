#include "Player/WavePlayer.h"
#include <iostream>

WavePlayer::WavePlayer(Wave & wave_, float const& time_):wave(&wave_),time(time_)
{
	sampleRate = 50000;
	samples = std::vector<sf::Int16>(sampleRate);
	initialize(1,sampleRate);
}

void WavePlayer::setSamples()
{
	float df = 1.f / sampleRate;
	for (size_t i = 0; i < sampleRate; i++)
	{
		samples[i] = wave->getValue(time + df * (float)(i)) * 255;
	}

}

bool WavePlayer::onGetData(Chunk& data)
{
	time++;
	data.sampleCount = sampleRate;
	setSamples();
	data.samples = &samples[0];

	return true;
}


void WavePlayer::onSeek(sf::Time timeOffset)
{
	time = timeOffset.asSeconds();
}
