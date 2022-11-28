#include <iostream>
#include "Person1.h"
#include "Student.h"
using namespace std;

int main() {
	Person dudley;
	dudley.setName("Dudley");
	Student harry;
	harry.setName("Harry");
	harry.SetSchool("Hogwarts");
	dudley.print();
	cout << endl;
	harry.print();
	cout << endl;
	harry.Person::print();
	cout << endl;
	return 0;

}