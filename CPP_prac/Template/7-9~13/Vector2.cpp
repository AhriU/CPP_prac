#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	// int�� ����(5) ���� �� ������ ����
	vector<int> IntVec(5);
	for (int i = 0; i < IntVec.size(); i++) {
		IntVec[i] = i + 1;
	}

	// begin()�Լ��� ��(������ ���� ������ �ּ�)�� �ݺ��� it�� ����
	// it�� ���� ������ó�� ����� �����ϴ�
	// �ݺ��������� IntVec�� end�Լ��� ������ ������ �����ͱ��� ����ϵ��� ��
	// *it �� ���� ������ ���� ��밡��

	// vector<int>::iterator it �� auto it���� ��Ұ� �����ϴ�.
	// auto it = IntVec.begin();
	vector<int>::iterator it = IntVec.begin();
	cout << "����� ������ : ";
	for (; it < IntVec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// ���������� ������ ���� ���
	it = IntVec.begin();
	cout << "3��° ������ : ";
	cout << *(it + 2) << endl;

	return 0;

}