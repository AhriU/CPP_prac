#pragma once

class Pencils {
	int dozens;
	int np;
public:
	// �μ��� ���� ���� ������
	Pencils() : dozens{ 0 }, np{ 0 }{}				

	// �μ��� �ϳ��� ���� ������(Ÿ�� ���� ������)
	// 12�� ���� Ÿ ��, ���� ���� ����
	Pencils(int n) {								
		dozens = n / 12, np = n % 12;				
	}

	// �μ��� �ΰ��� ���� ������(Ÿ, ����)
	Pencils(int d, int n) : dozens{ d }, np{ n }{}	

	// Pencils ��ü�� ����ǥ��� ���׿����� ����
	Pencils& operator ++();							

	// Pencils ��ü�� ����ǥ��� ���׿����� ����
	Pencils operator++(int);

	// dozens�� np�� ���� ���� �� ����Լ�
	void display() const;

};