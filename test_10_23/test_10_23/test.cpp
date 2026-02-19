#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//using namespace std;
//
//#include<queue>
//
//const int N = 1e5 + 10;
//int l[N], r[N];
//
//void dfs1(int x)
//{
//	cout << x << " ";
//	if (l[x]) dfs1(l[x]);
//	if (r[x]) dfs1(r[x]);
//}
//
//void dfs2(int x)
//{
//	if (l[x]) dfs2(l[x]);
//	cout << x << " ";
//	if (r[x]) dfs2(r[x]);
//
//}
//
//void dfs3(int x)
//{
//	if (x == 0) return;
//
//	dfs3(l[x]);
//	dfs3(r[x]);
//	cout << x << " ";
//
//}
//
//void bfs()
//{
//	queue<int> q;
//	q.push(1);
//
//	while (q.size())
//	{
//		int t = q.front();
//		q.pop();
//
//		if (t == 0) continue;
//		cout << t << " ";
//		q.push(l[t]);
//		q.push(r[t]);
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> l[i] >> r[i];
//	}
//
//	dfs1(1);
//	cout << endl;
//	dfs2(1);
//	cout << endl;
//	dfs3(1);
//	cout << endl;
//	bfs();
//	return 0;
//
//}

//#include<iostream>
//#include<utility>
//using namespace std;
//
//const int N = 1e5 + 10;
//int heap[N];
//int n;
//
//void up(int child)
//{
//	int father = child / 2;
//	if (heap[father])
//	{
//		while (heap[child] > heap[father] && heap[father])
//		{
//			swap(heap[child], heap[father]);
//			child = father;
//			father = child / 2;
//		}
//	}
//}
//
//
//
//void up(int child)
//{
//	int parent = child / 2;
//	
//	while (parent >= 1 && heap[child] > heap[parent])
//	{
//		swap(heap[child], heap[parent]);
//		child = parent;
//		parent = child / 2;
//
//	}
//}
//
//void down(int parent)
//{
//	int child = 2 * parent;
//	/*int childr = child + 1;*/
//	while (child <= n)
//	{
//		if (child + 1 <= n && heap[child + 1] > heap[child]) child++;
//		if (heap[child] < heap[parent]) return;
//		swap(heap[child], heap[parent]);
//		parent = child;
//		child = 2 * parent;
//	}
//
//}
//
//int main()
//{
//	
//
//}

//
//#include<iostream>
//#include<utility>
//using namespace std;
//
//const int N = 1e5 + 10;
//int heap[N];
//int n;
//
//void up(int child)
//{
//	int parent = child / 2;
//	while (parent >= 1 && heap[parent] < heap[child])
//	{
//		swap(heap[child], heap[parent]);
//		child = parent;
//		parent = child / 2;
//	}
//}
//
//void down(int parent)
//{
//	int child = 2 * parent;
//	while (child <= n)
//	{
//		if (child + 1 <= n && heap[child + 1] > heap[child]) child++;
//		if (heap[child] < heap[parent]) return;
//		swap(heap[child], heap[parent]);
//		parent = child;
//		child = parent * 2;
//	}
//}
//
//void push(int x)
//{
//	heap[++n] = x;
//	up(n);
//}
//
//void pop()
//{
//	swap(heap[1], heap[n]);
//	n--;
//	down(1);
//}
//
//int top()
//{
//	return heap[1];
//}
//
//int size()
//{
//	return n;
//}
//
//
//int main()
//{
//	int a[10] = { 1, 41, 23, 10, 11, 2, -1, 99, 14, 0 };
//	for (auto e : a)
//	{
//		push(e);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << heap[i] << " ";
//	}
//	cout << endl;
//	pop(); pop();
//	for (int i = 1; i <= n; i++)
//	{
//		cout << heap[i] << " ";
//	}
//
//	cout << endl << size() << " " << top() << endl;
//}


//#include<iostream>
//#include<queue>
//using namespace std;
//
//void Print(priority_queue<int>& a)
//{
//	while (!a.empty())
//	{
//		cout << a.top() << " ";
//		a.pop();
//	}
//	cout << endl;
//}
//
//int main()
//{
//	priority_queue<int> heap;
//	int a[10] = { 1,34,53,37,39,4,545,34,345,32 };
//	for (int i = 0; i < 10; i++)
//	{
//		heap.push(a[i]);
//	}
//
//	cout << heap.size() << endl;
//	cout << heap.empty() << endl;
//
//	Print(heap);
//
//
//
//	return 0;
//}
//

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n1 = 10;
//	int n2 = 10;
//	while (n1--)
//	{
//		cout << n1 << " ";
//	}
//	cout << endl;
//	while (--n2)
//	{
//		cout << n2 << " ";
//	}
//}
//
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int main()
//{
//	priority_queue<int> heap;
//
//	while (heap.size())
//	{
//		cout << heap.top() << " ";
//		heap.pop();
//	}
//
//	return 0;
//}

//#include<iostream>
//#include<queue>
//using namespace std;
//
//int main()
//{
//	priority_queue<int, vector<int>, less<int>> heap1;
//	priority_queue<int, vector<int>, greater<int>> heap2;
//
//}

#include<iostream>
#include<queue>
using namespace std;

struct Node {
	int a, b, c;
	//以b作为排序队列的依据：

	bool operator<(const Node& x) #include<iostream>
#include<queue>
using namespace std;

struct Node {
	int a, b, c;
	//以b作为排序队列的依据：

	bool operator<(const Node& x) const
	{
		return b < x.b;
	}

};

int main()
{
	priority_queue<Node> heap;

	return 0;
}

	{
		return b < x.b;
	}

};

int main()
{
	priority_queue<Node> heap;

	return 0;
}
