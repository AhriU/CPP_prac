#pragma once
#include <iostream>
using namespace std;

class NamedObj {
	char* name;
	int id;

	static int nConstr;		// 积己等 按眉狼 荐
	static int nDestr;		// 家戈等 按眉狼 荐

public:
	NamedObj(const char* s);
	~NamedObj();
	void display() const {
		cout << "ID : " << id << "--> 捞抚 : " << name << endl;
	}
	static int nObj() {
		return nConstr - nDestr;
	}
};