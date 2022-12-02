#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	// int형 백터(5) 선언 및 데이터 대입
	vector<int> IntVec(5);
	for (int i = 0; i < IntVec.size(); i++) {
		IntVec[i] = i + 1;
	}

	// begin()함수의 값(백터의 시작 데이터 주소)를 반복자 it에 대입
	// it은 이제 포인터처럼 사용이 가능하다
	// 반복문에서는 IntVec의 end함수로 백터의 마지막 데이터까지 출력하도록 함
	// *it 과 같이 포인터 구문 사용가능

	// vector<int>::iterator it 은 auto it으로 축소가 가능하다.
	// auto it = IntVec.begin();
	vector<int>::iterator it = IntVec.begin();
	cout << "저장된 데이터 : ";
	for (; it < IntVec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// 마찬가지로 포인터 구문 사용
	it = IntVec.begin();
	cout << "3번째 데이터 : ";
	cout << *(it + 2) << endl;

	return 0;

}