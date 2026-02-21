#define _CRT_SECURE_NO_WARNINGS
//数字计数 dp

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
//const int N = 200;
//#define endl '\n'
//
//int d;
//int a[N];
//int n;
//ll f[N][N];
//
//ll dfs(int pos, ll sum,bool zero,  bool limit)
//{
//    if (!zero && !limit && ~f[pos][sum])
//    {
//        return f[pos][sum];
//    }
//    if (pos == 0)
//    {
//        return sum;
//    }
//    ll ret = 0;
//    int up = limit ? a[pos] : 9;
//    for (int i = 0; i <= up; i++)
//    {
//        int t = (d == i);
//        if (zero && !i) t = 0;
//        ret += dfs(pos - 1, sum + t, zero && !i, limit && a[pos] == i);
//    }
//    if (!limit && !zero)
//    {
//        f[pos][sum] = ret;
//    }
//    return ret;
//}
//
//ll calc(ll v)
//{
//    memset(f, -1, sizeof(f));
//    int n = 0;
//    while (v)
//    {
//        a[++n] = v % 10;
//        v /= 10;
//    }
//    return dfs(n, 0, 1, 1);
//}
//
//
//void solve()
//{
//    //不要忘记清空数组；
//    //你个nt递归死路记得也要写返回；
//    ll x, y;
//    cin >> x >> y;
//    for (d = 0; d <= 9; d++)
//    {
//        cout << calc(y) - calc(x - 1) << " ";
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

//digit folding 数位dp：

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
////没有返回值也别忘写return！！！！！！！！！！！！！！
//
//string L, R;
//ll ret;
//
//ll get_fold(string tmp)
//{
//    //1.去除数位dp的前导零：
//    string op = tmp;
//    int i = 0;
//    while (op[i] == '0') i++;
//    op = op.substr(i);
//    reverse(op.begin(), op.end());
//    return stoll(op);
//}
//
//
//void dfs(int pos, bool limitl, bool limitr, string tmp)
//{
//    if (pos == R.size())
//    {
//        ret = max(ret, get_fold(tmp));
//        return;
//    }
//    int up = limitr ? R[pos] - '0' : 9;
//    int down = limitl ? L[pos] - '0' : 0;
//    
//    if (!limitr && !limitl)
//    {
//        dfs(R.size(), 0, 0, tmp + string(R.size() - pos, '9'));
//    }
//    else
//    {
//        for (int i = down; i <= up; i++)
//        {
//            dfs(pos + 1, limitl && (L[pos] - '0') == i, limitr && (R[pos] - '0') == i, tmp + char('0' + i));
//        }
//    }
//    return;
//}
//
//
//void solve()
//{
//    //不要忘记清空数组；
//    //你个nt递归死路记得也要写返回；
//  
//    cin >> L >> R;
//    int lenl = L.size(); int lenr = R.size();
//    L = string(R.size() - L.size(), '0') + L;
//    ret = -1;
//    dfs(0, 1, 1, "");
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
const int N = 0;
const int M = 998244353;
#define endl '\n'

void solve()
{
    //不要忘记清空数组；
    //你个nt递归死路记得也要写返回；
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> pre(n + 1); //标记对于第i位上一位最近的非零元素的下标；

    int lst = 0;  // lst是上一次非零传递下来的；

    for (int i = 1; i <= n;  i++)
    {
        cin >> a[i];
        pre[i] = lst; 
        if (a[i] > 0)
        {
            lst = i;
        }
    }
    vector<ll> s(n + 2);
    vector<ll> f(n + 2);


   /* 注意到： f[2] = f[1] + f[0] 
    所以，对f的求和是从零开始的，借此，f[i]表示为i-1最合适，将f[0]变为f[1]便于前缀和；*/

    f[1] = 1;
    //f[0] = 1;
    f[2] = 1;

    s[0] = 0;
    s[1] = 1;
    s[2] = 2;

    for (int i = 2; i <= n; i++)
    {
        int j = i - 1;
        int val = a[i];
        while (j > 0 && (val & a[j]) == 0)
        {
            val = a[j] | val;
            j = pre[j]; //快速跨转非零位置，32次以内完成搜索；
        }
        f[i + 1] = ((s[i] - s[j])%M + M) % M;  //正常来说，前缀和肯定是越来越大，但是由于在计算前缀和的过程有取模，所以对于负数运算，一定要
        s[i + 1] = (s[i] + f[i + 1]) % M;
    }

    f[1] = 1;
    s[0] = 0;
    s[1] = 1;


    for (int i = 1; i <= n; i++) // 不从原来的 i = 2 开始，可以兼容 n = 1的情况；
    {
        //首先计算f[2] 代表 f[1];
        int j = i;
        int val = 0;
        while (j > 0 && (val & a[j]) == 0)  // 注意这个位置优先级的问题，要加括号
        {
            val = val | a[j];
            j = pre[j];
        }
        f[i + 1] = ((s[i] - s[j]) % M + M) % M;
        s[i + 1] = (s[i] + f[i + 1]) % M;
    }

    cout << f[n + 1] % M << endl;
}


signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int TestCase = 1;
    cin >> TestCase;
    while (TestCase--)
        solve();
}


