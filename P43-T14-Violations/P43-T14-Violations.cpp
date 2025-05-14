#include "Date.h"
#include "Violation.h"
#include <Windows.h>
#include "Driver.h"

int main()
{
	/*Date my_date = {15, 8, 2000};

	Date now; //0 0 0
	now.getNowDate();

	my_date.printDate();
	now.printDate();
	cout << "================================\n";
	cout << my_date.toString() << endl;
	cout << my_date.toString("%y-%m-%d") << endl;
	cout << my_date.toString("%d %b %Y") << endl;*/

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Violation a{{1, 1, 2000}, "Перевищення швидкости 200 км/год", 15'000};
	Violation b; // {0, 0, 0}, "", 0
	b.fillViol();

	cout << "================================\n";
	a.printViol();
	b.printViol();*/

	/*Driver a{"Pupkin Oleh Viktorovych", "BI1234IO", 2, new Violation[2]{
		{{1, 1, 2025}, "Перевищення швидкості 200 км/год", 15'000},
		{{14, 5, 2025}, "Проїзд на заборонений знак", 4'500}
	} };

	Driver b;
	b.fillDriver();
	cout << "======================================\n";

	a.printDriver();
	b.printDriver();*/

	//==================================================
	//==================================================
	//==================================================
	//==================================================

	int NDrivers = 3;
	Driver* arr_drivers = new Driver[3]{
		{
			"Пупкін Василь Вікторович", "BI1234IO", 2, new Violation[2]{
				{{1, 1, 2025}, "Перевищення швидкості 200 км/год", 15'000},
				{{14, 5, 2025}, "Проїзд на заборонений знак", 4'500}
			}
		},
		{
			"Шевченко Микола Семенович", "AX2345AX", 1, new Violation[1]{
				{{21, 11, 2024}, "Перевищення швидкості 160 км/год", 12'000},
			}
		},
		{
			"Семенчук Галина Перівна", "AA1111AA", 1, new Violation[1]{
				{{11, 4, 2024}, "Паркування", 2'000},
			}
		}
	};


	int menu = 0;
	Violation tmp_viol;
	Driver tmp_driver;
	char text[100] = "";

	do
	{
		cout << "=====================================\n";
		cout << "\t МЕНЮ:\n";
		cout << "=====================================\n";
		cout << "0 - Вийти\n";
		cout << "1 - Показати список всіх порушників\n";
		cout << "2 - Додати нове порушення за номером авто\n";
		cout << "3 - Знайти порушника за номером авто\n";
		cout << "=====================================\n";
		cout << ">>> ";
		cin >> menu;
	 
		switch (menu)
		{
		default: cout << "Помилка вибору.\n";  break;
		case 0: cout << "До побачення =) \n";  break;
		case 1:
			for (int i = 0; i < NDrivers; i++)
			{
				arr_drivers[i].printDriver();
			}
			break;
		case 2:
		{
			cout << "Введіть номер авто (АХ0000АХ): ";
			cin >> text;
			int id = -1;
			for (int i = 0; i < NDrivers; i++)
			{
				if (_stricmp(arr_drivers[i].carNumber, text) == 0)
				{
					id = i; break;
				}
			}

			if (id == -1) {
				cout << "----- НОВИЙ ПОРУШНИК ------\n";
				cin.ignore();
				tmp_driver.fillDriver();
				addItemBack(arr_drivers, NDrivers, tmp_driver);
			}
			else {
				cout << "----- НОВЕ ПОРУШЕННЯ ------\n";
				arr_drivers[id].addNewViol();
			}
		}
			break;
		}

	} while (menu != 0);
}

