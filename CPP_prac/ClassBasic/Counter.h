#pragma once
class Counter {
	int value;
public:
	void reset() { value = 0; }
	void count() { ++value; }
	int getValue() const { return value; }
};