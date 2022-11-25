#include <iostream>
#include "Pencils.h"
using namespace std;

// ���׿����� ����ǥ�ù�(++) ����
// ������ ���� ���� 1 �����ϰ� 12�� ��
// 12�� ������ dozens �����͸���� �� 1 ���� ��, np �ʱ�ȭ
// return ������ ���ΰ�ü�� ���� ��ȯ
Pencils& Pencils::operator++() {
	if (++np >= 12)
		++dozens, np = 0;
	return *this;
}

// ���׿����� ����ǥ�ù�(++) ����
// ������ ���� ������ �ӽ� ��ü ����(tmp)
// ����ǥ�ù��� ���� ���ǹ� ����
// ���� ���� tmp ��ü �� ��ȯ
Pencils Pencils::operator++(int) {
	Pencils tmp(*this);
	if (++np >= 12)
		++dozens, np = 0;
	return tmp;
}

void Pencils::display() const {
	if (dozens) {
		cout << dozens << "Ÿ ";
		if (np) cout << np << "�ڷ�";
		cout << endl;
	}
	else
		cout << np << "�ڷ�" << endl;
}