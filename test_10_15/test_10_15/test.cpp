#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

//模拟实现静态顺序表


const int N = 1e5 + 10;
int a[N]; //约定从下标为1开始存放有效数据；
int n; //记录有效元素的个数；

void PushBack(int i)
{
	a[++n] = i;
}

void PushFront(int d)
{
	for (int i = n; i >= 1; i--)
	{
		a[i + 1] = a[i];
	}
	a[1] = d;
	n++;
}

void print()
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
		cout << a[i] << " ";

	}
	cout << endl << endl;
}


int main()
{
	PushBack(1);
	PushBack(2);
	PushBack(3);
	PushBack(4);
	PushFront(8);
	print();


	return 0;
}