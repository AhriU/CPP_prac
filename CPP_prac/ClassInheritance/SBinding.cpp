#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

int main() {

	Person* p1 = new Person("Dudley");
	p1->print();
	cout << endl;

	Person* p2 = new Student("Harry", "Hogwarts");
	
	// 동적연결 후 실행시키면
	// Harry goes to Hogwarts가 출력된다
	// (Student Class의 print 함수)
	p2->print(); cout << endl;

	// 강제 Casting으로 p2의 포인터를 Student 포인터로 변경
	// 정적연결
	// Harry goes to Hogwarts 출력
	//((Student*)p2)->print();
	cout << endl;

	return 0;
}