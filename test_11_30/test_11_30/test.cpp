#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//using namespace std;
//typedef long long LL;
//const int N = 1010;
//LL f[N][N];
//
//int main()
//{
//	int n, m, q;
//	cin >> n >> m >> q;
//	//初始化差分矩阵：
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			int t;
//			cin >> t;
//			f[i][j] += t;
//			f[i][j + 1] -= t;
//			f[i + 1][j] -= t;
//			f[i + 1][j + 1] += t;
//		}
//	}
//	while (q--)
//	{
//		int x1, y1, x2, y2, k;
//		cin >> x1 >> y1 >> x2 >> y2 >> k;
//		f[x1][y1] += k;
//		f[x1][y2 + 1] -= k;
//		f[x2 + 1][y1] -= k;
//		f[x2 + 1][y2 + 1] += k;
//	}
//	//使用前缀和还原；
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			f[i][j] = f[i][j] + f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1];
//			cout << f[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//
//
//	return 0;
//}

