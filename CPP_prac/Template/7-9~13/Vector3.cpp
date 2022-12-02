#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

// ���������� ���������� �������� �Լ���ü(comp�� ����)
// a<b�� ��������
// a>b�� ��������
// ��, true ���϶� ���� �ȹٲٰ� false�϶� ���� �ٲٴ� ���� �� ���ִ�.
template<typename T> class GREATER {
public:
	bool operator() (const T& a, const T& b) {
		return a < b;
	}
};


int main() {

	// ���� �߻��� �ʱ�ȭ
	srand((unsigned)time(NULL)); 

	vector<int> Iv1(5);
	cout << "����1�� ����� �� : ";
	for (auto& i : Iv1) {	// ������ ���ؼ� auto&�� ���
		i = rand() % 100;	// 0~99 ������ ���� �߻� �� i�� ����
		cout << i << " ";
	}

	// ���� �˰����� sort�� ����Ͽ� ������ ������������ ����(����Ʈ)
	sort(Iv1.begin(), Iv1.end(), GREATER<int>());
	cout << endl << "���ĵ� ����1 : ";
	for (auto i : Iv1)
		cout << i << " ";

	cout << endl << endl;

	vector<int> Iv2(5);
	cout << "����2�� ����� �� : ";
	for (auto& i : Iv2) {
		i = rand() % 100;
		cout << i << " ";
	}

	sort(Iv2.begin(), Iv2.end(), GREATER<int>());
	cout << endl << "���ĵ� ����2 : ";
	for (auto i : Iv2)
		cout << i << " ";

	cout << endl << endl;

	// �պ� ����� ������ ����
	vector<int> Iv3(Iv1.size() + Iv2.size());

	// merge�� ���� ���� �� Iv3�� ����
	// merge�� ���������� ����Ʈ
	merge(Iv1.begin(), Iv1.end(), Iv2.begin(), Iv2.end(),Iv3.begin(), GREATER<int>());
	cout << "����1�� ����2�� �պ��� ��� : ";
	for (auto i : Iv3)
		cout << i << " ";
	cout << endl << endl;

	return 0;
}