#pragma once
#include "Date.h"

struct  Violation
{
	Date date_viol;			//Дата порушення
	char info[100] = "";	//Опис порушення
	float fine = 0;			//Сума штрафу


	void fillViol() {
		cout << "Введіть дату порушення (dd mm yyyy): ";
		cin >> date_viol.day >> date_viol.month >> date_viol.year;
		cout << "Введіть опис (максимум 99 символів): ";
		//Ігноруємо попередній ентер
		cin.ignore();
		cin.getline(info, 100);
		cout << "введіть суму штафу (грн.): ";
		cin >> fine;
	}

	void printViol() {
		cout << "\t" << date_viol.toString("%d.%m.%Y") << " Штраф: " << fine << " грн. => " << info << endl;
	}
};