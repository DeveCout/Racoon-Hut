#include "FilterEnvelope.h"

FilterEnvelope::FilterEnvelope(Wave& wave)
{
    envelope = std::unique_ptr<Wave>(&wave);
}

FilterEnvelope::FilterEnvelope()
{
    envelope = std::unique_ptr<Wave>(new WaveFlat(0));
}

float FilterEnvelope::getValue(float const& time) const
{
    return envelope->getValue(time) * input->getValue(time);
}
