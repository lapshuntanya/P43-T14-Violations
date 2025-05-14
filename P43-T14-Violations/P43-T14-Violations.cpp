#include "Date.h"

int main()
{
	Date my_date = { 15, 8, 2000 };

	Date now; //0 0 0
	now.getNowDate();

	my_date.printDate();
	now.printDate();
	cout << "================================\n";
	cout << my_date.toString() << endl;
	cout << my_date.toString("%y-%m-%d") << endl;
	cout << my_date.toString("%d %b %Y") << endl;
}

