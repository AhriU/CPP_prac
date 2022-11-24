#include <iostream>
#include "CharStack.h"
using namespace std;

bool CharStack::push(char ch) {						// push 멤버함수 정의
	if (chkFull()) {								// 스택이 가득 차 있는지 확인
		cout << "스택이 가득 차 있습니다. " << endl;	// 가득 찼다면 출력 후 false 반환
		return false;
	}
	buf[--top] = ch;								// 아니라면 top을 1 내리고 데이터 입력
	return true;									// true 반환
}

char CharStack::pop() {
	if (chkEmpty()) {
		cout << "스택에 데이터가 없습니다." << endl;
		return 0;
	}
	return buf[top++];
}