#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

// Class�� ����Ű�� �����͸� ����ϴ� ����
// 1�� const�� Person*�� �ּҰ� �ٲ��� �ʵ��� �����
// 2�� const�� p�迭�� ���� �ٲ��� �ʵ��� �����.
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

	// �Ļ�Class�� �ּҰ� ����Class �����ͷ� ���� �Ǹ�
	// ����Class�� ����Լ��� �۵��Ѵ�
	// ��? �����ʹ� ����Class ������ ����� ������ ���� ������
	// �� �����Ͱ� ����Class���� �Ļ�Class���� �Ǵ��� �� ����
	// �׷��� ����Class �����͸� �������� �۵�

	PrintPerson(pPerson, 3);

	// ������ Dudley, Harry, Ron�� ���
}