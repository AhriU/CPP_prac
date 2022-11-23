#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "NamedObj.h"

NamedObj::NamedObj(const char* s) {		// ������
	name = new char[strlen(s) + 1];	// �̸� ���� �޾� �� ���� ��ŭ �����Ҵ�
	strcpy(name, s);					// �̸� ���� name �����͸���� ����
	id = ++nConstr;						// nConstr�� 1�� ���ϰ� id���� ����
}

NamedObj::~NamedObj() {		// �Ҹ���
	++nDestr;				// nDestr�� ���� 1 ����
	delete[]name;			// name�� �Ҵ�� �����Ҵ��� ����
}

int NamedObj::nConstr = 0;	// �ʱ�ȭ
int NamedObj::nDestr = 0;	// �ʱ�ȭ
