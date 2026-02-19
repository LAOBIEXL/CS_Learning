#define _CRT_SECURE_NO_WARNINGS


#include<iostream>
#include<cstdio>
using namespace std;

//int main()
//{
//	int* p = new int(100);
//
//	
//	cout << *p << endl;
//
//	cout << p << endl;
//
//	delete p;
//	p = NULL;
//
//	int* ptr = new int[19];
//	*(ptr + 3) = 10;
//	cout << ptr[3] << endl;
//	
//	for (int i = 0; i < 19; i++)
//	{
//		*(ptr + i) = i;
//	}
//	for (int i = 0; i < 19; i++)
//	{
//		cout << ptr[i] << " ";
//	}
//
//
//	delete[] ptr;
//	ptr = NULL;
//
//
//	return 0;
//}


//
//struct node {
//	int a[10];
//
//
//}p1,p2,p3;
//
//struct stu {
//	//结构体中存在默认的成员函数；构造函数和析构函数；
//
//	//成员变量
//	string name;
//	int chinese;
//	int math;
//	int total;
//	
//	//构造函数
//	stu()
//	{
//		name = "aaa";
//		chinese = 10;
//		math = 20;
//		total = 30;
//	}
//	
//	~stu()
//	{
//		chinese = 0;
//		math = 0;
//		cout << "调用析构函数" << endl;
//	}
//
//	void show()
//	{
//		cout << name << endl;
//		cout << chinese << endl;
//		cout << math << endl;
//		cout << total << endl;
//	}
//
//
//};
//
//ostream& operator<<(ostream& os, struct stu& s)
//{
//	os << s.name;
//	os << s.chinese << endl;
//	return os;
//}
//
//
//int main()
//{
//
//	stu p;
//	cout << p << endl;
//
//
//	return 0;
//}

//#include<cstring>
//#include<string>
//#include<algorithm>
//
//int main()
//{
//	int a[10] = { 1,23,4,5,3,53,3 };
//	sort(a, a + 10);
//	for (int i = 0; i < 10; i++)
//	{
//
//		cout << a[i] << " ";
//	}
//
//	string s = "defxxxabccba";
//	sort(s.begin(), s.end());
//	
//
//	cout << s;
//	
//	char d[] = "hello,world";
//	int t = strlen(d);
//	sort(d, d + t);
//	cout << d << endl;
//
//	return 0;
//}


#include<algorithm>



//
//
//bool compare(int x, int y)
//{
//	return y < x;
//
//}
//
//
//struct Cmp
//{
//	bool operator()(int x, int y)
//	{
//		return x > y;
//	}
//}cmp;
//
////用结构体构建仿函数，并且重载括号操作符，实现通过结构体调用比较
//
//
//
//
//
//int main()
//{
//	int a[10] = { 1,23,43,2,4 };
//	sort(a, a + 10, cmp);
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//
//
//
//	return 0;
//}
//
//#include<string>
//#include<cstring>
//struct S {
//	string name;
//	int age;
//	//S()
//	//{
//	//	name = "zhaoliu";
//	//	age = 43;
//	//}
//}a,b,c;
//
//struct C {
//	bool operator()(S a1,S a2)
//	{
//		return a1.age > a2.age;
//	}
//}cmp;
//
//bool cmp_name(S al, S a2)
//{
//	return al.name < a2.name;
//}
//
//ostream& operator<<(ostream& os, struct S& t)
//{
//	os << t.name << " " << t.age << endl;
//	return os;
//}
//
//int main() {
//	S arr[4] = { {"zhangsan", 60},{"lisi", 30},{"wangwu", 70},{"zhaoliu",43} };
//	sort(arr, arr + 4, cmp_name);
//
//	for (int i = 0; i < 4; i++)
//	{
//		cout << arr[i];
//	}
//}
//
//class P
//{
//public:
//	int a = 10;
//	int b = 20;
//
//
//
//
//
//};
//
//int main()
//{
//	P a;
//	cout << a.a;
//
//
//	return 0;
//}

struct Node
{
	int data;

	Node* next;

}n1,n2,n3,n4;

Node* CreateNode(int i)
{
	Node*pn = new Node;
	pn->data = i;
	pn->next = NULL;
	return pn;
}

void print_list(Node* p)
{
	Node* cur = p;
	while (cur)
	{
		cout << cur->data << " ";
		cur = cur->next;
	}
	
}

void PushFront(Node* ph, int n)
{
	//分为两种，空链表和有节点的链表的情况：





}

int main()
{
	Node* phead = NULL;
	//头部插入元素；(插入的肯定是数据值)

	PushFront(phead, 1);
	PushFront(phead, 2);
	PushFront(phead, 3);
	PushFront(phead, 4);



	return 0;
}



//int main()
//{
//	Node* p1 = CreateNode(1);
//	Node* p2 = CreateNode(2);
//	Node* p3 = CreateNode(3);
//	Node* p4 = CreateNode(4);
//	p1->next = p2;
//	p2->next = p3;
//	p3->next = p4;
//
//	print_list(p1);
//
//
//	return 0;
//}





//int main()
//{
//	n1 = { 1,NULL };
//	n2 = { 2,NULL };
//	n3 = { 3,NULL };
//	n4 = { 4,NULL };
//
//	n1.next = &n2;
//	n2.next = &n3;
//	n3.next = &n4;
//
//	
//
//	return 0;
//}