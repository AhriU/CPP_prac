#pragma once

class Pencils {
	int dozens;
	int np;
public:
	// 인수가 없을 때의 생성자
	Pencils() : dozens{ 0 }, np{ 0 }{}				

	// 인수가 하나일 떄의 생성자(타가 없는 낱개수)
	// 12로 나눠 타 수, 낱개 수에 대입
	Pencils(int n) {								
		dozens = n / 12, np = n % 12;				
	}

	// 인수가 두개일 때의 생성자(타, 낱개)
	Pencils(int d, int n) : dozens{ d }, np{ n }{}	

	// Pencils 객체의 전위표기법 단항연산자 원형
	Pencils& operator ++();							

	// Pencils 객체의 후위표기법 단항연산자 원형
	Pencils operator++(int);

	// dozens와 np의 값을 보여 줄 멤버함수
	void display() const;

};