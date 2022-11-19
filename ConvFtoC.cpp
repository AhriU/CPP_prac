#include <iostream>
using namespace std;

float FahrToC(float fahr)
{
	return (fahr - 32) * 5 / 9;
}

int mainConvFtoC()
{
	float fTemp, cTemp;

	cout << "È­¾¾¿Âµµ : ";
	cin >> fTemp;
	cTemp = FahrToC(fTemp);
	cout << "---> ¼·¾¾¿Âµµ : " << cTemp << endl;
	return 0;
}