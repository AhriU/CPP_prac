#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char str1[40] = "C style string";
	char str2[] = "Object-Oriendted ";
	const char* str3 = "Programming";

	cout << str1 << endl;
	cout << str3 << "�� ���ڿ� ���̴� : ";
	cout << strlen(str3) << endl;
	
	// �����ϱ�
	strcpy(str1, str2);
	cout << str1 << endl;

	// �̾���̱�
	strcat(str1, str3);
	cout << str1 << endl;
	return 0;

}