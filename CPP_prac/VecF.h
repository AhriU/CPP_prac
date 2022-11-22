#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class VecF {

	int n;          //������ ������ float�� �� 
	float* arr;     // ������ ������ ����Ű�� ptr

public:
	VecF(int d, float* a = nullptr) : n{ d } {			// ������, ���͸� ������ float�� ���� d, ������ ������ ����Ű�� ptr�� a�� �ް�, ����Ʈ ���� nullptr
		arr = new float[d];								// �����Ǵ� ��ü�� arr�� d��ŭ�� float �迭�� ����
		if (a) memcpy(arr, a, sizeof(float) * n);		// a�� nullptr�� �ƴ϶�� float�� ũ��(4byte) * n�� ũ�⸸ŭ a -> arr �� ���� ���� 
	}

	VecF(const VecF& fv) : n{ fv.n } {					// ���� ������ ����, ����� n���� fv.n�� ���� ����
		arr = new float[n];								// n�� ������ŭ ���ο� float �迭 ����
		memcpy(arr, fv.arr, sizeof(float) * n);			// float�� ũ�� * n�� ��ŭ fv.arr�� ���� arr�� ����
	}

	Vecf(const VecF&& fv) : n{ fv.n }, arr{ fv.arr } {					// �̵������� ����, �̵��������� n�� fv.n�� ���� ����
		fv.arr = nullptr;								// fv.arr�� nullptr�� �ʱ�ȭ
		fv.n = 0;										// fv.n �� 0���� �ʱ�ȭ
	}


	~VecF() {
		delete[]arr;		// �Ҹ���, arr�� �����Ҵ��� ����
	}

	VecF add(const VecF& fv)const {				// ���Ͱ��� ���ϴ� �Լ� add, const ������ ���� ������ ���� ����, ���� const�� add �Լ� ������ �� ���� �Ұ��� �˸�
		VecF tmp(n);							// �ӽ� ������ VecFũ���� ��ü ����
		for (int i = 0; i < n; i++) {			// n�� ����ŭ �ݺ�
			tmp.arr[i] = arr[i] + fv.arr[i];		// ������ arr�� ���� �����ų ��ü�� arr�� ���� ���� �� tmp.arr�� ����
		}
		return tmp;								// tmp ��ü ��ȯ
	}

	void print()const {							// ���� ���� ����ϴ� �Լ�
		cout << "[ ";							// [ ���
		for (int i = 0; i < n; i++)				// n�� ����ŭ �ݺ�
			cout << arr[i] << " ";				// arr�� ��� ��� �� ����
		cout << "]";							// ] ���
	}

};