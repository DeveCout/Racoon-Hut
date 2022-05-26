#pragma once
#include "WaveOperator.h"
class MultiplyWave :
    public WaveOperator
{
public : 
    virtual float getValue(float const& time)const;

};

