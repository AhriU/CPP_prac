#include <iostream>
#include "CBParttime.h"
using namespace std;

int main() {
	Parttime Chulsoo("Chulsoo", "ABC Univ.", "DEF Co.");
	Chulsoo.Student::Print();
	Chulsoo.Employee::Print();
	return 0;
}