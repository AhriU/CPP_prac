#pragma once

#include <iostream>
#include <string>
using namespace std;

class Student {
	string School;
public:
	Student(const string& s) : School(s) {}
	void PrintSchool() const { cout << School << endl; }
};