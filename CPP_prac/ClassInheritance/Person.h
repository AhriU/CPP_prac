#pragma once

#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person(const string& n) : name (n) {}
	string GetName() const { return name; }

	// ��������
	virtual void print() const { cout << name; }

	// ��������
	// void print() const { cout << name; }
};