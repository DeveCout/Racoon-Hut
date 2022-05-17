#pragma once
#include "Wave.h"

class  WaveADSR : public Wave
{
	float attack;
	float decay;
	float sustain;
	float release;
	float releaseStart;

public :

	WaveADSR(float const& attack = 0,float const& decay = 0, float const& sustain = 1,float const& release = 0);
	float getValue(float const& time)const;
	void setOff(float const& timeOff);
};