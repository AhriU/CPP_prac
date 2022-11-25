#pragma once

#include <iostream>
using namespace std;

class SafeInArray {

	int limit;
	int* arr;

public:

	SafeInArray(int n) : limit{ n } {		// 생성자
		arr = new int[n];
	}

	~SafeInArray(){							// 소멸자
		delete[]arr;
	}

	int size() const { return limit; }		// 크기를 반환하는 멤버함수

	int& operator [](int i) {				// 대입용 [] 연산자 다중정의
		if (i < 0 || i > limit)	{
			cout << "첨자가 범위를 벗어나 프로그램을 종료합니다.";
			exit(EXIT_FAILURE);
		}
		return arr[i];						// arr[i] 참조를 반환
	}

	int operator []( int i) const{			// 출력용 [] 연산자 다중정의
		if (i < 0 || i > limit) {
			cout << "첨자가 범위를 벗어나 프로그램을 종료합니다.";
			exit(EXIT_FAILURE);
		}
		return arr[i];
	}

};