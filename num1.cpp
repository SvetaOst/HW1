// num1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int N;
	cout  << "������� ���������� ���� � �����" << endl;
	cin >> N;
	int *a = new  int [N];
	cout << endl << "������� ����� � ���������� ������� ���������" << endl;
	for (int i = 0; i < N; i++)
		cin >> a[i];

	int pr = 0;
	for (int i = 0; i < N; i++)
		if (a[i] >= 7)
			pr++;
	if (pr == 0)
	{
		int rez = 0;
		for (int i = 0; i < N; i++)
		{
			rez += a[i]*pow(7,(N-i-1));
		}
		cout << endl << "��� ����� � ���������� ������� ��������� = " << rez;
	}
	else cout << endl << "����� ������� �� � ���������� ������� ��������� ";
	
	system ("pause");
	return 0;
}

