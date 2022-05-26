#pragma once
#include "WaveOperator.h"
class SubstractWave :
    public WaveOperator
{

public:

    virtual float getValue(float const& time)const;

};

