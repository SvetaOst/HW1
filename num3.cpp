// num3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a[12] = {1, 3, 10, 5, -2, 9, 6, -1, 5, 8, -4, 0};
	int x0, y0, R;
	int k= 0;
	cin >> x0 >> y0 >> R;
	for (int i = 0; i < 11; i+=2)
		if (((x0-a[i])*(x0-a[i]) + (y0-a[i+1])*(y0-a[i+1])) == (R*R))
			k++;
	cout  << " оличество точек, лежащих на границе окружности: " << k << endl;
	system ("pause");
	return 0;
}

