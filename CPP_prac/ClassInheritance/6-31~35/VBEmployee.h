#pragma once

#include <iostream>
#include <string>
#include "VBPerson.h"
using namespace std;

// ����Ŭ������ �����Լ��� ��ӹ���
class Employee : virtual public Person {
	string Company;
public:
	Employee(const string& n, const string& c)
		: Person(n), Company(c) {}
	void Print() const {
		Person::Print();
		cout << " is employed by " << Company << endl;
	}
};