#include "Filter.h"

Filter::Filter(Wave& input_):input(input_)
{
}

void Filter::connect(Wave & newInput)
{
	input = newInput;
}
