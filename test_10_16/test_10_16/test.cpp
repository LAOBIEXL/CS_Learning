#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

//封装

const int N = 1e5 + 10;


struct Sqlist {
	int a[N] = { 0 };
	
	int n ;

public:

	//使用构造函数初始化
	Sqlist()
	{
		n = 0;
		
	}

	void print()
	{
		for (int i = 1; i <= n; i++)
		{
			cout << a[i] << endl;
		}
		cout << endl << endl;
	}


	//添加元素组
	void PushBack(int d)
	{
		a[++n] = d;
	}

	void PushFront(int d)
	{
		for (int i = n; i >= 1; i--)
		{
			a[i +1] = a[i];
		}
		a[1] = d;
		n++;
	}

	void Insert(int p, int d)
	{
		for (int i = n; i >= p; i--)
		{
			a[i+1] = a[i];
		}
		a[p] = d;
		n++;
	}


	//删除元素组

	void PopBack()
	{
		n--;
	}

	void PopFront()
	{
		for (int i = 2; i <= n; i++)
		{
			a[i - 1] = a[i];
		}
		n--;
	}

	~ Sqlist()
	{
		n = 0;
		cout << "调用析构函数" << endl;
	}

	//查找

	int searchnum(int k)
	{
		for (int i = 1; i <= n; i++)
		{
			if (a[i] == k)
			{
				return i;
			}
		}
		return -1;
	}
	
	int searchbit(int p)
	{
		return a[p];
	}

};


int main()
{
	Sqlist a;
	a.PushBack(1);
	a.PushBack(2);
	a.PushBack(3);
	a.PushBack(4);
	a.PushBack(5);
	a.print();

	a.PushFront(88);
	a.PopBack();
	a.Insert(3, 999);
	a.print();

	

	return 0;
}






//
//
//
//
//
//
//
//
//int a[N];
//
//int n;
//
//void PushBack(int d)
//{
//	a[++n] = d;
//}
//
//void PushFront(int d)
//{
//	for (int i = n; i >= 1; i--)
//	{
//		a[i + 1] = a[i];
//	}
//	a[1] = d;
//	n++;
//}
//
//void Print()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl << endl;
//}
//
////任意位置插入
//
//void Insert(int d,int p)
//{
//	for (int i = n; i >= p; i--)
//	{
//		a[i + 1] = a[i];
//	}
//	a[p] = d;
//	n++;
//}
//
////尾部删除
//void PopBack()
//{
//	n--;
//	//直接不管被删掉的那个数据，将总数减少一；
//}
//
////头部删除
//void PopFront()
//{
//	for (int i = 1; i < n; i++)
//	{
//		a[i] = a[i + 1];
//	}
//	n--;
//}
//
////删除任意位置的元素
//
//void Pop(int p)
//{
//	for (int i = p + 1; i <= n; i++)
//	{
//		a[i - 1] = a[i];
//	}
//	n--;
//}
//
////查找
//int find_my(int x)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (x == a[i])
//			return i;
//	}
//	return -1;
//}
//
////按位
//int find_p(int x)
//{
//	return a[x];
//}
//
////修改
//void change(int p, int x)
//{
//	a[p] = x;
//}
//
////清空顺序表
//void clear()
//{
//	n = 0;
//	//在申请了内存的情况下，需要循环遍历变量n去释放空间
//}
//
//
//
//
//
//int main()
//{
//	PushBack(1);
//	PushBack(2);
//	PushBack(3);
//	PushBack(4);
//	PushFront(9);
//	Print();
//
//	Insert(212, 3);
//	Print();
//
//	//PopBack();
//	//Print();
//
//	//PopFront();
//	//PopFront();
//	//Print();
//
//	//Pop(2);
//	//Print();
//
//	cout << find_my(212) << endl;
//	cout << find_my(200) << endl;
//
//
//
//	return 0;
//}