#include <iostream>
using namespace std;
#include "VecF.h"

int main() {
	float a[3] = { 1,2,3 };		// float ũ��(4byte) �迭 3�� ���� �� 1,2,3���� �ʱ�ȭ
	VecF v1(3, a);				// ��ü VecF�� �迭��Ұ��� 3�� �ʱ�ȭ �� a�� ����
	VecF v2(v1);				// ��ü ����
	v1.print();					// v1 ��ü�� print �޼ҵ� ���
	cout << endl;				// �ٹٲ�
	v2.print();					// v2 ��ü�� print �޼ҵ� ���
	cout << endl;				// �ٹٲ�
	return 0;
}