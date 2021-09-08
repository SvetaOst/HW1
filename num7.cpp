// num7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout  << "¬ведите размер массива" << endl;
	cin >> N;
	int **a;
	a = new  int *[N];
	for (int i = 0; i < N; i++)
		a[i] = new  int [N];
	int k = 1, c = 0, m = 0;
	for (int i = 1; i < N; i++)
		m += i;

	while (k <= (N*N - m))
	{

		for (int i = c; i < N-c; i++)
		{
			if (k <= (N*N - m))
			{
				a[i][c] = k;
				k++;
			}
		}

		for (int j = c+1; j < N-c-1; j++)
		{
			if (k <= (N*N - m))
			{
				a[N-1-c][j] = k;
				k++;
			}
		}

		for (int i = N-1-c-c; i >= c+2; i--)
		{
			if (k <= (N*N - m))
			{
				a[i][i-c] = k;
				k++;
			}
		}
	c++;
	}
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (a[i][j] > 0) continue;
			else a[i][j] = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
	system ("pause");
	return 0;
}

