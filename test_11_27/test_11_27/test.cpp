#define _CRT_SECURE_NO_WARNINGS


//#include<iostream>
//#include<string>
//using namespace std;
//
//const int N = 1e6 + 10;
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//void add()
//{
//	for (int i = 0; i < lc ; i++)
//	{
//		c[i] = (a[i] + b[i]) % 10;
//		c[i + 1] = (a[i] + b[i]) / 10;
//	}
//	if (c[lc]) lc++;
//}
//
//int main()
//{
//	string x, y;
//	cin >> x >> y;
//	la = x.size();
//	lb = y.size();
//	lc = max(la, lb);
//
//	for (int i = 0; i < x.size() ; i++) a[la - 1 - i] = x[i] - '0';
//	for (int i = 0; i < y.size() ; i++) b[lb - 1 - i] = y[i] - '0';
//
//	add();
//
//	for (int i = lc - 1; i >= 0; i--)
//	{
//		cout << c[i];
//	}
//	cout << endl;
//
//
//
//	return 0;
//}

//
//#include<algorithm>
//#include<string>
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	string a, b;
//	cin >> a;
//	cout << a << endl;
//	reverse(a.begin(), a.end());
//	cout << a << endl;
//
//
//}


#include<iostream>
using namespace std;



int max_m(int a, int b)
{
	return 20;
}

int max_m(char a, char b)
{
	return 10;
}

int main()
{
	cout << max_m(44, 43) << endl;

	return 0;
}