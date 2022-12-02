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
		{"한정훈", "010-2233-4354"},
		{"박영철", "010-2233-4455"}
	};
	PBook["김철수"] = "010-1234-5678";

	PBook.insert(make_pair("최승호", "010-7531-3456"));

	// insert("박영철","010-1357-2468");은 오류발생
	// 박영철은 이미 있으므로 등록되지 않음
	PBook.insert(make_pair("박영철", "010-1357-2468"));

	for (auto pb = PBook.begin(); pb != PBook.end(); ++pb)
		cout << pb->first << " " << pb->second << endl;
	cout << PBook.size() << "명이 등록되어 있습니다." << endl;



	// key값을 이용하여 value를 찾는 find 사용
	string str;
	cout << endl << "찾을 이름 : ";
	cin >> str;
	auto result = PBook.find(str);
	if (result != PBook.end()) {
		cout << result->first << "님의 전화번호는 ";
		cout << result->second << "입니다." << endl;
	}
	else
		cout << str << "님을 찾을 수 없습니다." << endl;

	return 0;

}