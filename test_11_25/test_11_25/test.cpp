#define _CRT_SECURE_NO_WARNINGS


//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n;
//		cin >> n;
//		string a;
//		cin >> a;
//		int t = a.size();
//		int cnt = 0;
//		for (int i = 0; i < t - 1; i++)
//		{
//			if (a[i] != a[t - 1]) cnt++;
//		}
//		cout << cnt << endl;
//	}
//
//	return 0;
//}
//考虑边界情况：

//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//int main()
//{
//
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int a = 0, b, n;
//		cin >> a >> b >> n;
//		double wid = 1.0 * a / n;
//		int cnt = 0;
//		if (wid < b /*&& fabs(wid-b) > 1e-5*/ ) cnt++;
//		if (!(a <= b)) cnt++;
//		if (n == 1 && a <= b) cnt++;
//		cout << cnt << endl;
//	}
//
//	return 0;
//}

#include<iostream>
#include<queue>
#include<vector>
using namespace std;




//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		const int N = 200;
//		int id = 0,h = 0;
//		priority_queue<int, vector<int>, greater<int>> heap;
//		int n;
//		cin >> n;
//		vector<int> pre(n+1), ne(n+1), e(n+1);
//		int mp[N] = {};
//		
//		for (int i = 0; i < n; i++)
//		{
//			int tmp;
//			cin >> tmp;
//			e[++id] = tmp;
//			mp[tmp] = id;
//			ne[id] = ne[h];
//			pre[id] = h;
//			pre[ne[id]] = id;
//			ne[h] = id;
//			heap.push(tmp);
//		}
//		ne[1] = id;
//		pre[id] = 1;
//
//		long long ret = 0;
//		while (heap.size() != 1)
//		{
//			int mi = heap.top();
//			heap.pop();
//			int p = mp[mi];
//			int pr = pre[p], af = ne[p];
//			int mx = min(e[pr], e[af]);
//			ne[pr] = af;
//			pre[af] = pr;
//			ret += mx;
//		}
//
//		cout << ret << endl;
////	}
//
//
//	return 0;
//}
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n;
//		cin >> n;
//		vector<int> a(n);
//		vector<int> ret;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		sort(a.begin(), a.end());
//		if (n % 2 == 0)
//		{
//			int left = (n / 2)-1;
//			int right = (n / 2) ;
//			while (left >= 0 && right <= n - 1)
//			{
//				ret.push_back(a[left--]);
//				ret.push_back(a[right++]);
//			}
//		}
//	
//		else
//		{
//			ret.push_back(a[n / 2]);
//			int l = n / 2 - 1;
//			int r = n / 2 + 1;
//			while (l >= 0 && r < n)
//			{
//				ret.push_back(a[l--]);
//				ret.push_back(a[r++]);
//			}
//		}
//		for (auto e : ret)
//		{
//			cout << e << " ";
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//int cmp(string& x, string& y)
//{
//	if (x.size() != y.size()) return  x.size() < y.size();
//	else return x < y;
//}
//
//void sub()
//{
//	for (int i = 0; i < lc; i++)
//	{
//		c[i] += a[i] - b[i];
//		if (c[i] < 0)
//		{
//			c[i + 1]--;
//			c[i] += 10;
//		}
//	}
//	//while(c[lc-1] = 0) lc--  这样写有缺陷，如果全零什么都不会输出；
//	while (lc > 1 && c[lc - 1] == 0) lc--;
//}
//
//int main()
//{
//	string x, y;
//	//首先需要判断大小；
//	//将x变为大的，y变为小的；
//	cin >> x >> y;
//
//	if (cmp(x, y))
//	{
//		cout << "-";
//		swap(x, y);
//	}
//
//	la = x.size(); lb = y.size();
//	lc = max(la, lb);
//	//先默认为最大值，如果相减后有零再处理；
//	
//	for (int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
//	for (int i = 0; i < lb; i++) b[lb - 1 - i] = y[i] - '0';
//	
//	sub();
//
//	for (int i = lc- 1; i >= 0; i--) cout << c[i];
//	cout << endl;
//
//
//
//
//	return 0;
//}


