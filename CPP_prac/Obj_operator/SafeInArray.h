#pragma once

#include <iostream>
using namespace std;

class SafeInArray {

	int limit;
	int* arr;

public:

	SafeInArray(int n) : limit{ n } {		// ������
		arr = new int[n];
	}

	~SafeInArray(){							// �Ҹ���
		delete[]arr;
	}

	int size() const { return limit; }		// ũ�⸦ ��ȯ�ϴ� ����Լ�

	int& operator [](int i) {				// ���Կ� [] ������ ��������
		if (i < 0 || i > limit)	{
			cout << "÷�ڰ� ������ ��� ���α׷��� �����մϴ�.";
			exit(EXIT_FAILURE);
		}
		return arr[i];						// arr[i] ������ ��ȯ
	}

	int operator []( int i) const{			// ��¿� [] ������ ��������
		if (i < 0 || i > limit) {
			cout << "÷�ڰ� ������ ��� ���α׷��� �����մϴ�.";
			exit(EXIT_FAILURE);
		}
		return arr[i];
	}

};