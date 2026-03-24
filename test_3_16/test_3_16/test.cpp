#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	cout << "Welcome to ZJUT!" << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int gcd(int a, int b)
//{
//	while (a % b != 0)
//	{
//		int t = a % b;
//		a = b;
//		b = t;
//	}
//	return b;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int i = 1; i <= T; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		cout << "Case " << i << ": ";
//		cout << gcd(a, b) << endl;
//		
//	}
//
//
//	return 0;
//}

//  ???

#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{

		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			int t;
			cin >> t;
			sum += t;
		}
		cout << int(sum * 1.0 / n + 0.5) << endl;
	}

}	


//???

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
	string a;
	while (cin >> a)
	{
		int flag = 1;
		for (int i = 0; i < int( a.size()); i++)
		{
			if (!isdigit(a[i]))
			{
				flag = 0;
				cout << "No" << endl;
				break;
			}
		}
		if (flag)
		{
			cout << "Yes" << endl;
		}
	}
}


#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int a, b, c, d;
	vector<int> z;
	while (cin >> a >> b >> c >> d)
	{
		z.push_back(abs(a - c) * abs(b - d));
	}
	sort(z.begin(), z.end());
	for (int i = 0; i < int(z.size()); i++)
	{
		cout << z[i] << endl;
	}
}