#include <iostream>
#include "NamedObj.h"
using namespace std;

void f() {
	NamedObj x("Third");
	x.display();
}


int main()
{
	cout << "NamedObj 클래스의 객체 수 : "
		<< NamedObj::nObj() << endl;
	NamedObj a("First");
	NamedObj b("Second");
	a.display();
	b.display();
	f();
	NamedObj c("Forth");
	c.display();
	cout << "NamedObj 클래스의 객체 수 : "
		<< NamedObj::nObj() << endl;
	return 0;
}