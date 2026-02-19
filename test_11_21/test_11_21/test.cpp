#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//using namespace std;
//
//void add(int& a)
//{
//	a++;
//}
//
//int main()
//{
//	int a = 0;
//	cout << a;
//	cout << endl;
//
//	while (1)
//	{
//		int b = 1;
//		cout << b;
//		add(b);
//	}
//	return 0;
//}

#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;
int  n, r;
int a[110];
priority_queue<int, vector<int>, greater<int>> heap;

int main()
{
	cin >> n >> r;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	int sum = 0;
	int j = 0;
	for (j = 0; j < r; j++)
	{
		heap.push(a[j]);
		sum += a[j];
	}//³õÊ¼»¯¶Ñ 
	while (j < n)
	{
		int t = heap.top();
		heap.pop();
		t += a[j++];
		sum += t;
		heap.push(t);
	}
	cout << sum << endl;
}