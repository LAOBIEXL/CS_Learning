#define _CRT_SECURE_NO_WARNINGS


//#include<iostream>
//#include<unordered_map>
//#include<cmath>
//using namespace std;
//int a[30];
//int n, k;
//int icount;
//int sum;
//
//
//int prime(int d)
//{
//	if (d <= 1) return 0;//小于1的边界情况；
//	for (int i = 2; i <= sqrt(d); i++)
//	{
//		if (d % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//
//void dfs(int pos, int begin)
//{
//	if (pos > k)
//	{
//		if (prime(sum))
//		{
//			icount++;
//		
//
//		return;//这个return；
//	}
//
//	for (int i = begin; i < n; i++)
//	{
//			sum += a[i];
//			dfs(pos + 1, i + 1);
//			sum -= a[i];
//	}
//}
//
//int main()
//{
//	
//	
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		int t;
//		cin >> t;
//		a[i] = t;
//	}
//	
//	dfs(1, 0);
//
//	cout << icount << endl;
//
//	return 0;
//}
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
//using namespace std;
//const int N = 20;
//using namespace std;
//#define endl '\n'
//int n;
//int T[N], D[N], L[N];
//int st[N];
//
//
//bool dfs(int pos, int ti)
//{
//    if (pos > n)
//    {
//        return true;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (st[i]) continue;
//        if (T[i] + D[i] < ti) continue;
//        st[i] = 1;
//        int tmp = max(T[i], ti) + L[i];
//        if (dfs(pos + 1, tmp)) return true;
//        st[i] = 0;
//    }
//    return false;
//}
//
//void solve()
//{
//    memset(st, 0, sizeof(st));
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> T[i] >> D[i] >> L[i];
//    }
//    bool flag = dfs(1, 0);
//    if (flag) cout << "YES" << endl;
//    else cout << "NO" << endl;
//
//}
//
//signed main()
//{
//    
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int t = 1;
//    cin >> t;
//    while (t--)
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
//using namespace std;
//const int N = 30;
//using namespace std;
//#define endl '\n'
//int st[N], stm[2 * N], sts[2 * N];
//int n;
//int ret;
//vector<int> path;
//void dfs(int pos)
//{
//    if (pos > n)
//    {
//        ret++;
//        if (ret <= 3)
//        {
//            for (auto e : path) cout << e << " ";
//            cout << endl;
//        }
//        return;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (st[i] || stm[pos + i + 10] || sts[pos - i + 10]) continue;
//        st[i] = stm[pos + i + 10] = sts[pos - i + 10] = 1;
//        path.push_back(i);
//        dfs(pos + 1);
//        path.pop_back();
//        st[i] = stm[pos + i + 10] = sts[pos - i + 10] = 0;
//    }
//}
//
//
//void solve()
//{
//    //不要忘记清空数组；
//    cin >> n;
//    dfs(1);
//    cout << ret << endl;
//
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//  
//    solve();
//}      