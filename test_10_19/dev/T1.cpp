//询问学生学号 

//#include<iostream>
//using namespace std;
//
//#include<vector>
//
//const int N = 2e6 + 10;
//int a[N] ;
//int n = 0;
//
//int main()
//{
//	cin >> n;
//	int f;
//	cin >> f;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	for(int i = 1;i <= f;i++)
//	{
//		int tem ;
//		cin >> 	tem;
//		cout << a[tem] << endl;
//	}
//}


//寄包柜
//创建n个数组， 

#include<iostream>
#include<vector>
using namespace std;

const int N = 1e5+10;
vector<int> a[N];

int main()
{
	int n,q;
	cin >> n >> q;
	while(q--)
	{
		int c,i,j,k;
		cin>> c >> i >> j;
		if(c == 1)
		{
			cin >> k;
			if(a[i].size() <= j)//下标从零开始，等于j也不行
			{
				a[i].resize(j+1);
				a[i][j] = k;
			 } 
		}
		else
		{
			cout << a[i][j] << endl;
		}
	}
	
}


