#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

////快排
//
int a[10] = { 2,1,3,42,3,1,4242,6,57,53 };

void my_sort(int i, int e)
{
	if (i >= e)
	{
		return;
	}
	int l = i; int r = e;
	int mid = (l + r) / 2;
	int p = a[mid];
	while (l <= r)
	{
		while (a[l] < p )l++;
		while (a[r] > p )r--;
		if (l <= r)
		{
			swap(a[l], a[r]);
			l++;
			r--;
		}
	}
	my_sort(i, r);
	my_sort(l, e);


}


int main()
{
	int sz = sizeof(a) / sizeof(a[0]);

	my_sort(0, sz - 1);

	for (int i = 0; i < sz; i++)
	{
		cout << a[i] << " ";
	}




	
 
 return 0;
}



//#include<iostream>
//using namespace std;
//
//struct Node {
//	int data;
//	Node* next;
//
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
//void show_list(Node* p)
//{
//	while (p)
//	{
//		cout << p->data << " ";
//		p = p->next;
//	}
//	cout << endl;
//}
//
//void PushBack(Node* & ph, int d)
//{
//	if (ph == NULL)
//	{
//		ph = create_node(d);
//	}
//	else
//	{
//		//通过头节点找到最后一个节点并将节点中的指针改为下一个节点；
//		Node* tail = ph;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//		tail->next = create_node(d);
//
//	}
//}
//
//
//int main()
//{
//	Node* phead = NULL;
//	PushBack(phead, 1);
//	PushBack(phead, 2);
//	PushBack(phead, 3);
//	PushBack(phead, 4);
//
//	show_list(phead);
//
//
//
//	return 0;
//}
//



























//void PushFront(Node* * ph, int d)
//{
//	//h是指针变量的形参，并不是phead,所以如果在h中存放上第一个节点的地址并不会使phead接上节点；
//
//	//直接传phead做不到，但是使用 引用 就可以
//
//	if (*ph == NULL)
//	{
//		*ph = create_node(d);
//	}
//	else
//	{
//		Node* pn = create_node(d);
//		pn->next = *ph;//顺序很重要，先利用头指正中存的地址后再改变头指针；
//		*ph = pn;
//	}
//
//
//
//
//}
//














//int main()
//{
//	Node* phead = NULL;//空链表
//
//	PushFront(&phead, 1);
//	PushFront(&phead, 2);
//	PushFront(&phead, 3);
//	PushFront(&phead, 4);
//
//	show_list(phead);
//
//
//
//}

//#include<iostream>
//using namespace std;
//
//void q_sort(int* a, int i, int e)
//{
//	if (i >= e)//函数结束递归条件；
//	{
//		return;
//	}
//
//	int l = i; int r = e;
//	int p = (l + r) / 2;//定义基准值；
//	int m = a[p];//存储基准值，防止改变；
//	while (l <= r)
//	{
//		while (a[l] < m && l <= r)
//			l++;
//		while (a[r] > m && r >= l)
//			r--;
//		if (l <= r)
//		{
//			int tem = a[l];
//			a[l] = a[r];
//			a[r] = tem;
//			l++;
//			r--;
//		}
//	}
//	q_sort(a, i, r);
//	q_sort(a, l, e);
//
//}
//
//
//
//int main()
//{
//	int a[10] = { 2,1,3,42,3,1,4242,6,57,53 };
//	int sz = sizeof(a) / sizeof(a[0]);
//
//	q_sort(a, 0, sz - 1);
//
//	for (int i = 0; i < sz; i++)
//	{
//		cout << a[i] << " ";
//	}
//
//
//
//	return 0;
//}
