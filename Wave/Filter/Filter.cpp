#include "Filter.h"

Filter::Filter(Wave& input_):input(&input_)
{
}

Filter::Filter()
{

}

void Filter::connect(Wave & newInput)
{
	input = std::unique_ptr<Wave>(&newInput);
}
