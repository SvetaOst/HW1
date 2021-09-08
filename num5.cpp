// num4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a[4][10] = {{19, 8, 10, 45, 32, 9, 16, 11, 5, 58},
				{1, 328, 810, 46, 302, 39, 0, 10, 5, -58},
				{-3, 68, 54, 39, 3, 8, 12, 90, -15, 56},
				{18, 32, 5, 4, 600, 29, 55, 101, 23, 5}};
	int *m = new  int; 
	int k = 0, pr = 1;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((a[i][j] <= 10) && (a[i][j] >= 1))
			{
				m[k] = a[i][j];
				pr = pr*a[i][j];
				k++;
			}
		}
	}

	cout  << "Произведение элементов полученного массива: " << pr << endl;

	system ("pause");
	return 0;
}

