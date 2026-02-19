//#define _CRT_SECURE_NO_WARNINGS
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
//void solve()
//{
//    //不要忘记清空数组；
//    int n, w;
//    cin >> n >> w;
//    int d = n / w;
//    int ret = d * (w - 1) + (n % w);
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
#define endl '\n'

void solve()
{
    //不要忘记清空数组；
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n + 10);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ret = 0;
    ll maxi = 0;
    ll tmp_ret = 0;
    vector<ll> tmp(n + 10);
    for (int i = 0; i < n; i++)
    {
        tmp[i] = a[i] / x;
        tmp_ret += tmp[i] * y;
    }
    for (int i = 0; i < n; i++)
    {
        ret = a[i] + tmp_ret - tmp[i] * y;
        maxi = max(maxi, ret);
    }
    cout << maxi << endl;
    
}

signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int TestCase = 1;
    cin >> TestCase;
    while (TestCase--)
        solve();
}