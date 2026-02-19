#define _CRT_SECURE_NO_WARNINGS

//数位dp 1:

//limit 标记当前位置是受到限制；

//初始版本：
//
//#include<iostream>
//using namespace std;
//
//const int N = 15;
//
//int n;
//int a[N];
//int cnt = 0;
//
//int dfs(int pos, bool limit)
//{
//	if (pos == 0)
//	{
//		cnt++;
//		return 1;
//		
//	}
//	int up = limit ? a[pos] : 9;
//	int ret = 0;
//
//	for (int i = 0; i <= up; i++)
//	{
//		ret += dfs(pos - 1, (limit && i == up));
//	}
//	return ret;
//
//}
//
//
//
//int calc(int x)
//{
//	//1预处理：拆分：
//	while (x)
//	{
//		a[++n] = x % 10;
//		x /= 10;
//	}
//
//	return dfs(n, 1);
//}
//
//
//
//int main()
//{
//	int x;
//	cin >> x;
//	cout << calc(x) << endl;
//	cout << cnt << endl;
//	return 0;
//}

//
////优化：
//#include<cstring>
//#include<iostream>
//using namespace std;
//
//const int N = 15;
//
//int n;
//int a[N];
//int cnt = 0;
//int f[N];
//
//
//int dfs(int pos, bool limit)
//{
//	if (!limit && ~f[pos])  //对该值按位取反，写法等价于： f[pos][limit] != -1;
//	{
//		return f[pos];
//	}
//
//	if (pos == 0)
//	{
//		cnt++;
//		return 1;
//
//	}
//	int up = limit ? a[pos] : 9;
//	int ret = 0;
//
//	for (int i = 0; i <= up; i++)
//	{
//		ret += dfs(pos - 1, (limit && i == up));
//	}
//	if (!limit) f[pos] = ret;
//
//	return ret;
//
//}
//
//int calc(int x)
//{
//
//	//0初始化：
//	memset(f, -1, sizeof(f));
//
//
//	//1预处理：拆分：
//	while (x)
//	{
//		a[++n] = x % 10;
//		x /= 10;
//	}
//
//	return dfs(n, 1);
//}
//
//int main()
//{
//	int x;
//	cin >> x;
//	cout << calc(x) << endl;
//	cout << cnt << endl;
//	return 0;
//}


//数位dp-2;
//
//
//#include<iostream>
//#include<cstring>
//using namespace std;
//typedef long long ll;
//const int N = 20;
//
//
//ll f[N][2][10];
//int num[N];
//
//ll dfs(int pos, bool limit, int dl)
//{
//	if (~f[pos][limit][dl])
//	{
//		return f[pos][limit][dl];
//	}
//	if (pos == 0)
//	{
//		return 1;
//	}
//	int up = limit ? num[pos] : 9;
//	ll ret = 0;
//	bool flag = 0;
//	for (int i = dl; i <= up; i++)
//	{
//		flag = 1;
//		ret += dfs(pos - 1, limit && (i == up), i);
//	}
//	return f[pos][limit][dl] = ret;
//}
//
//
//ll calc(ll x)
//{
//	int n = 0;
//	memset(num, 0, sizeof(num));
//	memset(f, -1, sizeof(f));
//	while (x)
//	{
//		num[++n] = x % 10;
//		x /= 10;
//	}
//	return dfs(n, 1, 0);
//}
//
//
//int main()
//{
//	ll a, b;
//
//	while ((cin >> a >> b))
//	{
//
//		ll x1 = calc(a-1);
//		ll x2 = calc(b);
//
//		cout << x2 - x1 << endl;
//	}
//
//
//
//	return 0;
//}

