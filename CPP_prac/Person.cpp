#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Person.h"

using namespace std;

Person::Person(const char* name, const char* addr) // ������
{
	// this->�� ��ü�� ������ ����� ��Ī
	// name���� ���� �޾� �� ���� ��ŭ ��ü�� name�� �����Ҵ�
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);  // �Ű������� ���� �̸��� ��ü ������ ����� ����

	// ���� ������ �ּ� �Է�
	this->addr = new char[strlen(addr) + 1];
	strcpy(this->addr, addr);
	
	cout << "Person ��ü ������ (" << name << ")" << endl;
}

Person::~Person() // �Ҹ���
{
	cout << "Person ��ü ������ (" << name << ")" << endl;
	delete[] name; // name�� �����Ҵ� ����
	delete[] addr; // addr�� �����Ҵ� ����
}

void Person::print() const
{
	cout << addr << "�� ��� �ִ� " << name << " �Դϴ�." << endl;
}

void Person::chAddr(const char* newAddr)
{
	delete[] addr; // ���� addr �����Ҵ� ����
	addr = new char[strlen(newAddr) + 1]; // ���ο� �ּ��� ���̷� �����Ҵ�
	strcpy(addr, newAddr); // �ּ� ����
}