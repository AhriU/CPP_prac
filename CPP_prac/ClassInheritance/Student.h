#pragma once

#include <iostream>
#include <string>
#include "Person1.h"

class Student : public Person {
	string school;
public:
	void SetSchool(const string& s) { school = s; }
	string GetSchool() const { return school; }
	void print()const
	{
		Person::print();
		cout << " goes to " << school;
	}
};