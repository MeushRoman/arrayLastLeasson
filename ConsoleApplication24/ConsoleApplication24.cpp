// ConsoleApplication24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void main()
{
	srand(time(NULL));

	int a[10];

	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
		
		cout <<setw(5) << a[i];
	}
	cout << endl;

	int s = 0;
	for (int pass = 9; pass > 0; pass--)
	{
		//int i = pass;
		for (int i = pass; i < 9; i++)
		{

			if (a[i] > 0) {
				s++;
				swap(a[i], a[i + s]);
			}


			cout << setw(5) << a[i];
		}
	}
	cout << endl;
	/*int b[3][4];
	int c[3][4];
	int x;

	int a[3][4][4];
	int i, j;

	for (int t = 0; t < 3; t++)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				a[t][i][j] = rand() % 100;	
				cout << setw(5) << a[t][i][j];
				if (i == j) b[t][j] = a[t][i][j];
				if (i + j == 3) c[t][j] = a[t][i][j];
			}
			cout << endl;
		
		}
		cout << endl;
	
	}
	cout << "Glavnaya......\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setw(5) << b[i][j];
		}
		cout << endl;
	}
	cout << "Pobo4naya.....\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setw(5) << c[i][j];
		}
		cout << endl;
	}*/
	
	/*
	int max = INT_MIN;
	int sum = 0;

	for (int t = 0; t < 3; t++)
	{	
		
		sum = 0;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				a[t][i][j] = rand() % 100;
				cout << setw(5) << a[t][i][j];
				sum += a[t][i][j];
			}
			cout << endl;
		}
		cout << endl;
		if (sum > max) max = sum;
		cout << sum << endl;
	}
	cout << "max = " << max << endl << endl;*/
}


