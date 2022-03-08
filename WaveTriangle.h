#pragma once
#include "Wave.h"

class WaveTriangle : public Wave
{
	/// <summary>
	/// Duration of each "spike", df = 1/freq
	/// Exemple, a Triangle wave of 20Hz (almost inaudible) have a df of 0.05sec
	/// </summary>
	float df;
public : 

	WaveTriangle(float const& frequency);
	float getValue(float const& time)const;
};

