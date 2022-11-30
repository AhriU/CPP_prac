#include <iostream>
#include "StackT.h"
#include "MyString.h"
using namespace std;

int main() {

	// Template�� �̿��Ͽ� char�� �����ϴ� ������ ����
	// 'a'�� 'b'�� push�� ���� ���ÿ� ����
	// pop�� ���� ���
	// ��� : CHAR STACK : ba
	Stack<char> sc(100);
	sc.Push('a');
	sc.Push('b');
	cout << "CHAR STACK : ";
	while (!sc.Empty()) {
		cout << sc.Pop();
	}
	cout << endl;


	// ���������� Int�� �����ϴ� ������ ����
	// 5, 10�� push�ϰ� pop���� ���
	// ��� : INT STACK : 105
	Stack<int>si(50);
	si.Push(5);
	si.Push(10);
	cout << "INT STACK : ";
	while (!si.Empty()) {
		cout << si.Pop();
	}
	cout << endl;

	
	// ����� ���� �ڷ����� Mystring�� template�� ���� �� ����
	// push�� ���� s1 �� s2�� s3�� ������ ���� ���ÿ� �ְ� ���
	// ��� : MYSTRING STACK : Dep.CSKNOU
	Stack<Mystring> msStack(10);
	Mystring s1("KNOU");
	Mystring s2("Dep.");
	Mystring s3("CS");
	msStack.Push(s1);
	msStack.Push(s2 + s3);
	cout << "MYSTRING STACK : ";
	while (!msStack.Empty()) {
		cout << msStack.Pop();
	}

	return 0;

}