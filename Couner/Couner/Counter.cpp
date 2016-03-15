#include "Counter.h"



Counter::Counter(int start_value = 0, int stop_value = 255, int current_value = 0)
{
	this->start_value = start_value;
	this->stop_value = stop_value;
}

void Counter::start(int start_value)
{
	if (start_value >= 0)
		this->start_value = start_value;
	else
		this->start_value = 0;
}

void Counter::stop(int stop_value)
{
	if (stop_value <= 255)
		this->stop_value = stop_value;
	else
		this->stop_value = 255;
}

void Counter::stepInc(int increment = 1)
{
	this->increment = increment;
}

void Counter::stepDec(int decrement = 1)
{
	this->decrement = decrement;
}

Counter Counter::operator++()
{
	Counter counter(start_value, stop_value, current_value);
	if (current_value < stop_value && current_value > start_value)
		counter.incrementCurrentValue();
	return counter;
}

Counter Counter::operator++(int num)
{
	Counter counter(start_value, stop_value, current_value);
	if (current_value < stop_value && current_value > start_value)
		this->incrementCurrentValue();
	return counter;
}

Counter Counter::operator--()
{
	Counter counter(start_value, stop_value, current_value);
	if (current_value < stop_value && current_value > start_value)
		counter.decrementCurrentValue();
	return counter;
}

Counter Counter::operator--(int num)
{
	Counter counter(start_value, stop_value, current_value);
	if (current_value < stop_value && current_value > start_value)	
		this->decrementCurrentValue();
	return counter;
}

void Counter::incrementCurrentValue()
{
	current_value += increment;
}

void Counter::decrementCurrentValue()
{
	current_value -= decrement;
}

Counter::~Counter()
{
}
