#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

// Class를 가리키는 포인터를 출력하는 구문
// 1번 const는 Person*의 주소가 바뀌지 않도록 만든다
// 2번 const는 p배열의 값이 바뀌지 않도록 만든다.
void PrintPerson(const Person* const p[], int n) {
	for (int i = 0; i < n; i++) {
		p[i]->print();
		cout << endl;
	}
}

int main() {
	Person Dudley("Dudley");
	Student Harry("Harry", "Hogwarts");
	Student Ron("Ron", "Hogwarts");

	Dudley.print(); cout << endl;
	Harry.print(); cout << endl << endl;

	Person* pPerson[3];
	pPerson[0] = &Dudley;
	pPerson[1] = &Harry;
	pPerson[2] = &Ron;

	// 파생Class의 주소가 기초Class 포인터로 들어가게 되면
	// 기초Class의 멤버함수가 작동한다
	// 왜? 포인터는 기초Class 포인터 말고는 정보가 없기 때문에
	// 그 포인터가 기초Class인지 파생Class인지 판단할 수 없음
	// 그래서 기초Class 포인터를 기준으로 작동

	PrintPerson(pPerson, 3);

	// 실행결과 Dudley, Harry, Ron이 출력됌
}