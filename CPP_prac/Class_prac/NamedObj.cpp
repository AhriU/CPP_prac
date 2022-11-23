#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "NamedObj.h"

NamedObj::NamedObj(const char* s) {		// 생성자
	name = new char[strlen(s) + 1];	// 이름 값을 받아 그 길이 만큼 동적할당
	strcpy(name, s);					// 이름 값을 name 데이터멤버에 복사
	id = ++nConstr;						// nConstr에 1을 더하고 id값에 대입
}

NamedObj::~NamedObj() {		// 소멸자
	++nDestr;				// nDestr의 수를 1 더함
	delete[]name;			// name에 할당된 동적할당을 삭제
}

int NamedObj::nConstr = 0;	// 초기화
int NamedObj::nDestr = 0;	// 초기화
