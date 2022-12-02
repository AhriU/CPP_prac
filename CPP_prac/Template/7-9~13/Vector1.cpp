#include <iostream>
#include <vector>
using namespace std;

int main() {

	// int �ڷ����� ������ ���͸� ����
	// 5���� �޸� ũ�⸦ ����
	vector<int> IntVec(5);

	// ������ ��ҿ� i + 1�� �����͸� ����
	for (int i = 0; i < IntVec.size(); i++) {
		IntVec[i] = i + 1;
	}

	// ������ ũ��� ������ ũ��, �����͸� ���
	cout << "������ ������ ũ�� : " << IntVec.size() << endl;
	cout << "������ �������� ũ�� : " << IntVec.capacity() << endl;
	cout << "����� ������ : ";
	for (int i = 0; i < IntVec.size(); i++) {
		cout << IntVec[i] << " ";

	}

	// push_back�� ���� 11�� ���� �������� ����
	cout << endl << endl << "1���� ������ push_back" << endl;
	IntVec.push_back(11);

	// �ٽ� ���
	// ������ ũ��� 6, ������ ũ��� 7�� ����(���� ����)
	// ���� ũ�⿡ ���� ������ ũ�Ⱑ �� ���� Ŀ��
	// ���ۼӵ� ������ ���� �̸� �޸𸮸� Ȯ���ϴ� ��.
	cout << "������ ������ ũ�� : " << IntVec.size() << endl;
	cout << "������ �������� ũ�� : " << IntVec.capacity() << endl;
	cout << "����� ������ : ";
	for (int i = 0; i < IntVec.size(); i++) {
		cout << IntVec[i] << " ";
	}

	// 5���� ������ push_back
	cout << endl << endl << "5���� ������ push_back" << endl;
	for (int i = 1; i < 6; i++) {
		IntVec.push_back(11 + i);
	}

	// ���������� ������ ũ��� 11, �������� ũ��� 15
	// �����Ͱ� �� �߰��� ���ɼ��� �ִٰ� ���� ������
	// �� ���� �޸� Ȯ��
	cout << "������ ������ ũ�� : " << IntVec.size() << endl;
	cout << "������ �������� ũ�� : " << IntVec.capacity() << endl;
	cout << "����� ������ : ";
	for (int i = 0; i < IntVec.size(); i++) {
		cout << IntVec[i] << " ";
	}

	// pop_back���� ���� �����͸� 3�� ����
	cout << endl << endl << "3���� ������ pop_back" << endl;
	for (int i = 0; i < 3; i++) {
		IntVec.pop_back();
	}

	// ������ ũ��� 8, �������� ũ��� 15
	// ������ ũ��� �پ�� �ݸ� �������� ũ�⿡�� ���������� ����.
	cout << "������ ������ ũ�� : " << IntVec.size() << endl;
	cout << "������ �������� ũ�� : " << IntVec.capacity() << endl;
	cout << "����� ������ : ";
	for (int i = 0; i < IntVec.size(); i++) {
		cout << IntVec[i] << " ";
	}

	return 0;
}