//#include<string>
//#include<iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//void mul()
//{
//	//两层for循环,无进位相乘；
//	for (int i = 0; i < la; i++)
//	{
//		for (int j = 0; j < lb; j++)
//		{
//			c[i + j] += a[i] * b[j];
//		}
//	}
//	//处理进位：
//	for (int i = 0; i < lc; i++)
//	{
//		c[i + 1] += c[i] / 10;
//		c[i] = c[i] % 10;
//	}
//	while (lc > 1 && c[lc - 1] == 0) lc--;
//
//}
//
//int main()
//{
//	string x, y;
//	cin >> x >> y;
//	la = x.size(); lb = y.size();
//
//	lc = la + lb;//最大的长度不会大于这两个长度相加；
//
//	for (int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
//	for (int i = 0; i < lb; i++) b[lb - 1 - i] = y[i] - '0';
//
//	mul();
//
//	for (int i = lc - 1; i >= 0; i--) cout << c[i];
//	cout << endl;
//
//
//}

//#include<iostream>
//#include<string>
//using namespace std;
//typedef long long ll;
//const int N = 1e6 + 10;
//int a[N], b, c[N];
//int la, lc;
//
//int sub() //高精度除以低精度的模版；
//{
//	ll t = 0;//防止余数超出范围；
//	//除法与其他几种计算不同，除是从最高位开始除；
//	for (int i = la - 1; i >= 0; i--)
//	{
//		//计算当前阶段的被除数：就是上一次的余数乘以10 + 这一位的数；
//		t = t * 10 + a[i];
//		c[i] = t / b;
//		t = t % b;
//	}
//	
//	while (lc > 1 && c[lc - 1] == 0) lc--; //处理前导零；
//	return t;
//}
//
//int main()
//{
//	string x;
//	cin >> x >> b;
//	la = x.size();
//
//	lc = la; //计算lc 的最大长度；
//
//	for (int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
//
//	int t = sub();
//
//	for (int i = lc - 1; i >= 0; i--) cout << c[i];
//	cout << " " << t << endl;
//
//
//
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//
//const int N = 1e4 + 10;
//int a[N], b[N], g[N], k[N];
//int x, y;
//
//int is_cov(int n)
//{
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (x >= a[i] && x <= a[i] + g[i] && y >= b[i] && y <= b[i] + k[i])
//		{
//			return i + 1;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i] >> b[i] >> g[i] >> k[i];
//	}
//
//	cin >> x >> y;
//
//	cout << is_cov(n) << endl;
//
//	return 0;
//}

/*#include<stdio.h>
using namespace std;

int main()
{
	char a[100] = { 'H','a','p','p','y',0};
	cout << a << endl;

	
	return 0;
}       */

