#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//#include<iostream>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* next;
//};
//
//Node* create_node(int d)
//{
//	Node* p = new Node;
//	p->data = d;
//	p->next = NULL;
//	return p;
//}
//
//void show_list(Node* h)
//{
//
//	while (h)
//	{
//		cout << h->data << " ";
//		h = h->next;
//	}
//	cout << endl;
//}
//
//void PushHead(Node*& ph,int d)
//{
//	Node* p_new = create_node(d);
//	if (ph == NULL)
//	{
//		ph = p_new;
//	}
//	else
//	{
//		p_new->next = ph;
//		ph = p_new;
//	}
//}
//
//void PushBack(Node*& ph, int d)
//{
//	Node* p_new = create_node(d);
//	if (ph == NULL)
//	{
//		ph = p_new;
//	}
//	else
//	{
//		Node* tem = ph;
//		while (tem->next != NULL)
//		{
//			tem = tem->next;
//		}
//		tem->next = p_new;
//	}
//
//}
//
//void PopFront(Node* & phead)
//{
//	if (!phead)
//	{
//		cout << "链表已经为空" << endl;
//	}
//	else
//	{
//		//第一步：保存要删除的指针的地址，因为要释放空间；
//		//第二部：让phead指向第二个节点；
//		//第三部：释放要删除的节点的空间；
//		Node* tem = phead;
//		phead = phead->next;
//		delete tem;
//		tem = NULL;
//	}
//}
//
//
//void popback(Node* & p)
//{
//	//释放尾部的节点空间，将倒数第二个节点的next置空；
//	
//	//但是还有一种情况，如果整个链表只有一个节点，那么只需要将头指针置空就行
//
//	if (p == NULL)
//	{
//		cout << "链表中已经没有元素" << endl;
//	}
//	else if(p->next == NULL)
//	{
//		//需要将ph置空，所以还是要使用引用；
//		delete p;
//		p = NULL;
//	}
//	else
//	{
//		Node* tem = p;
//		while (tem->next->next != NULL)//注意倒数第二个节点是两个next
//		{
//			
//			tem = tem->next;
//		}
//		delete tem->next;
//		tem->next = NULL;
//	}
//
//
//}
//
//void destroy(Node*& p)
//{
//	while (p != NULL)
//	{
//		/*PopFront(p);*/
//		popback(p);
//	}
//
//}
//
//
//int main() {
//	
//	Node* phead1 = NULL;
//	PushBack(phead1,1);
//	PushBack(phead1,2);
//	PushBack(phead1,3);
//	PushBack(phead1,5);
//	show_list(phead1);
//
//	Node* phead2 = NULL;
//	PushHead(phead2, 3);
//	PushHead(phead2, 5);
//	PushHead(phead2, 7);
//	PushHead(phead2, 9);
//	show_list(phead2);
//
//	PopFront(phead1);
//	show_list(phead1);
//
//	PopFront(phead2);
//	show_list(phead2);
//
//	popback(phead2);
//	show_list(phead2);
//
//	popback(phead1);
//	show_list(phead1);
//
//	destroy(phead1);
//	destroy(phead2);
//	show_list(phead1);
//	show_list(phead2);
//}

//#include<cstdio>
//
//int main()
//{
//	char a[200] = { 0 };

	/*scanf("%[^\n]s", a);
	cout << a << endl;*/


	//fgets(a, 200, stdin);

	//cout << a;
//	char tem;
//	int i = 0;
//
//	do
//	{
//		cin.get(a[i]);
//	} while (a[i++] != '\n');
//
//	int j = 0;
//	while (a[j])
//	{
//		cout << a[j];
//		j++;
//	}
//
//	
//
//
//
//
//	return 0;
//}

struct Node
{
	int data;
	Node* next;
};

struct list
{
	//成员变量
	Node* phead;


	//成员函数：
	//通过构造函数实现初始化
	list()
	{
		phead = NULL;
		cout << "调用构造函数" << endl;
	}

	Node* create_node(int d)
	{
		Node* p = new Node;
		p->data = d;
		p->next = NULL;
		return p;
	}

	void PushHead(int d)
	{
		Node* p_new = create_node(d);
		if (phead == NULL)
		{
			phead = p_new;
		}
		else
		{
			p_new->next = phead;
			phead = p_new;
		}
	}
	void show_list()
	{
		Node* p = phead;//非常有必要，放在结构体外时候，不需要构建副本，但是在结构体内部，如果不构建副本，循环直接操作在phead上，会导致严重的问题！！！
		while (p)
		{
			cout << p->data << " ";
			p = p->next;
		}
		cout << endl;
	}


	void PopFront()
	{
		if (!phead)
		{
			cout << "链表已经为空" << endl;
		}
		else
		{
			//第一步：保存要删除的指针的地址，因为要释放空间；
			//第二部：让phead指向第二个节点；
			//第三部：释放要删除的节点的空间；
			Node* tem = phead;
			phead = phead->next;
			delete tem;
			tem = NULL;
		}
	}

	void popback()
	{
		//释放尾部的节点空间，将倒数第二个节点的next置空；

		//但是还有一种情况，如果整个链表只有一个节点，那么只需要将头指针置空就行

		if (phead == NULL)
		{
			cout << "链表中已经没有元素" << endl;
		}
		else if (phead->next == NULL)
		{
			//需要将ph置空，所以还是要使用引用；
			delete phead;
			phead = NULL;
		}
		else
		{
			Node* tem = phead;
			while (tem->next->next != NULL)//注意倒数第二个节点是两个next
			{

				tem = tem->next;
			}
			delete tem->next;
			tem->next = NULL;
		}


	}

	~list()
	{
		while (phead != NULL)
		{
			/*PopFront(p);*/
			popback();
		}
		cout << "调用析构函数" << endl;

	}

	//析构函数，释放链表：


};

int main()
{
	list list;
	list.PushHead(1);
	list.PushHead(3);
	list.PushHead(5);
	list.PushHead(7);
	list.show_list();
	list.popback();
	list.show_list();
}
