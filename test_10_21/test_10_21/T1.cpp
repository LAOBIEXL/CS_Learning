#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//using namespace std;

////静态链表的实现：
//
//const int N = 1e5 + 10;
//
//int e[N], ne[N];
//int id;
//int h;
//
//
////循环变量
//
////头插：
//void Push_Front(int d)
//{
//	id++;
//	e[id] = d;
//	ne[id] = ne[h];
//	ne[h] = id;
//}
//
//void Print()
//{
//	/*int i = ne[h];
//	while (i)
//	{
//		cout << e[i] << " ";
//		i = ne[i];
//	}*/
//
//	for (int i = ne[h]; i; i = ne[i])
//	{
//		cout << e[i] << " ";
//	}
//
//	cout << endl; 
//}
//
////按值查找：
//
//
//
//int main()
//{
//	Push_Front(1);
//	Push_Front(2);
//	Push_Front(3);
//	Push_Front(4);
//	
//	Print();
//
//
//
//}
//
//const int N = 1e5 + 10;
//int ne[N], map[N], e[N];
//int h, id;
//
//void Push_Front(int d)
//{
//	e[++id] = d;
//	map[d] = id;
//	ne[id] = ne[h];
//	ne[h] = id;
//}
//
//void Print()
//{
//	for (int i = ne[h]; i; i = ne[i])
//	{
//		cout << e[i] << " ";
//	}
//	cout << endl;
//}
//
////在任意位置之后插入元素：注意这里的位置是存储地址，并不代表逻辑上的链表第几个
//void insert(int p, int x)
//{
//	e[++id] = x;
//	map[x] = id;
//	ne[id] = ne[p];
//	ne[p] = id;
//}
//
//////删除任意位置元素之后的元素：
////void erase(int p)
////{
////	ne[p] = ne[ne[p]];
////	map[e[ne[p]]] = 0;
////	//存在bug
////}
//
//void erase(int p)
//{
//	if (ne[p])
//	{
//		map[ne[p]] = 0;
//		ne[p] = ne[ne[p]];
//	}
//}
//
//
////按值查找函数
//int find(int x)
//{
//	return map[x];//时间复杂度O(1);
//}
//
//
//int main()
//{
//	Push_Front(1);   //1
//	Push_Front(3);   //2
//	Push_Front(5);   //3
//	Push_Front(7);   //4
//	Print();
//
//	cout << find(5) << endl;
//
//	insert(3, 6);
//	Print();
//
//	erase(1);
//	Print();
//
//	erase(3);
//	Print();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//const int N = 1e5;
//
//int h, id;
//
//int pre[N], ne[N], e[N], map[N];
////额外创建一个数组用来存储前驱的下标
//
//void Push_Front(int d)
//{
//	e[++id] = d;
//	map[d] = id;
//
//	pre[id] = h;
//	ne[id] = ne[h];
//	pre[ne[h]] = id;
//	ne[h] = id;
//}
//
//void Print()
//{
//	for (int i = ne[h]; i; i = ne[i])
//	{
//		cout << e[i] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	Push_Front(1);
//	Push_Front(2);
//	Push_Front(3);
//	Push_Front(4);
//
//
//	Print();
//
//
//
//
//	return 0;
//}

#include<iostream>
using namespace std;

const int N = 1e5;
int pre[N], ne[N], e[N], mp[N];

int h, id;

void Print()
{
	for (int i = ne[h]; i; i = ne[i])
	{
		cout << e[i] << " ";
	}
	cout << endl << endl;
}

void insert_back(int p, int x)
{
	e[++id] = x;
	mp[x] = id;

	pre[id] = p;
	ne[id] = ne[p];

	pre[ne[p]] = id;
	ne[p] = id;
}

void Push_Front(int x)
{
	e[++id] = x;
	mp[x] = id;

	pre[id] = h;
	ne[id] = ne[h];
	pre[ne[h]] = id;
	ne[h] = id;

}

int find(int x)
{
	return mp[x];
}

void insert_front(int p, int x)
{
	e[++id] = x;
	mp[x] = id;

	ne[id] = p;
	pre[id] = pre[p];

	ne[pre[p]] = id;
	pre[p] = id;
}

int main()
{
	Push_Front(5);
	Push_Front(4);
	Push_Front(3);
	Push_Front(2);
	Push_Front(1);

	Print();

	cout << find(4);

	insert_back(3, 996);
	Print();

	insert_back(2, 88);
	Print();

	insert_front(7, 715);
	Print();
	cout << find(88);

	return 0;
}