#include <iostream>
#include "Pencils.h"
using namespace std;

// 단항연산자 전위표시법(++) 선언
// 낱개의 값을 먼저 1 증가하고 12와 비교
// 12가 넘으면 dozens 데이터멤버의 수 1 증가 후, np 초기화
// return 값으로 본인객체의 값을 반환
Pencils& Pencils::operator++() {
	if (++np >= 12)
		++dozens, np = 0;
	return *this;
}

// 단항연산자 후위표시법(++) 선언
// 원래의 값을 저장할 임시 객체 선언(tmp)
// 전위표시법와 같은 조건문 진행
// 원래 값인 tmp 객체 값 반환
Pencils Pencils::operator++(int) {
	Pencils tmp(*this);
	if (++np >= 12)
		++dozens, np = 0;
	return tmp;
}

void Pencils::display() const {
	if (dozens) {
		cout << dozens << "타 ";
		if (np) cout << np << "자루";
		cout << endl;
	}
	else
		cout << np << "자루" << endl;
}