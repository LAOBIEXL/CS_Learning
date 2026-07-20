#define _CRT_SECURE_NO_WARNINGS

//#include<vector>
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int m, n, q;
//
//int getId(int x, int y)
//{
//	return (x - 1) * m + y - 1;
//}
//
//
//vector<int> parent;
//vector<int> sz;
//vector<bool> active;
////数组的创建需要全局，但是问题是toatl无法全局，所以必须要resize;
//
//int find(int x)
//{
//	if (parent[x] == x)
//	{
//		return x;
//	}
//	else
//	{
//		return parent[x] = find(parent[x]);
//	}
//}
//
//void merge(int a, int b)
//{
//	int rootA = find(a);
//	int rootB = find(b);
//	if (rootA == rootB)
//	{
//		return;
//	}
//	else
//	{
//		if (sz[rootA] < sz[rootB])
//		{
//			swap(rootA, rootB);
//		}
//		sz[rootA] += sz[rootB];
//		parent[rootB] = parent[rootA];
//		return;
//	}
//}
//
//int getSize(int x)
//{
//	return sz[find(x)];
//}
//
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//
//
//int main()
//{
//	cin >> n >> m >> q;
//
//
//
//	int total = m * n;
//	parent.resize(total, 0);
//	sz.assign(total, 1);
//	active.assign(total, false);
//
//	for (int i = 0; i < total; i++)
//	{
//		parent[i] = i;
//	}
//
//	for (int i = 0; i < q; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//
//		int id = getId(a, b);
//		active[id] = true;
//
//		for (int d = 0; d < 4; d++)
//		{
//			int xx = a + dx[d];
//			int yy = b + dy[d];
//			if (xx < 1 || xx > n || yy < 1 || yy > m) continue;
//			//先检验合法性再判断
//			int id2 = getId(xx, yy);
//			if (!active[id2]) continue;
//			merge(id2, id);
//		}
//		
//		cout << getSize(id) << endl;
//	}
//
//
//
//
//
//	return 0;
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
//const int MOD = 0;
//#define endl '\n'
//
////没有返回值也别忘写return！！！！！！！！！！！！！！
//
//vector<int> parent;
//vector<int> mx;
//
//int find(int x)
//{
//    if (parent[x] == x)
//    {
//        return x;
//    }
//
//    int oldParent = parent[x];
//    parent[x] = find(oldParent);
//    mx[x] = max(mx[x], mx[oldParent]);
//    return parent[x];
//}
//
//void unite(int a, int b, int w)
//{
//    int rootA = find(a);
//    int rootB = find(b);
//
//    parent[rootA] = rootB;
//    mx[rootA] = w;
//   
//}
//
//int getValue(int x)
//{
//    find(x);
//    return mx[x];
//}
//
//void solve()
//{
//    int n, q;
//    cin >> n >> q;
//    parent.resize(n + 1);
//    mx.resize(n + 1, 0);
//
//    for (int i = 0; i < n; i++)
//    {
//        parent[i] = i;
//    }
//
//    while (q--)
//    {
//        int o;
//        cin >> o;
//        if (o == 1)
//        {
//            int a, b, w;
//            cin >> a >> b >> w;
//            unite(a, b, w);
//        }
//        else if (o == 2)
//        {
//            int x;
//            cin >> x;
//            cout << getValue(x) << endl;
//        }
//    }
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
//    //cin >> TestCase;
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
//const int MOD = 0;
//#define endl '\n'
//
////没有返回值也别忘写return！！！！！！！！！！！！！！
//
//int newcode = 0;
//vector<int> parent;
//vector<int> sz;
//vector<int> mx;
//
//void init(int total)
//{
//    parent.assign(total + 1, 0);
//    sz.assign(total + 1, 1);
//    mx.assign(total + 1, 0);
//    for (int i = 0; i <= total; i++)
//    {
//        parent[i] = i;
//    }
//    return;
//}
//
//int find(int x)
//{
//    if (parent[x] == x)
//    {
//        return x;
//    }
//    
//    int oldParent = parent[x];
//    parent[x] = find(oldParent);
//
//    mx[x] = max(mx[x], mx[oldParent]);
//    
//    return parent[x];
//}
//
//void unite(int a, int b, int w)
//{
//    int rootA = find(a);
//    int rootB = find(b);
//    if (rootA == rootB)
//    {
//        return;
//    }
//
//    parent[rootB] = rootA;
//    sz[rootA] += sz[rootB];
//    mx[rootB] = w;
//    return;
//}
//
//int getValue(int x)
//{
//    find(x);
//    return mx[x];
//}
//
//void solve()
//{
//    int q;
//    cin >> q;
//    init(q);
//    while (q--)
//    {
//        int o;
//        cin >> o;
//        if (o == 1)
//        {
//            int id = ++newcode;
//            int v;
//            cin >> v;
//            int k;
//            cin >> k;
//            vector<int> roots;
//            while (k--)
//            {
//                int b;
//                cin >> b;
//                roots.push_back(find(b));
//            }
//            if (!roots.empty())
//            {
//                sort(roots.begin(), roots.end());
//                roots.erase(unique(roots.begin(), roots.end()), roots.end());
//                for (auto e : roots)
//                {
//                    int w = v - sz[e] + 1;
//                    unite(id, e, w);
//                }
//            }
//
//        }
//        else if (o == 2)
//        {
//            int x;
//            cin >> x;
//            cout << getValue(x) << endl;
//        }
//    }
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
//    //cin >> TestCase;
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
//const int N = 0;
//const int MOD = 0;
//#define endl '\n'
//
//int n, m, q;
//int l = 0;
//vector<bool> active;
//vector<int> sz;
//vector<int> parent;
//vector<int> mx;
//vector<int> weight;
//
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//
//
////没有返回值也别忘写return！！！！！！！！！！！！！！
//
//int getId(int x, int y)
//{
//    return x * m + y;
//}
//
//void init(int total)
//{
//    active.assign(total, false);
//    parent.assign(total, 0);
//    sz.assign(total, 1);
//    mx.assign(total, 0);
//    weight.assign(total, 0);
//    
//    for (int i = 0; i < total; i++)
//    {
//        parent[i] = i;
//    }
//}
//
//int find(int x)
//{
//    if (parent[x] == x)
//    {
//        return x;
//    }
//
//    int oldParent = parent[x];
//    parent[x] = find(oldParent);
//    mx[x] = max(mx[x], mx[oldParent]);
//
//    return parent[x];
//}
//
//
//
//
//void solve()
//{
//    cin >> n >> m >> q;
//    int total = n * m;
//    
//    init(total);
//
//    while (q--)
//    {
//        int o;
//        cin >> o;
//        if (o == 1)
//        {
//            int _x, _y, v;
//            cin >> _x >> _y >> v;
//            int x = _x ^ l;
//            int y = _y ^ l;
//            int id_new = getId(x - 1, y - 1);
//            active[id_new] = true;
//            weight[id_new] = v;
//            vector<int> roots;
//            for (int d = 0; d < 4; d++)
//            {
//                int xx = x + dx[d];
//                int yy = y + dy[d];
//                if (xx <1 || xx > n || yy < 1 || yy > m) continue;
//                int id_old = getId(xx - 1, yy - 1);
//                if (!active[id_old]) continue;
//
//                roots.push_back(find(id_old));
//            }
//            sort(roots.begin(), roots.end());
//            roots.erase(unique(roots.begin(), roots.end()), roots.end());
//            for (auto e : roots)
//            {
//                parent[e] = id_new;
//                sz[id_new] += sz[e];
//                mx[e] = v - sz[e] + 1;
//            }
//
//            l = sz[id_new] - 1;
//            cout << l << endl;
//        }
//        else if (o == 2)
//        {
//            int _x, _y;
//            cin >> _x >> _y;
//            int x = _x ^ l;
//            int y = _y ^ l;
//            int id = getId(x - 1, y - 1);
//            int w = weight[id];
//            find(id);
//            if (w >= mx[id])
//            {
//                l = 0;
//                cout << l << endl;
//            }
//            else
//            {
//                l = mx[id] - w;
//                cout << l << endl;
//            }
//        }
//    }
//
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
//    //cin >> TestCase;
//    while (TestCase--)
//        solve();
//}



