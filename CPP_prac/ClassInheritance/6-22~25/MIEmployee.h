#pragma once

#include <iostream>
#include <string>
using namespace std;

class Employee {
	string company;
public:
	Employee(const string& c) : company(c) {}
	void PrintEmployee()const { cout << company << endl; }
};