#pragma once
#include "Violation.h"

struct  Driver
{
	char name[100] = "";				//Ім'я водія
	char carNumber[10] = "";			//Номер авто
	int size_viol = 0;					//Кількіть порушень = розмір масиву
	Violation* arr_viol = nullptr;		//Список порушень = масив

	void fillDriver() {
		cout << "Введіть повне ім'я порушника: ";
		cin.getline(name, 100);
		cout << "Введіть номер авто (AX0000AX): ";
		cin >> carNumber;

		cout << "Введіть інформацію по його порушенню:\n";
		size_viol = 1;
		arr_viol = new Violation[1];
		arr_viol[0].fillViol();
	}
};