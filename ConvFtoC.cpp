#include <iostream>
using namespace std;

float FahrToC(float fahr)
{
	return (fahr - 32) * 5 / 9;
}

int mainConvFtoC()
{
	float fTemp, cTemp;

	cout << "ȭ���µ� : ";
	cin >> fTemp;
	cTemp = FahrToC(fTemp);
	cout << "---> �����µ� : " << cTemp << endl;
	return 0;
}