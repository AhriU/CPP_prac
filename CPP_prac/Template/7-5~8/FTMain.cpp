#include <iostream>
#include "SortFT.h"
#include "MyString.h"
using namespace std;

int main() {

	// ���� ������ int ��
	int x[10] = { 6,0,3,1,2,9,4,5,7,8 };
	SortFT(x, 10);
	for (auto i : x)
		cout << x[i] << " ";
	cout << endl;

	// ���� ������ Mystring ��
	Mystring s[5] = { "def", "abc", "jkl", "ghi", "mno" };
	SortFT(s, 5);
	for (auto str : s)
		cout << str << " ";
	cout << endl;

	return 0;
}