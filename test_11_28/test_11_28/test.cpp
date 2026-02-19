#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//#include<cmath>
//#include<string>
//
//using namespace std;
//const int N = 110;
//
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n;
//		cin >> n;
//		if (n == 1) cout << 1 << endl;
//		if (n == 2) cout << 9 << endl;
//		if (n >= 3)
//		{
//			int a = 3 * (n * n - 1) + n * n - 1 - n;
//			int b = 3 * (n * n - 1 - n) + (n * n - 1) + (n * n - 1 - 2 * n);
//			cout << (a >= b ? a : b) << endl;
//		}
//
//
//	}
//
//	return 0;
//}

//
//using namespace std;
//const int N = 2e5 + 10;
//
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n;
//		cin >> n;
//		int count1 = 0;
//		int count2 = 0;
//		for (int i = 0; i < n; i++)
//		{
//			int t;
//			cin >> t;
//			if (t >= 1) {
//				count1++;
//				count2 += t - 1;
//			}
//		}
//		if (count2 >= n - 1)
//			cout << count1 << endl;
//		else
//		{
//			cout << count1 - (n-1 - count2) << endl;
//		}
//	}
//
//	return 0;
//}


#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;



int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		vector<long long> tmp;
		vector<long long> tmp2;
		long long count1 = 0;
		long long count2 = 0;
		int k, n;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			int t;
			cin >> t;
			//k = 2 的情况单独处理;
			if (k >= 3 && t >= 1 && t <= k)
			{
				tmp.push_back(t);//将t放入待配对区；
			}
			else if (t == 2)
			{
				tmp.push_back(t);
			}
			
		}
		sort(tmp.begin(), tmp.end());
		for (int i = 0; i < n; i++)
		{
			int t;
			cin >> t;
			//计算数组中那些可能完成操作的元素：
			long long z = k;
			if (z % 2 == 0) z--;
			long long scope = (z + 1) / 2 - 1;//满足条件；
			if (t >= 1 && t <= scope)
			{
				tmp2.push_back(t);
			}
		}
		sort(tmp2.begin(), tmp2.end());
		for (int i = tmp.size() - 1; i >= 0; i--)
		{
			for (int j = 0 + count1; j < tmp2.size(); j++)
			{
				long long w = 0;
				for ( w = k; w >= 1; w--)
				{
					if (w % (tmp2[j] + 1) != 0)
						break;
				}
				long long cope = w / (tmp2[j] + 1);//计算满足的范围下线：
				long long p = w - cope * (tmp2[j] + 1);
				if (tmp[i] <= cope && tmp2[j] <= p)
				{
					count1++;
					break;
				} 
				else if(tmp[i] <= cope - 1)
				{
					count1++;
					break;
				}
			}
		}
		cout << count1 << endl;

	}

	return 0;
}

//using namespace std;
//const int N = ;
//
//
//for (int j = tmp.size() - 1; j >= 0; j--)
//{
//	if (tmp[i] >= 1 && tmp[i] <= cope)
//	{
//
//		count2++;
//	}
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//
//
//
//	}
//
//	return 0;
//}