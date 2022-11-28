#include <iostream>
#include "Person2.h"
#include "Student2.h"
using namespace std;

int main() {
	Student Harry("Harry", "Hogwarts");
	cout << Harry.GetName();
	Harry.print();
	cout << endl;
	return 0;
}