//
////windy数：
//#include<iostream>
//#include<cstring>
//#include<cstdlib>
//const int N = 12;
//using namespace std;
//
//int a[N];
//int f[N][N];
//int n;
//
//int dfs(int pos, int prev, bool limit, bool zero)
//{
//	if (!limit && !zero && ~f[pos][prev])
//	{
//		return f[pos][prev];
//	}
//	if (pos == 0)
//	{
//		return 1;
//	}
//	int ret = 0;
//	int up = limit ? a[pos] : 9;
//	for (int i = 0; i <= up; i++)
//	{
//		if (zero)
//		{
//			ret += dfs(pos - 1, i, limit && i == a[pos], (i == 0) && zero);
//		}
//		else if(abs(i - prev) >= 2)
//		{
//			ret += dfs(pos - 1, i, limit && i == a[pos], 0);
//		}
//	}
//	if (!limit && !zero)
//	{
//		f[pos][prev] = ret;
//	}
//	return ret;
//}
//
//int calc(int d)
//{
//	int n = 0;
//	memset(f, -1, sizeof(f));
//	memset(a, 0, sizeof(a));
//	while (d)
//	{
//		a[++n] = d % 10;
//		d /= 10;
//	}
//	return dfs(n, 0, 1, 1);
//}
//
//int main()
//{
//	int x, y;
//	cin >> x >> y;
//	cout << calc(y) - calc(x - 1) << endl;
//
//
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//
//using namespace std;
//const int N = 35;
//
//int n;
//int a[N];
//int f[N][N];
//int k, b;
//
//int dfs(int pos, int sum, bool limit)
//{
//	if (!limit && ~f[pos][sum])
//	{
//		return f[pos][sum];
//	}
//	if (pos == 0)
//	{
//		if (sum == k)
//		{
//			return 1;
//		}
//	}
//	int ret = 0;
//	if (limit)
//	{
//		if (a[pos] > 1)
//		{
//			limit = false;
//		}
//	}
//	int up = limit ? a[pos] : 1;
//	for (int i = 0; i <= up; i++)
//	{
//		ret += dfs(pos - 1, sum + i, limit && (i == a[pos]));
//	}
//	if (!limit)
//	{
//		f[pos][sum] = ret;
//	}
//	return ret;
//
//}
//
//
//int calc(int d)
//{
//	memset(f, -1, sizeof(f));
//	int n = 0;
//	while (d)
//	{
//		a[++n] = d % b;
//		d /= b;
//	}
//	return dfs(n, 0, 1);
//}
//
//int main()
//{
//	int x, y;
//	cin >> x >> y;
//
//	cin >> k >> b;
//
//	cout << calc(y) - calc(x - 1) << endl;
//
//
//
//	return 0;
//}

//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//const int N = 35;
//
//int n;
//int a[N];
//int f[N][N][2];
//int k, b;
//
//int dfs(int pos, int sum, bool limit) {
//    if (~f[pos][sum][limit]) {
//        return f[pos][sum][limit];
//    }
//
//    if (pos == 0) {
//        if (sum == k) {
//            return 1;
//        }
//    }
//
//    int ret = 0;
//
//
//    int up = limit ? min(a[pos], 1) : 1;
//
//    for (int i = 0; i <= up; i++) {
//        ret += dfs(pos - 1, sum + i, limit && (i == a[pos]));
//    }
//
//    return f[pos][sum][limit] = ret;
//
//}
//
//
//int calc(int d) {
//    memset(f, -1, sizeof(f));
//    int n = 0;
//
//    while (d) {
//        a[++n] = d % b;
//        d /= b;
//    }
//
//    return dfs(n, 0, 1);
//}
//
//int main() {
//    int x, y;
//    cin >> x >> y;
//
//    cin >> k >> b;
//
//    cout << calc(y) - calc(x - 1) << endl;
//
//
//
//    return 0;
//}

//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<algorithm>
//#include<cmath>
//#include<queue>
//#include <deque>
//#include <stack>
//#include<iomanip>
//#include <chrono>
//#include<random>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int, int> PII;
//const int N = 35;
//#define endl '\n'
//
//int k;
//int a[N];
//int f[N];
//int n;
//
//
//int dfs(int pos, bool limit)
//{
//   
//    if (pos == 1)
//    {
//        return 1;
//    }
//    int ret = 0;
//    int up = limit ? a[pos] : (k - 1);
//    for (int i = 0; i <= up; i++)
//    {
//        
//        ret += dfs(pos - 1, limit && i == a[pos]);
//    }
//
// 
//    return ret;
//}
//
//
//
//int calc(int d)
//{
//    if (d < k)
//    {
//        return 0;
//    }
//    else
//    {
//        memset(f, -1, sizeof(f));
//        int n = 0;
//        while (d)
//        {
//            a[++n] = d % k;
//
//            d /= k;
//        }
//        return dfs(n, 1) - 1;
//    }
//    
//}
//
//void solve()
//{
//    //不要忘记清空数组；
//    //你个nt递归死路记得也要写返回；
//    int a, b;
//    while (cin >> a >> b >> k)
//    {
//
//        if (k == 1)
//        {
//            cout << b - a + 1 << endl;
//        }
//        else
//        {
//            cout << calc(b) - calc(a - 1) << endl;
//        }
//    }
//  
// 
//  
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
//
//    while (TestCase--)
//        solve();
//}

