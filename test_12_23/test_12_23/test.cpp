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
//const int N = 1e4 + 10;
//int a[N];
//int t1[N];
//int t2[N];
//
//signed main()
//{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    t1[1] = 0;
//    int flag1 = 1;
//    int flag2 = 1;
//    t2[1] = 1;
//    for (int i = 2; i <= n; i++)
//    {
//        t1[i] = a[i - 1] - t1[i - 2] - t1[i - 1];
//        if (t1[i] > 1 || t1[i] < 0)
//        {
//            flag1 = 0;
//            break;
//        }
//        if (i == n)
//        {
//            if (t1[n] + t1[n - 1] != a[n]) flag1 = 0;
//        }
//    }
//    for (int i = 2; i <= n; i++)
//    {
//        t2[i] = a[i - 1] - t2[i - 2] - t2[i - 1];
//        if (t2[i] > 1 || t2[i] < 0)
//        {
//            flag2 = 0;
//            break;
//        }
//        if (i == n)
//        {
//            if (t2[n] + t2[n - 1] != a[n]) flag2 = 0;
//        }
//    }
//    cout << flag1 + flag2  << endl;
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
//
//int ret = 10000;
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int a[5] = {};
//		int t[5] = {};
//		for (int i = 0; i < 5; i++)
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				char t;
//				cin >> t;
//				if (t == '0') a[i] = a[i] |= (1 << j);
//			}
//		}
//		int ret = 0x3f3f3f3f;
//		for (int st = 0; st < (1 << 5); st++)
//		{
//			memcpy(t, a, sizeof(a));
//			int push = st; // 要养成操作变量和循环变量互相区分和备份的习惯，保证源数据的正确性；
//			int cnt = 0;
//			for (int i = 0; i < 5; i++)
//			{
//				t[i] = push ^ t[i] ^ (push >> 1) ^ (push << 1);
//				t[i] = t[i] & ((1 << 5) - 1);
//
//				int tmp = push;
//				while (tmp)
//				{
//					cnt++;
//					tmp &= tmp - 1;
//				}
//
//				//对第一行的；
//				t[i + 1] = t[i + 1] ^ push;
//				push = t[i];
//			}
//			if (t[4] == 0) ret = min(ret, cnt);
//		}
//		if (ret > 6) cout << -1 << endl;
//		else cout << ret << endl;
//	}
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
//const int N = 110;
//
//signed main()
//{
//    int n;
//    cin >> n;
//
//    int a[N] = {};
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    cout << 1 << " " << n << " ";
//    int mini = 110;
//    int maxi = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        mini = min(mini, a[i]);
//        maxi = max(maxi, a[i]);
//    }
//    cout << maxi - mini << endl;
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
//const int N = 210;
//int p[N], q[N], w[N];
//
//signed main()
//{
//    int n, m;
//    cin >> n >> m;
//    int ret = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> p[i] >> q[i] >> w[i];
//        int need = ceil(m * (1.0 * p[i] / q[i]));
//        if (w[i] < need)
//        {
//            ret += need - w[i];
//        }
//    }
//    cout << ret << endl;
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
//#include<cctype>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int, int> PII;
//const int N = 0;
//#define endl '\n'
//
//
//void find_sub()
//{
//
//}
//
//void solve()
//{
//    //不要忘记清空数组；
//    string ret;
//    string s;
//    cin >> s;
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (isupper(s[i]))
//        {
//            ret.push_back(s[i] + 32);
//        }
//        else
//        {
//            ret.insert(0, 1, s[i]);
//        }
//        int tmp_ret = 0;
//        for (int j = 0; j < ret.size(); j++)
//        {
//            if (ret[j] == 'a')
//            {
//                int flag1 = 1;
//                int tmp_c = 0;
//                int tmp_m = 0;
//                for (int z = j + 1; z < ret.size(); z++)
//                {
//                    if (ret[z] == 'c' && flag1 == 1)
//                    {
//                        tmp_c++;
//                    }
//                    else if (ret[z] == 'm' && flag1 == 1)
//                    {
//                        tmp_m ++;
//                        flag1 = 0;
//                    }
//                    else if (flag1 == 0 && ret[z] == 'm')
//                    {
//                        tmp_m++;
//                    }
//                    else if (flag1 == 0 && ret[z] == 'c')
//                    {
//                        tmp_ret += tmp_m * tmp_c;
//                        tmp_m = tmp_c = 0;
//                        flag1 = 1;
//                    }
//                }
//                if (flag1 == 0)
//                {
//                    tmp_ret += tmp_m * tmp_c;
//                }
//            }
//        }
//        cout << tmp_ret % int(1e9 + 7)<< " ";
//    }
//    cout << endl;
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
//
//signed main()
//{
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
//const int N =10;
//
//
//signed main()
//{
//    int TestCase = 1;
//    cin >> TestCase;
//    while (TestCase--)
//    {
//        int n;
//        cin >> n;
//        vector<vector<int>> edges(n +10);
//    //不要忘记清空数组；
//    
//    for (int i = 0; i < n - 1; i++)
//    {
//        int a, b;
//        cin >> a >> b;
//        edges[a].push_back(b);
//        edges[b].push_back(a);
//    }
//    int ret = -1;
//    int pos = -1;
//    for (int i = 1; i <= n; i++)
//    {
//        int t = 0;
//
//        for (auto e : edges[i])
//        {
//            t += edges[e].size() - 1;
//        }
//
//        if (t >= ret)
//        {
//            pos = i;
//            ret = t;
//        }
//    }
//    cout << pos << " " << ret << endl;
//
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
//const int N = 2e5 + 10;
//int sum_pre[N], a[N];
//
//bool cmp(int a, int b)
//{
//    return a > b;
//}
//
//signed main()
//{
//    int n;
//    cin >> n;
//    int sum_all = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        if (i == 1) continue;
//        sum_pre[i - 1] = a[i] - a[i - 1];
//        sum_all += sum_pre[i - 1];
//    }
//    sort(sum_pre + 1, sum_pre + n, cmp);
//    for (int j = 1; j <= n; j++)
//    {
//        cout << (sum_all = sum_all - sum_pre[j - 1]) << " ";
//    }
//    cout << endl;
//
//    
//}