//
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
//	for (int i = 0; i < lc; i++)
//	{
//	
//		c[i] += (a[i] + b[i]);//不管怎么样，先全部加上去；
//		c[i + 1] = (c[i]) / 10;//根据前一位的总和来进位，而不是a+b的值；
//		c[i] %= 10;
//	}
//	if (c[lc]) lc++;
//}
//
//int main()
//{
//	string x, y;
//	cin >> x >> y;
//
//	la = x.size();
//	lb = y.size();
//	lc = max(la, lb);
//
//	for (int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
//	for (int i = 0; i < lb; i++) b[lb - 1 - i] = y[i] - '0';
//
//	add();
//
//	for (int i = lc - 1; i >= 0; i--) cout << c[i];
//	cout << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//const int N = 1e6 + 10;
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//int cmp(string & x, string & y)
//{
//	if (x.size() != y.size()) return x.size() < y.size();
//	return x < y;
//}
//
//void sub()
//{
//	for (int i = 0; i < lc; i++)
//	{
//		c[i] += a[i] - b[i];
//		if (c[i] < 0)
//		{
//			c[i] += 10;
//			c[i + 1]--;
//		}
//	}
//	while(lc > 1 && c[lc-1] == 0) lc--;
//}
//
//
//int main()
//{
//	string x, y;
//	cin >> x >> y;
//	//比较x,y大小；
//
//	if (cmp(x, y))
//	{
//		cout << '-';
//		swap(x, y);
//	}
//
//	la = x.size();
//	lb = y.size();
//	lc = max(la, lb);
//	
//	for (int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
//	for (int i = 0; i < lb; i++) b[lb - 1 - i] = y[i] - '0';
//
//	sub();
//
//	for (int i = lc - 1; i >= 0; i--) cout << c[i];
//	cout << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//const int N = 1e6 + 10;
//int a[N], b[N], c[N];
//int la, lb, lc;
//
//void mul()
//{
//	//无进位乘法；
//	for (int i = 0; i < la; i++)
//	{
//		for (int j = 0; j < lb; j++)
//		{
//			c[i + j] += a[i] * b[j];
//		}
//	}
//	for (int i = 0; i < lc; i++)
//	{
//		c[i + 1] += c[i] / 10;
//		c[i] %= 10;
//
//	}
//	while (lc > 1 && c[lc - 1] == 0) lc--;
//}
//
//int main()
//{
//	string x, y;
//	cin >> x >> y;
//	la = x.size();
//	lb = y.size();
//	lc = la + lb;
//	for (int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
//	for (int i = 0; i < lb; i++) b[lb - 1 - i] = y[i] - '0';
//
//	mul();
//
//	for (int i = lc - 1; i >= 0; i--) cout << c[i];
//	cout << endl;
//
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//typedef long long LL;
//const int N = 1e6 + 10;
//int a[N], b, c[N];
//int la, lc;
//
//int sub()
//{
//	LL t = 0;
//	for (int i = la - 1; i >= 0; i--)
//	{
//		t = (t * 10 + a[i]);
//		c[i] = t / b;
//		t = t % b;
// 	}
//	while (lc > 1 && c[lc - 1] == 0) lc--;
//	return t;
//}
//
//int main()
//{
//	string x;
//	cin >> x;
//	cin >> b;
//	la = x.size();
//	lc = la;
//
//	for (int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
//
//	int z = sub();
//
//	for (int i = lc - 1; i >= 0; i--) cout << c[i];
//	cout << " " << z << endl;
//
//
//
//}
//#include<string>
//#include<algorithm>
//#include<iostream>
//#include<stack>
//using namespace std;
//
//int is_b(int i)
//{
//	int t = 0;
//	int t2 = i;
//	while (i)
//	{
//		t = t * 10 + i % 10;
//		i /= 10;
//	}
//	return t == t2;
//}
//
//int main()
//{
//	int count = 0;
//	int a;
//	int b;
//	cin >> a >> b;
//	int mo[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	for (int i = a; i <= b; i++)
//	{
//		int t = i;
//		if (is_b(t))
//		{
//			int d = 0;
//			d = t % 10 + (t / 10 % 10) * 10;
//			t /= 100;
//			int m = 0;
//			m = t % 10 + (t / 10 % 10) * 10;
//			if (m >= 1 && m <= 12)
//			{
//				if (d >= 1 && d <= mo[m])
//					count++;
//			}
//
//		}
//	}
//	cout << count << endl;
//	return 0;
//}

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int count = 0;
	int mo[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int i = 1; i <= 12; i++)
	{
		for (int j = 1; j <= mo[i]; j++)
		{
			int tmp = (j % 10) * 1000 + (j / 10) * 100 + (i % 10) * 10 + (i / 10);
			int k = tmp * 10000 + i * 100 + j;
			if (k >= a && k <= b) count++;
		}
	}

	cout << count << endl;


	return 0;
}