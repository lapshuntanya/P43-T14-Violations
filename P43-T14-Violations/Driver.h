#pragma once
#include "Violation.h"

struct  Driver
{
	char name[100] = "";				//��'� ����
	char carNumber[10] = "";			//����� ����
	int size_viol = 0;					//ʳ����� �������� = ����� ������
	Violation* arr_viol = nullptr;		//������ �������� = �����

	void fillDriver() {
		cout << "������ ����� ��'� ���������: ";
		cin.getline(name, 100);
		cout << "������ ����� ���� (AX0000AX): ";
		cin >> carNumber;

		cout << "������ ���������� �� ���� ���������:\n";
		size_viol = 1;
		arr_viol = new Violation[1];
		arr_viol[0].fillViol();
	}
};