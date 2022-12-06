#include <iostream>
#include "IntArray2.h"
using namespace std;

int main() {
	gArray arr(2000, 10);

	// ������ �߻��� �� �ִ� ������ try ��Ͽ� ����
	try {
		// i�� ������ ����� �����ϴ��� Ȯ�� ����
		for (int i = 2001; i <= 2010; i++)
			arr[i] = i;
		cout << arr << endl;
	}

	// �ε��� ���Ѻ��� �������� ���� ���� ���� catch ��
	catch (const gArray::LowIndex& e) {
		cerr << e.what() << "-->" << e.wrongIndex << endl;
		cerr << "�ε��� ���� : " << e.LowBound << endl;
	}

	// �ε��� ���Ѻ��� �ö󰡴� ���� ���� ���� catch ��
	catch (const gArray::HighIndex& e) {
		cerr << e.what() << "-->" << e.wrongIndex << endl;
		cerr << "�ε��� ���� : " << e.HighBound << endl;
	}

	return 0;
}