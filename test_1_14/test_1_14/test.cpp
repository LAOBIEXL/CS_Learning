#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

int main()
{
	int a[] = { 3, 4, 2, 5,7, 5, 8, 2 };
	for (int i = 0; i < 7; i++)
	{
		
		for (int j = 0; j < 7 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < 8; i++)
	{
		cout << a[i] << " ";
	}


	return 0;
}