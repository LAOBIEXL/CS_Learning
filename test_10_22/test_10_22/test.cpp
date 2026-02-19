#define _CRT_SECURE_NO_WARNINGS

//#include<list>
//#include<iostream>
//
//using namespace std;
//
//void Print(list<int>& x)
//{
//	for (list<int> :: iterator i = x.begin();i != x.end(); i++)
//	{
//		cout << *i << " ";
//	}
//	cout << endl;
//}
//
//void print(list<int>& x)
//{
//	for (auto i : x)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//
//}
//
//
//int main()
//{
//	list<int> a;
//	a.push_front(1);
//	a.push_front(2);
//	a.push_front(3);
//	a.push_front(5);
//	Print(a);
//
//	a.push_back(55);
//	a.push_back(66);
//
//	Print(a);
//
//	a.pop_front();
//	a.pop_back();
//
//	Print(a);
//	
//
//
//
//
//
//	return 0;
//}

////stack模拟实现：
//
//#include<iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//int stk[N], n;
//
//void push(int x)
//{
//	stk[++n] = x;
//}
//
//void pop()
//{
//	n--;
//}
//
//bool empty()
//{
//	return n == 0;
//}
//
//int size()
//{
//	return n;
//}
//
//int top()
//{
//	return stk[n];
//}
//
//int main()
//{
//	push(1);
//	push(3);
//	push(5);
//	push(7);
//
//	cout << top() << endl;
//
//	pop();
//
//	cout << top() << endl;
//
//	cout << empty() <<" " << size()<< endl;
//
//	pop();
//	pop();
//	pop();
//	cout << empty() << endl;
//
//
//}

//#include<iostream>
//#include<stack>
//using namespace std;
//
//int main()
//{
//	stack<int> a;
//	cout << a.size() << endl;
//	for (int i = 1; i <= 5; i++)
//	{
//		a.push(i);
//		cout << a.top() << " ";
//	}
//	cout << endl;
//	for (int i = 1; i <= 5; i++)
//	{
//		cout << a.top() << " ";
//		a.pop();
//		
//	}
//	cout << a.empty();
//
//}

//#include<iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//int q[N], h, t;
//
//int size()
//{
//	return t - h;
//}
//
//void push(int x)
//{
//	q[++t] = x;
//}
//
//void pop()
//{
//	h++;
//}
//
//bool empty()
//{
//	return h == t;
//}
//
//int front()
//{
//	return q[1 + h];
//}
//
//int back()
//{
//	return q[t];
//}
//
//int main()
//{
//	for (int i = 1; i <= 5; i++)
//	{
//		push(i);
//		cout << front() << " " << back() << " ";
//		cout << endl;
//	}
//	cout << size() << empty() << endl;
//	pop();
//	cout << front();
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<queue>
//
//int main()
//{
//	queue<int> a;
//	for (int i = 1; i <= 10; i++)
//	{
//		a.push(i);
//		cout << a.size() << " " << a.front() << " " << a.back() << endl;
//	}
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<vector>
//
//const int N = 1e5 + 10;
//
//vector<int> edges[N];
//
//
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int a, int b;
//		cin >> a >> b;
//		edges[a].push_back(b);
//		edges[b].push_back(a);
//	}
//
//
//
//
//	return 0;
//}

//
////深度优先遍历代码实现：
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//const int N = 1e5 + 10;
//int n;
//
////创建一个存储每个节点是否被遍历过的数组：
//
//bool st[N];
//
//vector<int> edges[N];
//
//void dfs(int d)
//{
//	cout << d << " ";
//	st[d] = true;
//	//然后处理完根节点后，进入各个子树，使用范围for:
//	for (auto k : edges[d])
//	{
//		//特别注意，由于双向关系存储，所以如果不对遍历过的节点进行存储，就会形成死循环：
//		if (!st[k])
//		{
//			dfs(k);
//			/*st[k] = true;*/ //仔细想想这一句有用吗？
//		}
//		//这个时候取出的k就是子树的根节点；
//	}
//}
//
//
//int main()
//{
//	//完成数据的存储：
//
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int a, b; cin >> a >> b;
//		edges[a].push_back(b);
//		edges[b].push_back(a);
//	}
//
//	//实现深度优先遍历：
//	//深度优先遍历只需要传入开始遍历的根部节点；
//
//	dfs(1);
//
//
//
//
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//int h[N], e[2 * N], ne[2 * N];
//int n, id;
//bool st[N];
//
//void add(int a, int b)
//{
//	e[++id] = b;
//	ne[id] = h[a];
//	h[a] = id;
//}
//
//void dfs(int x)
//{
//	cout << x << " ";
//	st[x] = true;
//	for (int i = h[x]; i; i = ne[i])
//	{
//		if (!st[e[i]])
//		{
//			dfs(e[i]);
//		}
//	}
//}
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int a, b; cin >> a >> b;
//		add(a, b);
//		add(b, a);
//	}
//
//	dfs(1);
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//const int N = 1e5 + 10;
//
//vector<int> edges[N];
//int n;
//
//bool st[N];
//
//void bfs(int d)
//{
//	queue<int> q;
//	q.push(d);
//	st[d] = true;
//	while (q.size())
//	{
//		int t = q.front();
//		q.pop();
//		cout << t << " ";
//		for (auto e : edges[t])
//		{
//			if (!st[e])
//			{
//				q.push(e);
//				st[e] = true;
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int a, b; cin >> a >> b;
//		edges[a].push_back(b);
//		edges[b].push_back(a);
//	}
//
//	//BFS
//
//	bfs(1);
//
//
//
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//const int N = 1e5 + 10;
//vector<int> edges[N];
//int n;
//bool st[N];
//
//void bfs(int d)
//{
//	queue<int> q;
//	q.push(d);
//	st[d] = true;
//	while (q.size())
//	{
//		int t = q.front();
//		q.pop();
//		cout << t << " ";
//		for (auto e : edges[t])
//		{
//			if (!st[e])
//			{
//				q.push(e);
//				st[e] = true;
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i < n; i++)
//		int a, b; cin >> a >> b;
//		edges[a].push_back(b);
//		edges[b].push_back(a);
//	}
//
//	bfs(1);

//
//#include<iostream>
//using namespace std;
//#include<queue>
//
//const int N = 1e5 + 10;
//bool st1[N];
//int h[N], ne[2 * N], e[2 * N];
//bool st[N];
//int id, n;
//
//void add(int a, int b)
//{
//	e[++id] = b;
//	ne[id] = h[a];
//	h[a] = id;
//}
//
//void bfs(int d)
//{
//	queue<int> q;
//	q.push(d);
//	st[d] = true;
//	while (q.size())
//	{
//		int t = q.front();
//		q.pop();
//		cout << t << " ";
//		for (int i = h[t]; i; i = ne[i])
//		{
//			int v = e[i];
//			if (!st[v])
//			{
//				q.push(v);
//				st[v] = true;
//			}
//		}
//	}
//}
//
//
//void dfs(int d)
//{
//	cout << d << " ";
//	st1[d] = true;
//	for (int i = h[d]; i; i = ne[i])
//	{
//		if (!st1[e[i]])
//		{
//			dfs(e[i]);
//		}
//	}
//}
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int a, b; cin >> a >> b;
//		add(a, b);
//		add(b, a);
//	}
//
//	dfs(1);
//	cout << endl;
//	bfs(1);
//
//}
//
///*
//11
//1 3
//7 3
//3 10
//1 5
//4 5
//2 1
//11 2
//6 11
//11 8
//11 9
//*/

#include<iostream>
using namespace std;

const int N = 1e5 + 10;

int main()
{




	return 0;
}