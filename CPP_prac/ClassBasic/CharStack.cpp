#include <iostream>
#include "CharStack.h"
using namespace std;

bool CharStack::push(char ch) {						// push ����Լ� ����
	if (chkFull()) {								// ������ ���� �� �ִ��� Ȯ��
		cout << "������ ���� �� �ֽ��ϴ�. " << endl;	// ���� á�ٸ� ��� �� false ��ȯ
		return false;
	}
	buf[--top] = ch;								// �ƴ϶�� top�� 1 ������ ������ �Է�
	return true;									// true ��ȯ
}

char CharStack::pop() {
	if (chkEmpty()) {
		cout << "���ÿ� �����Ͱ� �����ϴ�." << endl;
		return 0;
	}
	return buf[top++];
}