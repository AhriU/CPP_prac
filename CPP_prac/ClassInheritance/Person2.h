#pragma once

#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person(const string& n) {
		cout << "Person의 생성자" << endl;
		name = n;
	}
	~Person() {
		cout << "Person의 소멸자" << endl;
	}
	string GetName() const { return name; }
	void print()const { cout << name; }
};