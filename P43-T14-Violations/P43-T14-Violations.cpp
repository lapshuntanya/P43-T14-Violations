#include "Date.h"
#include "Violation.h"
#include <Windows.h>

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

	Violation a{ {1, 1, 2000}, "Перевищення швидкости 200 км/год", 15'000 };
	Violation b; // {0, 0, 0}, "", 0
	b.fillViol();

	cout << "================================\n";
	a.printViol();
	b.printViol();

}

