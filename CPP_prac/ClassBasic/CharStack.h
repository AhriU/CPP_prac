#pragma once

class CharStack {
	enum{size = 20};
	int top;
	char buf[size];
public:
	CharStack() : top{ size } {}	// 생성자, top을 맨 아래에 값을 넣어 초기화
	bool chkEmpty() const {			// top의 최저치인지 확인
		return top == size;
	}
	bool chkFull() const {			// top의 최대치인지 확인
		return !top;
	}
	bool push(char);				// 스택에 데이터를 넣음
	char pop();						// 스택에서 데이터를 꺼냄
};