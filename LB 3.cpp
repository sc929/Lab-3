#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "(k=1 ->  ) = ((-3)^(3k+1))/k" << endl; //Выводим пример
	double res = 0;
	for (double k = 1; ((pow(-1, 3 * k - 1)) / (5 * k)) > 0.00000001 || ((pow(-1, 3 * k - 1)) / (5 * k)) < -0.00000001; k++)
	{
		res = res + (pow(-1, 3 * k - 1)) / (5 * k); //Расчитываем пример
	}
	cout << res << endl;
	_getch();
	return 0;
}
