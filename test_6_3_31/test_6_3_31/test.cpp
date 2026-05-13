#define _CRT_SECURE_NO_WARNINGS


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
const int N = 1e6;
const int MOD = 0;
#define endl '\n'

//没有返回值也别忘写return！！！！！！！！！！！！！！

int a[N];
int n;
int m;


void solve()
{
    //不要忘记清空数组；
    //你个nt递归死路记得也要写返回；
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    deque<int> q;
    for (int i = 1; i <= n; i++)
    {
        while(q.size() && a[q.back()] >= a[i]) q.pop_back();
        q.push_back(i);
        if (q.back() - q.front() + 1 > m) q.pop_front();
        if (i >= m) cout << a[q.front()] << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int TestCase = 1;
 
    while (TestCase--)
        solve();
}