//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<algorithm>
//#include<cmath>
//#include<queue>
//#include <deque>
//#include <stack>
//#include<iomanip>
//#include <chrono>
//#include<random>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int, int> PII;
//const int N = 1000;
//#define endl '\n'
//
//int k = 0;
//int n;
//int a[N];
//int f[N][N];
//
//int dfs(int pos, int su, bool limit)
//{
//    if (!limit && ~f[pos][su])
//    {
//        return f[pos][su];
//    }
//    if (pos == 0)
//    {
//        if (!su)
//        {
//            return 1;
//        }
//        else
//        {
//            return 0;
//        }
//    }
//    int ret = 0;
//    int up = limit ? a[pos] : 9;
//    for (int i = 0; i <= up; i++)
//    {
//        ret += dfs(pos - 1, (su + i) % k, limit && a[pos] == i);
//    }
//    if (!limit)
//    {
//        f[pos][su] = ret;
//    }
//    return ret;
//}
//
//int calc(int d)
//{
//    memset(f, -1, sizeof(f));
//    int n = 0;
//
//    while (d)
//    {
//        a[++n] = d % 10;
//        d /= 10;
//    }
//    return dfs(n, 0, 1);
//}
//
//void solve()
//{
//    //不要忘记清空数组；
//    //你个nt递归死路记得也要写返回；
//    int a, b;
//
//    while (cin >> a >> b >> k)
//    {
//        cout << calc(b) - calc(a - 1) << endl;
//    }
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
// 
//    while (TestCase--)
//        solve();
//}

//
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<algorithm>
//#include<cmath>
//#include<queue>
//#include <deque>
//#include <stack>
//#include<iomanip>
//#include <chrono>
//#include<random>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int, int> PII;
//const int N = 1000;
//#define endl '\n'
//
//int n;
//int f[N][N];
//int a[N];
//
//int dfs(int pos, int prev, bool limit)
//{
//    if (!limit && ~f[pos][prev])
//    {
//        return f[pos][prev];
//    }
//    if (pos == 0)
//    {
//        return 1;
//    }
//    int ret = 0;
//    int up = limit ? a[pos] : 9;
//    for (int i = 0; i <= up; i++)
//    {
//        if (i == 4) continue;
//        if (prev == 6 && i == 2) continue;
//        ret += dfs(pos - 1, i, limit && a[pos] == i);
//    }
//    if (!limit)
//    {
//        f[pos][prev] = ret;
//    }
//    return ret;
//}
//
//int calc(int d)
//{
//    n = 0;
//    memset(f, -1, sizeof(f));
//    while (d)
//    {
//        a[++n] = d % 10;
//        d /= 10;
//    }
//    return dfs(n, 0, 1);
//}
//
//void solve()
//{
//    //不要忘记清空数组；
//    //你个nt递归死路记得也要写返回；
//    int A, b;
//    while (true)
//    {
//        cin >> A >> b;
//        if (A == 0 && b == 0)
//        {
//            break;
//        }
//        cout << calc(b) - calc(A- 1) << endl;
//    }
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
//    while (TestCase--)
//        solve();
//}


//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<algorithm>
//#include<cmath>
//#include<queue>
//#include <deque>
//#include <stack>
//#include<iomanip>
//#include <chrono>
//#include<random>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int, int> PII;
//const int N = 1000;
//#define endl '\n'
//
//ll n = 0;
//ll f[N];
//ll a[N];
//
//void dfs(ll pos, bool limit, map<ll, ll>& mp)
//{
//    if (pos == 0)
//    {
//        return;
//    }
//    int up = limit ? a[pos] : 9;
//    for (int i = 0; i <= 9; i++)
//    {
//        mp[i]++;
//        dfs(pos - 1, limit && a[pos] == i, mp);
//    }
//    return;
//}
//
//void calc(ll d, map<ll, ll>& mp)
//{
//    n = 0;
//    memset(f, -1, sizeof(f));
//    while (d)
//    {
//        a[++n] = d % 10;
//        d /= 10;
//    }
//    dfs(n, 1, mp);
//}
//
//
//map<ll, ll> mpy;
//map<ll, ll> mpx;
//
//void solve()
//{
//    
//    //不要忘记清空数组；
//    //你个nt递归死路记得也要写返回；
//    ll x, y;
//    cin >> x >> y;
//
//    
//
//    calc(y, mpy);
//    calc(x - 1, mpx);
//    for (int i = 0; i <= 9; i++)
//    {
//        cout <<  mpx[i] << " ";
//    }
//    
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
//   
//    while (TestCase--)
//        solve();
//}

