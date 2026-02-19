#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", n);

	return 0;
}


int main() {
	double a = 1.0e5;
	printf("%lfdjej", a);


	return 0;
}

#include<iostream>

using namespace std;

int main()
{
	double a = 1e5;
	cout << a << endl;


	return 0;
}


#include<stdio.h>

int main()
{
	char a = 0;
	scanf("%d", &a);
	printf("%c\n", a);



	return 0;
}


#include<stdio.h>

int main()
{
	int a = 5;
	int b = 2;
	printf("%lf %lf", (double)(a / b), (a / 2.0));
	return 0;



}

#include<stdio.h>

int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int z = b - a;
	int count1 = 0;
	int count2 = 0;
	count1 = z / 60;
	count2 = z % 60;
	printf("%03d:%03d", count1, count2);


	return 0;
}