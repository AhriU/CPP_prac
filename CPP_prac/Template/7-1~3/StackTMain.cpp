#include <iostream>
#include "StackT.h"
#include "MyString.h"
using namespace std;

int main() {

	// Template를 이용하여 char을 저장하는 스택을 생성
	// 'a'와 'b'를 push를 통해 스택에 저장
	// pop을 통해 출력
	// 결과 : CHAR STACK : ba
	Stack<char> sc(100);
	sc.Push('a');
	sc.Push('b');
	cout << "CHAR STACK : ";
	while (!sc.Empty()) {
		cout << sc.Pop();
	}
	cout << endl;


	// 마찬가지로 Int를 저장하는 스택을 생성
	// 5, 10을 push하고 pop으로 출력
	// 결과 : INT STACK : 105
	Stack<int>si(50);
	si.Push(5);
	si.Push(10);
	cout << "INT STACK : ";
	while (!si.Empty()) {
		cout << si.Pop();
	}
	cout << endl;

	
	// 사용자 정의 자료형인 Mystring도 template에 넣을 수 있음
	// push를 통해 s1 및 s2와 s3를 연산한 것을 스택에 넣고 출력
	// 결과 : MYSTRING STACK : Dep.CSKNOU
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