#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<cmath>
using namespace std;

typedef long long ll;
int main() {
    int T;
    cin >> T;
    while (T--) {
        ll N, M, K;
        cin >> N >> M >> K;
        ll LIM = pow(2, K) - 1;

        vector<ll> numN(N);
        vector<ll> numM(M);
        map<ll, ll> Mpos;
        map<ll, ll> Npos;
        for (ll i = 0; i < N; i++) { cin >> numN[i]; Npos[numN[i]] = i; }
        for (ll i = 0; i < M; i++) { cin >> numM[i]; Mpos[numM[i]] = i; }
        vector<ll> newarr;
        for (ll i = 0; i < N; i++) {
            ll tmp = numN[i] ^ LIM;
            if (Mpos.count(tmp))
            {
                newarr.push_back(Mpos[tmp]);
            }
        }
        ll pos = 0;
        ll sz = newarr.size();
        ll Mcnt = 0;

        vector<int> tails;
        for (int i = 0; i < sz; i++)
        {
            auto it = lower_bound(newarr.begin(), newarr.end(), newarr[i]);
            if (it == newarr.end())
            {
                tails.push_back(newarr[i]);
            }
            else
            {
                *it = newarr[i];
            }
        }

        cout << newarr.size() << endl;



    }
    return 0;
}