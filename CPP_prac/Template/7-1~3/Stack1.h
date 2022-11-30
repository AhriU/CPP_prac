#pragma once

// typedef로 자료형을 변환함으로 코드유동성을 확보
// int를 float으로 고치면 float형으로 바뀜
// 하지만 다른 자료형마다 따로 선언을 해야하는 불편함이 있음.

typedef int	STACK_ITEM;
class Stack {
	enum{MAXSTACK = 20};
	int top;
	STACK_ITEM item[MAXSTACK];
public:
	Stack();
	bool Empty();
	bool Full();
	void Initialize();
	void Push(STACK_ITEM s);
	STACK_ITEM Pop();
};