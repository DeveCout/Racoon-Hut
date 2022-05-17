#pragma once
#include "Wave.h"

class WaveLine : public Wave
{
	/// <summary>
	/// f(t) = at + b
	/// With t = time
	/// </summary>
	float a;


	/// <summary>
	/// f((t) = at + b
	/// </summary>
	float b;

public : 

	/// <summary>
	/// Create a line using f(t) = a * t + b
	/// ALSO SEE : WaveLine::createLine(float const& startAt,float const& EndAt)
	/// </summary>
	/// <param name="a">a the slope of the curve</param>
	/// <param name="b">b, the "offset" of the line on the 'y' axis</param>
	WaveLine(float const& a = 0,float const& b = 0);

	/// <summary>
	/// Create a line using 2 val :
	/// startAt is the time where f(startAt) = 0
	/// EndAt is the time where f(EndAt) = 1
	/// </summary>
	/// <param name="startAt">point where getValue(startAt) = 0</param>
	/// <param name="EndAt">point where getValue(endAt) = 1</param>
	/// <returns></returns>
	static WaveLine createLine(float const& startAt = 0, float const& endAt = 0);
	float getValue(float const& time)const;

};