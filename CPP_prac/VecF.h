#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class VecF {

	int n;          //벡터의 저장할 float의 수 
	float* arr;     // 저장할 공간을 가르키는 ptr

public:
	VecF(int d, float* a = nullptr) : n{ d } {			// 생성자, 벡터를 저장할 float의 수는 d, 저장할 공간을 가르키는 ptr은 a에 받고, 디폴트 값은 nullptr
		arr = new float[d];								// 생성되는 객체에 arr은 d만큼의 float 배열이 생성
		if (a) memcpy(arr, a, sizeof(float) * n);		// a가 nullptr이 아니라면 float의 크기(4byte) * n의 크기만큼 a -> arr 로 값을 복사 
	}

	VecF(const VecF& fv) : n{ fv.n } {					// 복사 생성자 생성, 복사된 n에는 fv.n의 값을 대입
		arr = new float[n];								// n의 개수만큼 새로운 float 배열 생성
		memcpy(arr, fv.arr, sizeof(float) * n);			// float의 크기 * n의 만큼 fv.arr의 값을 arr로 대입
	}

	Vecf(const VecF&& fv) : n{ fv.n }, arr{ fv.arr } {					// 이동생성자 생성, 이동생성자의 n은 fv.n의 값을 대입
		fv.arr = nullptr;								// fv.arr은 nullptr로 초기화
		fv.n = 0;										// fv.n 은 0으로 초기화
	}


	~VecF() {
		delete[]arr;		// 소멸자, arr의 동적할당을 삭제
	}

	VecF add(const VecF& fv)const {				// 백터값을 더하는 함수 add, const 참조를 통해 원본의 값을 복사, 뒤의 const는 add 함수 내에서 값 수정 불가를 알림
		VecF tmp(n);							// 임시 저장할 VecF크기의 객체 생성
		for (int i = 0; i < n; i++) {			// n의 수만큼 반복
			tmp.arr[i] = arr[i] + fv.arr[i];		// 현재의 arr의 값과 복사시킬 객체의 arr의 값을 더한 후 tmp.arr에 저장
		}
		return tmp;								// tmp 객체 반환
	}

	void print()const {							// 백터 값을 출력하는 함수
		cout << "[ ";							// [ 출력
		for (int i = 0; i < n; i++)				// n의 수만큼 반복
			cout << arr[i] << " ";				// arr의 요소 출력 후 띄어쓰기
		cout << "]";							// ] 출력
	}

};