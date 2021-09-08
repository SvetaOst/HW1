// num2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a[10] = {19, 8, 10, 45, 32, 9, 16, 11, 5, 58};
	int k= 0;
	for (int i = 1; i < 9; i++)
		if ((a[i] < a[i-1])&&(a[i] < a[i+1]))
			k++;
	cout  << "Количество локальных минимумов в заданном массиве: " << k;
	system ("pause");
	return 0;
}

