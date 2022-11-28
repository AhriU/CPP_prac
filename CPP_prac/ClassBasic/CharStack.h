#pragma once

class CharStack {
	enum{size = 20};
	int top;
	char buf[size];
public:
	CharStack() : top{ size } {}	// ������, top�� �� �Ʒ��� ���� �־� �ʱ�ȭ
	bool chkEmpty() const {			// top�� ����ġ���� Ȯ��
		return top == size;
	}
	bool chkFull() const {			// top�� �ִ�ġ���� Ȯ��
		return !top;
	}
	bool push(char);				// ���ÿ� �����͸� ����
	char pop();						// ���ÿ��� �����͸� ����
};