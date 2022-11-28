#pragma once

class Complex1 {
	double rPart, iPart;	// 실수부 및 허수부

public:
	Complex1(double r = 0, double i = 0) : rPart(r), iPart(i) {}	// 생성자, 디폴트값은 둘다 0

	Complex1 conj() const{					// 켤레 복소수 출력(변환불가므로 const)
		return Complex1(rPart - iPart);		// 허수부가 반대 부호인 임시객체를 생성 후 return
	}

	Complex1 add(const Complex1& c) const {
		return Complex1(rPart + c.rPart, iPart + c.iPart);
	}

	Complex1 sub(const Complex1& c) const {
		return Complex1(rPart - c.rPart, iPart - c.iPart);
	}

	Complex1 mul(const Complex1& c) const;
	Complex1 div(const Complex1& c) const;
	void display() const;


};