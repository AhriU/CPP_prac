#pragma once
#include <iostream>
using namespace std;

class NamedObj {
	char* name;
	int id;

	static int nConstr;		// ?????? ??ü?? ??
	static int nDestr;		// ?Ҹ??? ??ü?? ??

public:
	NamedObj(const char* s);
	~NamedObj();
	void display() const {
		cout << "ID : " << id << "--> ?̸? : " << name << endl;
	}
	static int nObj() {
		return nConstr - nDestr;
	}
};