#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char str1[40] = "C style string";
	char str2[] = "Object-Oriendted ";
	const char* str3 = "Programming";

	cout << str1 << endl;
	cout << str3 << "의 문자열 길이는 : ";
	cout << strlen(str3) << endl;
	
	// 복사하기
	strcpy(str1, str2);
	cout << str1 << endl;

	// 이어붙이기
	strcat(str1, str3);
	cout << str1 << endl;
	return 0;

}