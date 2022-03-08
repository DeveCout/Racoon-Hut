#pragma once
#include "Filter.h"
#include "WaveFlat.h"

/// <summary>
/// Use a wave to create the enveloppe of the input
/// /!\ We advice you to use a enveloppe of [0-1], since the output will be input(t) * enveloppe(t) /!\
/// </summary>

class FilterEnvelope :
    public Filter
{
    std::unique_ptr<Wave> envelope;

public :
    FilterEnvelope(Wave& wave);
    FilterEnvelope();
    float getValue(float const& time)const;
};

