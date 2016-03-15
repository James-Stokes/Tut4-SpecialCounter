#pragma once
class Counter
{
private:
	int start_value, stop_value;
	int increment, decrement;
	int current_value;

public:
	Counter(int, int, int);
	void start(int);
	void stop(int);
	void stepInc(int);
	void stepDec(int);
	Counter operator++(); //preinc
	Counter operator++(int);//post inc
	Counter operator--();//predec
	Counter operator--(int);//postdec
	void incrementCurrentValue();
	void decrementCurrentValue();
	~Counter();
};

int main() {
	return 0;
}