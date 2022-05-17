#pragma once
#include "Wave.h"
#include "WaveFlat.h"
#include <memory>
class Filter : public Wave
{
protected:
	
	std::unique_ptr<Wave> input;

public :
	
	Filter(Wave& input_);
	Filter();
	void connect(Wave & newInput);

};
