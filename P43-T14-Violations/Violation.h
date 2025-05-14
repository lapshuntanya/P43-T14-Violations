#pragma once
#include "Date.h"

struct  Violation
{
	Date date_viol;			//Дата порушення
	char info[100] = "";	//Опис порушення
	float fine = 0;			//Сума штрафу


	void fillViol() {

	}
};