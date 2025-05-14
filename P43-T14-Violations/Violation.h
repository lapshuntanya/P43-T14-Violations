#pragma once
#include "Date.h"

struct  Violation
{
	Date date_viol;			//���� ���������
	char info[100] = "";	//���� ���������
	float fine = 0;			//���� ������


	void fillViol() {
		cout << "������ ���� ��������� (dd mm yyyy): ";
		cin >> date_viol.day >> date_viol.month >> date_viol.year;
		cout << "������ ���� (�������� 99 �������): ";
		//�������� ��������� �����
		cin.ignore();
		cin.getline(info, 100);
		cout << "������ ���� ����� (���.): ";
		cin >> fine;
	}

	void printViol() {
		cout << "\t" << date_viol.toString("%d.%m.%Y") << " �����: " << fine << " ���. => " << info << endl;
	}
};