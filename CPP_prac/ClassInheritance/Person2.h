#pragma once

#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person(const string& n) {
		cout << "Person�� ������" << endl;
		name = n;
	}
	~Person() {
		cout << "Person�� �Ҹ���" << endl;
	}
	string GetName() const { return name; }
	void print()const { cout << name; }
};