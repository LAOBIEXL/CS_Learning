#define _CRT_SECURE_NO_WARNINGS


////
//#include<iostream>
//using namespace std;

//int fab(int n)
//{
//	if (n == 1 || n == 2)
//	return 1;
//	else
//	{
//		return fab(n - 1) + fab(n - 2);
//	}
//}
//
//
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	cin >> n;
//	ret = fab(n);
//	cout << ret << endl;
//
//	return 0;
//}

//
//
//int main()
//{
//	int a[6] = { 2, 0, 2, 1, 1, 0 };
//
//	int left = -1;
//	int right = 6;
//	int p = 0;
//	while (p < right)
//	{
//		if (a[p] == 0) swap(a[++left], a[p++]);
//		else if(a[p] == 2) swap(a[--right], a[p]);
//		else
//		{
//			p++;
//		}
//
//	}
//
//	for (int j = 0; j < 6; j++)
//	{
//		cout << a[j] << " ";
//	}
//}
//const int N = 1e6 + 10;
//int ne[N];
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> ne[i];
//	}
//
//	int h;
//	cin >> h;
//
//	for (int i = h; i; i = ne[i])
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//
//
//	return 0;
//}

//int main()
//{
//	int a[10] = { 5,6,7,3,2,1 };
//	for (int i = 0; i < 9; i++)
//	{
//		int flag = 1;
//		
//		for (int j = 0; j < 9 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				swap(a[j], a[j + 1]);
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int t;
//int main()
//{
//	int a, b, c, d;
//	cin >> t;
//	while (t--)
//	{
//		cin >> a >> b >> c >> d;
//		if (a  == b && b == c && c== d)
//		{
//			cout << "YES" << endl;
//		}
//		else cout << "NO" << endl;
//	}
//
//	return 0;
//
//}
//
