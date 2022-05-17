#include "WaveADSR.h"

WaveADSR::WaveADSR(float const& attack_, float const& decay_, float const& sustain_, float const& release_):
    attack(attack_),
    decay(decay_),
    sustain(sustain_),
    release(release_)
{
    releaseStart = -1;
}

float WaveADSR::getValue(float const& time) const
{
    //ATTACK
    if (time < attack)
    {
        if(!attack)
            return 1;
        return time / attack;
    }
    //DECAY
    float timeMinAttack = time - attack;
    if (timeMinAttack < decay)
    {
        return 1 - (timeMinAttack/decay) * (1-sustain);
    }
    //SUSTAIN
    if(releaseStart != -1 && time < releaseStart )
    {
        return sustain;
    }
    return sustain - ((time - releaseStart) / release) * sustain;
}

void WaveADSR::setOff(float const& timeOff)
{
    releaseStart = timeOff;
}
