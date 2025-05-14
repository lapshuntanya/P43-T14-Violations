#pragma once
#include "Violation.h"
#include "ArrayTemplate.h"

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

	void printDriver() {
		cout << "����: " << name << endl;
		cout << "����:  " << carNumber << endl;
		cout << "��������:  " << size_viol << endl;
		for (int i = 0; i < size_viol; i++)
		{
			cout << i + 1 << ". ";
			arr_viol[i].printViol();
		}
		cout << endl;
	}

	void addNewViol() {
		Violation obj;
		cout << "������ ���������� ��� ���� ���������:\n";
		obj.fillViol();

		addItemBack(arr_viol, size_viol, obj);
		cout << "���� ��������� �����������!!!\n\n";
	}
};