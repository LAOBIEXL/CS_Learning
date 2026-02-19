#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

////分数求和累加


//
//int main()
//{
//    int k = 0;
//    cin >> k;
//    int c = 1;
//    double sum = 1.0;
//    while (sum <= k) {
//        c++;
//        sum += 1.0 / c;
//       
//    }
//    cout << c << endl;
//	return 0;
//
// }
//
////法二
//
//int main()
//{
//	int k = 0;
//	cin >> k;
//	double sum = 0.0;
//	for (int i = 1;; i++)
//	{
//		sum += 1.0 / i;
//		if (sum > k)
//		{
//			cout << i;
//			break;
//		}
//	}
//
//
//
//
//	return 0;
//}

////cpp的数组相关

//int main()
//{
//	int l[200000] = { 0 };
//
//	int t = 0, n = 0;
//	cin>> n;
//	double a = 0.0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> t;
//		for (int j = 1; j <= t; j++)
//		{
//			if (l[(int)(a * j)] == 0)l[(int)(a * j)] = 1;
//			else l[(int)(a * j)] = 0;
//		}
//	}
//	
//	int c = 1;
//	//for (int c = 1;; c++)
//	//{
//	//	if (l[c] == 1)
//	//	{
//	//		cout << c;
//	//		break;
//	//	}
//	//}
//	//
//
//	while (1)
//	{
//		if (l[c] == 1)
//		{
//			cout << c;
//			break;
//		}
//		else c++;
//	}
//
//
//
//	return 0;
//}
 


