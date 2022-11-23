#include <iostream>
using namespace std;

int main2()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum = 0;
	for (int &a : arr) sum = ++a;
	cout << "합계는 : " << sum << endl;
	for (int i = 0; i < 10; i++) cout << arr[i] << ", ";
	return 0;
}
