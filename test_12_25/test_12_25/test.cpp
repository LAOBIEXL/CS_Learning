#define _CRT_SECURE_NO_WARNINGS

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
//const int N = 1e5 + 10;
//#define endl '\n'
//int a[N];
//void solve()
//{
//    //不要忘记清空数组；
//
//}
//
//
//
//signed main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    int q;
//    cin >> q;
//    for (int i = 0; i < q; i++)
//    {
//        int x, y;
//        cin >> x >> y;
//        int left = 0, right = n - 1;
//        while (left < right)
//        {
//            int mid = (left + right) / 2;
//            if (a[mid] >= x)
//            {
//                right = mid;
//            }
//            else
//            {
//                left = mid + 1;
//            }
//        }
//        int pos1 = left;
//   
//        left = 0, right = n - 1;
//        while (left < right)
//        {
//            int mid = (left + right + 1) / 2;
//            if (a[mid] <= y)
//            {
//                left = mid;
//            }
//            else
//            {
//                right = mid - 1;
//            }
//        }
//        int pos2 = left;
//     
//        cout << pos2 - pos1 + 1 << endl;
//    }
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
//const int N = 1e5 + 10;
//int a[N], b[N];
//
//signed main()
//{
//    int m, n;
//    cin >> m >> n;
//    for (int i = 1; i <= m; i++)
//    {
//        cin >> a[i];
//    }
//    a[0] = -200000000;
//    sort(a, a + m);
//    ll ret = 0;
//    for (int i = 0; i < n; i++)
//    {
//        int t = 0;
//        cin >> t;
//        int* pos1 = lower_bound(a, a + m, t);
//        int* pos2 = pos1 - 1;
//        ret += min(abs(*pos1 - t), abs(*pos2 - t));
//    }
//    cout << ret << endl;
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
//const int N = 1e5 + 10;
//int a[N], b[N];
//
//signed main()
//{
//    int m, n;
//    cin >> m >> n;
//    for (int i = 1; i <= m; i++)
//    {
//        cin >> a[i];
//    }
//    a[m + 1] = 0x3f3f3f3f;
//    m++;
//    a[0] = -200000000;
//    sort(a, a + m + 1);
//    ll ret = 0;
//    for (int i = 0; i < n; i++)
//    {
//        int t = 0;
//        cin >> t;
//
//        int* pos1 = lower_bound(a, a + m + 1, t);
//        cout << *pos1 << endl;
//        int* pos2 = pos1 - 1;
//        ret += min(abs(*pos1 - t), abs(*pos2 - t));
//    }
//    cout << ret << endl;

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
//const int N = 2e5 + 10;
//ll a[N];
//signed main()
//{
//	ll n, c;
//	cin >> n >> c;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + n);
//	ll ret = 0;
//	for (int i = 0; i < n; i++)
//	{
//		ll t = a[i] - c;
//		ll* pos1 = lower_bound(a, a + n, t);
//		ll* pos2 = upper_bound(a, a + n, t);
//		ret += pos2 - pos1;
//	}
//	cout << ret << endl;
//
//
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
//const int N = 0;
//#define endl '\n'
//vector<int> a(13);
//
//void solve()
//{
//    //不要忘记清空数组；
//    for (int i = 0; i < 13; i++)
//    {
//        cin >> a[i];
//    }
//    sort(a.begin(), a.end());
//    ll ret = 0;
//    while (a[11] != 0)
//    {
//        if (a[11] == a[10])
//        {
//            a[12] -= 1;
//            a[11] -= 1;
//            ret += 1;
//            sort(a.begin(), a.end());
//            continue;
//        }
//        ret += (a[11] - a[10]);
//        a[12] -= (a[11] - a[10]);
//        a[11] = a[10];
//        sort(a.begin(), a.end());
//    }
//    cout << ret << endl;
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
//    cin >> TestCase;
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
//const int N = 2e5 + 10;
//#define endl '\n'
//char a[N];
//char ret[N];
//ll cnt;
//char choose[3] = { 'R', 'G', 'B' };
//int n;
//void dfs(int pos)
//{
//    if (pos > n)
//    {
//        cnt++;
//        return;
//    }
//    if (ret[pos] != 0)
//    {
//        dfs(pos + 1);
//        return;
//    }
//    for (int k = 0; k < 3; k++)
//    {
//        char ch = choose[k];
//        if (ch == ret[pos - 1] || ch == ret[pos + 1]) continue;
//        ret[pos] = ch;
//        dfs(pos + 1);
//        ret[pos] = 0;
//    }
//}
//
//void solve()
//{
//    //不要忘记清空数组；
//    cnt = 0;
//    memset(ret, 0, sizeof(ret));
//    cin >> n;
//    int flag = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        if (a[i] == 'R' || a[i] == 'G' || a[i] == 'B')
//        {
//            ret[i] = a[i];
//            if (a[i] == a[i - 1])
//            {
//                flag = 0;
//            }
//
//        }
//    }
//    if (flag)
//    {
//        dfs(1);
//        cout << cnt << endl;
//    }
//    else
//    {
//        cout << 0 << endl;
//    }
//
//    
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
//    cin >> TestCase;
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
//const int N = 2e5 + 10;
//#define endl '\n'
//char a[N];
//const ll mod = 1e9 + 7;
//
//ll q_pow(ll d, ll q, ll mod)
//{
//    ll cnt = 1;
//    while (q)
//    {
//        if (q & 1) cnt = cnt * d % mod;
//        d = d * d % mod;
//        q >>= 1;
//    }
//    return cnt;
//}
//
//void solve()
//{
//    int n;
//    cin >> n;
//    vector<pair<int, char>> mp;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        if (a[i] != '0')
//        {
//            mp.push_back({ i, a[i] });
//        }
//    }
//
//    ll ret = 0;
//    if (mp.size() == 0)
//    {
//        ret = q_pow(2, n - 1, mod) * 3;
//        cout << ret % mod << endl;
//        return;
//    }
//    //处理i= 0；
//    int pos1 = mp[0].first - 1;
//    ret = q_pow(2, pos1, mod);
// 
//    int flag = 1;
//    for (int i = 0; i < mp.size() - 1; i++)
//    {
//        int len = mp[i + 1].first - mp[i].first - 1;
//        if (len == 0 && mp[i].second == mp[i + 1].second)
//        {
//            flag = 0;
//            ret = 0;
//            break;
//        }
//        else if (len == 0)
//        {
//            continue;
//        }
//        if (len % 2 == 0)
//        {
//            if (mp[i].second != mp[i + 1].second)
//            {
//                int t = len / 2;
//                ll tmp = 1;
//                for (int j = 0; j < t; j++)
//                {
//                    tmp = (tmp * 4 - 1) % mod;
//                }
//                ret = ret * tmp % mod;
//            }
//            else
//            {
//                int t = len / 2;
//                ll tmp = 0;
//                for (int j = 0; j < t; j++)
//                {
//                    tmp = (tmp * 4 + 2) % mod;
//                }
//                ret = ret * tmp % mod;
//            }
//        }
//        else
//        {
//            if (mp[i].second != mp[i + 1].second)
//            {
//                int t = (len - 1) / 2;
//                ll tmp = 1;
//                for (int i = 0; i < t; i++)
//                {
//                    tmp = (4 * tmp + 1) % mod;
//                }
//                ret = ret * tmp % mod;
//            }
//            else
//            {
//                int t =( len - 1 )/ 2;
//                ll tmp = 2;
//                for (int i = 0; i < t; i++)
//                {
//                    tmp = (4 * tmp - 2) % mod;
//                }
//                ret = ret * tmp % mod;
//            }
//        }
//    }
//    //处理i = mp.size() - 1;
//    int pos2 = int(mp.size() - 1);
//    if (flag && mp[pos2].first != n)
//    {
//        int len = (n - mp[pos2].first);
//        ret = (ret * q_pow(2, len, mod)) % mod;
//    }
//
//    cout << ret % mod<< endl;
//    return;
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
//    cin >> TestCase;
//    while (TestCase--)
//        solve();
//}
//
//

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
//const int N = 3e4 + 10;
//
//
//signed main()
//{
//    int w, n;
//    cin >> w >> n;
//    vector<int> a(n);
//    ll ret = 0;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    int left = 0, right = n - 1;
//    sort(a.begin(), a.end());
//    while (left < right)
//    {
//        if (a[left] + a[right] <= w)
//        {
//            ret++;
//            left++;
//            right--;
//        }
//        else
//        {
//            right--;
//            ret++;
//        }
//    }
//    if (left == right)
//    {
//        ret++;
//    }
//    cout << ret << endl;
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
//const int N = 0;
//
//
//signed main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    sort(a.begin(), a.end());
//    ll ret = 0;
//    /*if (n % 2 == 0)
//    {
//        int l = 0, r = n - 1;
//        while (l < r)
//        {
//            ret += a[r--] - a[l++];
//
//        }
//
//    }
//    else
//    {
//        int l = 0, r = n - 1;
//        while (l < r)
//        {
//            ret += a[r--] - a[l++];
//        }
//    }*/
//    int l = 0, r = n - 1;
//    while (l < r)
//    {
//        ret += a[r--] - a[l++];
//    }
//    cout << ret << endl;
//
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
//const int N = 1e3 + 10;
//#define endl '\n'
//
//struct node {
//	ll index;
//	ll num;
//}k[N], l[N];
//
//bool cmp(const node& a, const node& b)
//{
//	return a.num > b.num;
//}
//
//bool cmp2(node& a, node& b)
//{
//	return a.index < b.index;
//}
//
//signed main()
//{
//	int M, N, K, L, D;
//	cin >> M >> N >> K >> L >> D;
//	for (int i = 1; i <= M; i++)
//	{
//		k[i].index = i;
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		l[i].index = i;
//	}
//	for (int i = 1; i <= D; i++)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		if (x1 == x2)
//		{
//			int y_min = min(y1, y2);
//			int y_max = max(y1, y2);
//	/*		l[y_min].index = y_min;*/
//			l[y_min].num++;
//		}
//		else if (y1 == y2)
//		{
//			int x_min = min(x1, x2);
//			int y_max = max(x1, x2);
//	/*		k[x_min].index = x_min;*/
//			k[x_min].num++;
//		}
//	}
//	sort(k, k + M, cmp);
//	sort(l, l + N, cmp);
//
//	sort(k, k + K, cmp2);
//	sort(l, l + L, cmp2);
//	for (int i = 0; i < K; i++)
//	{
//		cout << k[i].index << " ";
//	}
//	cout << endl;
//	for (int j = 0; j < L; j++)
//	{
//		cout << l[j].index << " ";
//	}
//	cout << endl;
//
//
//	//unordered_set<int> a;
//	//unordered_set<int> b;
//	//ll max_index_k = 0;
//	//ll max_index_l = 0;
//	/*for (int i = 0; i < K; i++)
//	{
//		max_index_k = max(k[i].index, max_index_k);
//		a.insert(k[i].index);
//	}
//	for (int j = 0; j < L; j++)
//	{
//		max_index_l = max(l[j].index, max_index_l);
//		b.insert(l[j].index);
//	}
//	for (int i = 1; i < max_index_k; i++)
//	{
//		if (a.count(i)) cout << i << " ";
//	}
//	cout << max_index_k << endl;
//	for (int i = 1; i < max_index_l; i++)
//	{
//		if (b.count(i)) cout << i << " ";
//	}
//	cout << max_index_l << endl;*/
//
//
//
//}


#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<cmath>
#include<queue>
#include <deque>
#include <stack>
#include<iomanip>
#include <chrono>
#include<random>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;
const int N = 30;
ll a[N][N];
ll fake_a[N][N];

signed main()
{	
	ll n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	
	
	ll ret = 0;
	for (ll st = 0; st < (1 << m); st++)
	{
		memcpy(fake_a, a, sizeof(a));
		ll tmp = 0;
		ll pos = 0;
		ll k_se = st;
		ll choo = 0;
		while (k_se)
		{
			if (k_se & 1)
			{
				for (int i = 0; i < n; i++)
				{
					tmp += fake_a[i][pos];
					fake_a[i][pos] = 0;
					
				}
				choo++;
			}
			pos++;
			k_se >>= 1;
		}
		if (choo > k) continue;

		//贪心；
		vector<ll> rows;
		
		for (int i = 0; i< n; i++)
		{
			ll t = 0;
			for (int j = 0; j < m; j++)
			{
				t += fake_a[i][j];
			}
			rows.push_back(t);
		}
		sort(rows.rbegin(), rows.rend());
		for (int i = 0; i < min(n, k - choo); i++)
		{
			tmp += rows[i];
		}
		ret = max(ret, tmp);
	}
	cout << ret << endl;
}