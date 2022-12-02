#include <iostream>
#include <string>
#include <map>
using namespace std;

template<typename T>
class LESS_T {
public:
	bool operator()(const T& a, const T& b) const {
		return a < b;
	}
};

int main() {

	map<string, string, LESS_T<string>> PBook{
		{"������", "010-2233-4354"},
		{"�ڿ�ö", "010-2233-4455"}
	};
	PBook["��ö��"] = "010-1234-5678";

	PBook.insert(make_pair("�ֽ�ȣ", "010-7531-3456"));

	// insert("�ڿ�ö","010-1357-2468");�� �����߻�
	// �ڿ�ö�� �̹� �����Ƿ� ��ϵ��� ����
	PBook.insert(make_pair("�ڿ�ö", "010-1357-2468"));

	for (auto pb = PBook.begin(); pb != PBook.end(); ++pb)
		cout << pb->first << " " << pb->second << endl;
	cout << PBook.size() << "���� ��ϵǾ� �ֽ��ϴ�." << endl;



	// key���� �̿��Ͽ� value�� ã�� find ���
	string str;
	cout << endl << "ã�� �̸� : ";
	cin >> str;
	auto result = PBook.find(str);
	if (result != PBook.end()) {
		cout << result->first << "���� ��ȭ��ȣ�� ";
		cout << result->second << "�Դϴ�." << endl;
	}
	else
		cout << str << "���� ã�� �� �����ϴ�." << endl;

	return 0;

}