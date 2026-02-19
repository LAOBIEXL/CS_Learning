//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double h ;
//	cin >> h;
//	double ret = h;
//	double t = 0;
//	
//	for(int i = 0; i < 9; i++)
//	{
//		h = h / 2;
//		ret += 2*h;
//		
//		t = h / 2;
//	}
//	cout << ret << endl;
//	cout << t << endl;
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
//int n;
//
//int main()
//{
//	cin >> n;
//	int i;
//	for(i = n; i >= 1; i--)
//	{
//		int flag = 1;
//		for(int j = i-1; j > 1; j--)
//		{
//			if(i % j == 0)
//			{
//			flag = 0;
//			break;
//			}
//		}
//		if(flag && n % i == 0)
//		{
//			break;
//		}
//	
//	}
//	cout << i << endl;
//	
//	
//	return 0;
//}
//
//
//
////判断质数

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 2019; i++)
//	{
//		int flag = 0;
//		int n = i;
//		while(n)
//		{
//			if(n % 10 == 9)
//			{
//				flag = 1;
//				break;
//			}
//			n /= 10;
//		}
//		if(flag)
//		{
//			count ++;
//		}
//	}
//	
//	cout << count << endl;
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
//
//    int t = 0;
//    cin >> t;
//    while(t--)
//    {
//        int n = 0;
//        cin >> n;
//        int a = 1, b = 1;
//        int ret = 0;
//        if (n == 1 || n == 2)
//        {
//            cout << 1 << endl;
//        }
//        else 
//        {
//            for(int i = 0;i < n-2;i ++)
//            {
//                ret = a + b;
//                 a = b;
//                 b = ret;
//            }
//            cout << ret << endl;
//        }
//        
//        
//    }
//
//
//}

////求出e
//
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
////int cal(int i)
////{
////	int a = 1;
////	for(int j = 1; j <= i; j++)
////	{
////		a *= j;
////	 } 
////	 return a;
////}
//
//int main()
//{
//	double ret = 1;
//	int n;
//	cin >> n;
//	int f = 1;
//	for(int i = 1; i <= n; i++) 
//	{
//		ret += 1.0 / (f *= i);
//	}
//	
//	cout << fixed << setprecision(10) << ret << endl;
//	
//
//	return 0;
// } 
//
////避免阶乘的重复计算：
//

////输出三角形：
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 1; j <= i; j++)
//		{
//			cout << "*" ;
//		}
//		cout << "\n";
//	}
//	
//	return 0;
// } 
//

////画出矩阵
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a, b,d;
//	char c;
//	cin >> a >> b >> c >> d;
//	for(int i = 1; i <= a; i++)
//	{
//		for(int j = 1; j <= b; j++)
//		{
//			if(d)
//			{
//				cout << c ;
//			}
//			else{
//				if(i == 1 || i == a )
//				{
//					cout << c;
//				}
//				else{
//					if(j == 1 || j == b)
//					cout << c;
//					else
//					cout << " ";
//				}
//			}
//		}
//		cout << endl;
//	}
//	
//	
//	
//	
//	return 0;
// } 
//

#include<iostream>
#include<cmath> 
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 2;
	if(n <= 2)
	{
		cout << n << endl;
	}
	int i = 3;
	while(n > 2)
	{
		int flag = 1;
		int m = sqrt(i) + 1; 
		for(int j = 2; j < m ;j++)
		{
			if(i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		
		if(flag)
		{
			count++;
		}
		if(count == n+1)
		break;
		
		i += 2;
	}
	
	cout << i << endl;
	
	return 0;
}






