#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	char a[] = "hello world";
	a[11] = ' ';
	cout << a << endl;
	
	char b[] = "hello world";
	memset(b, 'x', 12);
	cout << b << endl;


}