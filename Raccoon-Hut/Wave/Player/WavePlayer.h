#pragma once
#include <SFML/Audio.hpp>
#include <Wave.h>

class WavePlayer : public sf::SoundStream
{
    
    float time;
    Wave* wave;

    int sampleRate;
    std::vector<sf::Int16> samples;

    virtual bool onGetData(Chunk& data);
    virtual void onSeek(sf::Time timeOffset);
    void setSamples();

public :

    WavePlayer(Wave& wave, float const& time_ = 0);
    WavePlayer(const WavePlayer&);
};