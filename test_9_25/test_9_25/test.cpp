#define _CRT_SECURE_NO_WARNINGS
//
#include<iostream>
using namespace std;

int main()
{
	cout << " \"  Hello world !   \" ";
	int x = 0, y = 0;
	int z = 0;

	int m;
	if (x < y)
		m = x;
	else
		m = y;
	if (z < m)
		m = z;

	return 0;
}


#include<iostream>
using namespace std;

//int main()
//{
//	int a = 10, b = 20;
//	cout << " a + b = " << a + b << endl;
//
//	return 0;
//}

int add(int, int);

int main()
{
	int a = 20, b = 10;
	int c = add(a, b);
	cout << " a + b = " << c << endl;
	return 0;
}

int add(int x, int y)
{
	int n = x + y;
	return n;
}


void sort(int* a, int* b, int* c)
{
	int tem = 0;
	if (*a > *b)
	{
		tem = *a;
		*a = *b;
		*b = tem;
	}
	if (*a > *c)
	{
		tem = *a;
		*a = *c;
		*c = tem;
	}
	if (*b > *c)
	{
		tem = *b;
		*b = *c;
		*c = tem;
	}
}



int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	
	cin >> x >> y >> z;

	sort(&x, &y, &z);
	
	cout << x <<" " << y<< " " << z;

}