#include "FilterMask.h"

FilterMask::FilterMask(Wave& input_, Wave& limitTop_, Wave& limitBot_):Filter(input_),limitTop(limitTop_),limitBot(limitBot_)
{

}

float FilterMask::getValue(float const& time) const
{
	float value = input->getValue(time);
	float topValue = limitTop.getValue(time);
	if (value > topValue) return topValue;
	float botValue = limitBot.getValue(time);
	if (value < botValue) return botValue;
	return value;
}
