#include <iostream>
#include "MyString.h"
using namespace std;

int main() {
	Mystring str1("MyString class");
	Mystring str2("Object Oriented ");
	Mystring str3;

	cout << str1 << endl;
	str3 = "Programming";
	cout << str3 << "의 문자열 길이는 : ";
	cout << str3.length() << endl;

	str1 = str2;
	cout << str1 << endl;
	str1 = str2 + str3;
	cout << str1 << endl;

	Mystring str4(str3);
	cout << str4 << endl;

	str2 += "Programming";
	cout << str2 << endl;

	str2[6] = '-';
	cout << str2 << endl;
	return 0;
}