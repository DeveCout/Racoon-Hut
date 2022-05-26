#pragma once
#include "Filter.h"

class FilterMask :
    public Filter
{
    Wave& limitTop;
    Wave& limitBot;

public :
    FilterMask(Wave& input,Wave& limitTop_,Wave& limitBot_);
    float getValue(float const& time)const;

};

