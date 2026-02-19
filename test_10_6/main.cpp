//#include <iostream>
//using namespace std;

//int main()
//{
//	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	for(auto e : a)
//	{
//		cout << e << " " ;
//	}
//	
//	
//	
//	
//	return 0;
//}

//
//#include<cstring>

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr , 'x' , 13);
//	cout << arr << endl;
//	
//	
//	
//	
//	return 0;
//}

//int main()
//{
//	int a[] = {1,2,3,4,5,6,7,8,9,10};
//	
//	memset(a,0,40);
//	for(auto i : a)
//	{
//		cout << i << " ";
//	}
//	
//	memset(a, 1, 40);
//	for(auto i : a)
//	{
//		cout << i << " ";
//	}
//	
//	
// } 

//
//int main()
//{
//	int a[10] = {1,2,3,4,5,6,7,8,9,10};
//	int b[10] = {};
//	memcpy(b+5,a,20);
//	for(auto e : b)
//	{
//		cout << e << " " ;
//	}
//	
//	
//	return 0;
//}
//

//
//int main()
//{
//	int a[10010] = {0};
//	int n ;
//	cin >> n;
//	for(int i = 0;i < n; i++)
//	{
//		cin >> a[i];
//	}
//	int x;
//	cin >> x;
//	int flag = 0;
//	for(int j = 0; j < n; j++)
//	{
//		if(x == a[j])
//		{
//			cout << x;
//			flag = 1;
//			break;
//		}
//	}
//	
//	if(!flag)
//	{
//		cout << -1 << endl; 
//	}
//	
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//const int N = 110;
//
//int a[N];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for(int i = 0; i <= (n-1)/2 ; i++)
//	{
//		int t = 0;
//		t = a[i]; 
//		a[i] = a[n-1-i];
//		a[n-1-i] = t; 
//	}
//	for(int i = 0; i < n; i++)
//	{
//		cout <<a[i] << " ";
//	}
//
//	
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
//const int N = 1010;
//int a[N];
//int b[N];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	long long sum = 0;
//	for (int i= 0; i <n; i ++)
//	{
//		int t;
//		cin >> t;
//		sum += t * a[i];
//		
//	}
//
//	cout << sum  << endl;
//}
//#include<iomanip>
//#include<iostream>
//using namespace std;
//
//int a[101];
//
//int main()
//{
//	int N ;
//	cin >> N;
//	for(int i = 0; i < N; i++)
//	{
//		
//		cin >> a[i];
//	}
//	int b = 0, c = 0, d = 0, e = 0;
//	for(int i = 0; i < N; i++)
//	{
//		if(a[i] >= 0 && a[i] <= 18)
//		{
//			b++;
//		}
//		else if(a[i] >= 19 && a[i] <= 35)
//		c++;
//		else if(a[i] >= 36 && a[i] <= 60)
//		d++;
//		else
//		e++;
//	}
//	cout << fixed << setprecision(2) ;
//	cout << b * 100.0 / N << '%' << endl;
//	cout << c * 100.0 / N <<'%' << endl;
//	cout << d * 100.0 / N << '%'<< endl;
//	cout << e * 100.0 / N << '%'<< endl;
//	return 0;
//}

//#include<cstring>
//#include<iostream>
//using namespace std;
//
//const int N = 5010;
//int a[N];
//
//int main()
//{
//	int n ;
//	cin >> n;
//
//	
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = i; j <= n; j += i)
//		{
//			a[j] = !a[j];
//		}
//		
//	}
//	for(int i = 1; i <= n; i++)
//	{
//		if(a[i] == 1)
//		{
//			cout << i << ' ';
//		}
//	}
//	
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//const int N = 110;
//int a[N];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for(int j = 0; j < n; j++)
//	{
//		int count = 0;
//		for(int i = 0; i < j ; i ++)
//		{
//			if(a[i] < a[j])
//			count ++;
//		}
//		cout << count << " ";
//		
//	}
//	
//	
//	
//	
//	return 0;
//}


//Ã°ÅÝÅÅÐò£º

//#include<iostream>
//using namespace std;
//
//const int N = 30;
//int a[N];
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i] ;
//	}
//	
//	for(int i = 0; i < n -1 ; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < n-1-i; j ++)
//		{
//			if(a[j] < a[j + 1])
//			{
//				int tem = a[j];
//				a[j] = a[j+1];
//				a[j+1] = tem;
//				flag = 1;
//			}
//
//		}
//		if(!flag)
//		{
//			break;
//		}
//
//	}
//	for(int i = 0; i < n; i++)
//	{
//		cout << a[i] << endl;
//	}
//	
//	
//	
//	
//	return 0;
// } 
//#include<iomanip>
//#include<iostream>
//using namespace std;
//
//const int N = 30;
//int a[N][N]; 
//
//int main()
//{
//	int n;
//	cin >> n;
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			if(i == j || j == 0)
//			{
//				a[i][j] = 1;
//			}
//			else if(i >= 2)
//			{
//				a[i][j] = a[i-1][j-1] + a[i-1][j];
//			}
//			
//		}
//	}
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			cout <<left <<setw(5);
//			cout << a[i][j] ;
//		}
//		cout << endl;
//	}
//	
//	
//	
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a[5][5] ;
//	for(int i = 0; i < 5; i++)
//	{
//		for(int j = 0; j < 5; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	int m , n;
//	cin >> m >> n;
//	for(int j = 0; j < 5; j++)
//	{
//		int tem = a[m-1][j];
//		a[m-1][j] = a[n-1][j];
//		a[n-1][j] = tem;
//	}
//	for(int i = 0; i < 5; i++)
//	{
//		for(int j = 0; j < 5; j++)
//		{
//			cout << a[i][j]<< " ";
//		}
//		cout << endl;
//	}
//	
//	
//	return 0;
//}

//ÇóÏàËÆ¶È

#include<iostream>
#include<cstdio>
using namespace std;

const int N = 150;
int a[N][N];

int main()
{
	int m , n;
	cin >> m >> n;
	int count = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << a[j][i] << " ";
		 } 
		 cout << endl;
	}
 } 





