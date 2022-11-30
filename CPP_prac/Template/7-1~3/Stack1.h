#pragma once

// typedef�� �ڷ����� ��ȯ������ �ڵ��������� Ȯ��
// int�� float���� ��ġ�� float������ �ٲ�
// ������ �ٸ� �ڷ������� ���� ������ �ؾ��ϴ� �������� ����.

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