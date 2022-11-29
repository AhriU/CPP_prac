#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

int main() {

	Person* p1 = new Person("Dudley");
	p1->print();
	cout << endl;

	Person* p2 = new Student("Harry", "Hogwarts");
	
	// �������� �� �����Ű��
	// Harry goes to Hogwarts�� ��µȴ�
	// (Student Class�� print �Լ�)
	p2->print(); cout << endl;

	// ���� Casting���� p2�� �����͸� Student �����ͷ� ����
	// ��������
	// Harry goes to Hogwarts ���
	//((Student*)p2)->print();
	cout << endl;

	return 0;
}