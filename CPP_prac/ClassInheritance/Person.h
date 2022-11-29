#pragma once

#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person(const string& n) : name (n) {}
	string GetName() const { return name; }

	// 동적연결
	virtual void print() const { cout << name; }

	// 정적연결
	// void print() const { cout << name; }
};