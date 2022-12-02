#include <iostream>
#include <vector>
using namespace std;

int main() {

	// int 자료형을 가지는 벡터를 선언
	// 5개의 메모리 크기를 선언
	vector<int> IntVec(5);

	// 각각의 요소에 i + 1의 데이터를 넣음
	for (int i = 0; i < IntVec.size(); i++) {
		IntVec[i] = i + 1;
	}

	// 논리적인 크기와 물리적 크기, 데이터를 출력
	cout << "백터의 논리적인 크기 : " << IntVec.size() << endl;
	cout << "백터의 물리적인 크기 : " << IntVec.capacity() << endl;
	cout << "저장된 데이터 : ";
	for (int i = 0; i < IntVec.size(); i++) {
		cout << IntVec[i] << " ";

	}

	// push_back을 통해 11을 백터 마지막에 대입
	cout << endl << endl << "1개의 데이터 push_back" << endl;
	IntVec.push_back(11);

	// 다시 출력
	// 논리적인 크기는 6, 물리적 크기는 7이 나옴(변동 가능)
	// 논리적 크기에 비해 물리적 크기가 더 많이 커짐
	// 동작속도 증가를 위해 미리 메모리를 확보하는 것.
	cout << "백터의 논리적인 크기 : " << IntVec.size() << endl;
	cout << "백터의 물리적인 크기 : " << IntVec.capacity() << endl;
	cout << "저장된 데이터 : ";
	for (int i = 0; i < IntVec.size(); i++) {
		cout << IntVec[i] << " ";
	}

	// 5개의 데이터 push_back
	cout << endl << endl << "5개의 데이터 push_back" << endl;
	for (int i = 1; i < 6; i++) {
		IntVec.push_back(11 + i);
	}

	// 마찬가지로 논리적인 크기는 11, 물리적인 크기는 15
	// 데이터가 더 추가될 가능성이 있다고 보기 때문에
	// 더 많은 메모리 확보
	cout << "백터의 논리적인 크기 : " << IntVec.size() << endl;
	cout << "백터의 물리적인 크기 : " << IntVec.capacity() << endl;
	cout << "저장된 데이터 : ";
	for (int i = 0; i < IntVec.size(); i++) {
		cout << IntVec[i] << " ";
	}

	// pop_back으로 끝의 데이터를 3번 제거
	cout << endl << endl << "3개의 데이터 pop_back" << endl;
	for (int i = 0; i < 3; i++) {
		IntVec.pop_back();
	}

	// 논리적인 크기는 8, 물리적인 크기는 15
	// 논리적인 크기는 줄어든 반면 물리적인 크기에는 변동사항이 없다.
	cout << "백터의 논리적인 크기 : " << IntVec.size() << endl;
	cout << "백터의 물리적인 크기 : " << IntVec.capacity() << endl;
	cout << "저장된 데이터 : ";
	for (int i = 0; i < IntVec.size(); i++) {
		cout << IntVec[i] << " ";
	}

	return 0;
}