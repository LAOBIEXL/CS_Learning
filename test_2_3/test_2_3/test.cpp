#define _CRT_SECURE_NO_WARNINGS



//int main()
//{
//	int n;
//	cin >> n;
//	if (n % 10 == 3 || n % 10 == 7 || n % 10 == 8 || n % 10 == 9)
//	{
//		cout << 10 << endl;
//	}
//	else if (n % 10 == 1 || n % 10 == 2 || n % 10 == 5)
//		cout << 10 / (n % 10) << endl;
//	else if (n % 10 == 4 || n % 10 == 6)
//		cout << 5 << endl;
//	else cout << 1 << endl;
//
//
//	return 0;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i <= 10; i++)
//	{
//		if (n * i % 10 == 0)
//			cout << i << endl;
//	}
//
//
//
//	return 0;
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

ll ret = 1;

bool cmp(int a, int b)
{
    return a > b;
}

void cal(ll cnt)
{
    ll tmp = 1;
    if (cnt == 0)
        return;
    for (int i = 1; i <= cnt; i++)
    {
        tmp = tmp * i % 998244353;
    }
    ret = ret * tmp % 998224353;
   
}



void solve()
{
    ret = 1;
    int n;
    cin >> n;
    vector<int> a(n + 10);
    vector<int> b(n + 10);
    //不要忘记清空数组；
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end(), cmp);
        sort(b.begin(), b.end(), cmp);
    }
    int i = 0;
    int j = 0;
    ll cnt = 0;
    int flag = 1;
    while (b[j] > a[i])
    {
        j++;
    }
    if (j == n)
    {
        cal(n - i);
    }
    else
    {
        while (j < n)
        {
            if (b[j] > a[i])
            {
                j++;
                if (cnt != 0)
                {

                    cal(cnt);
                    cnt = 0;
                    continue;
                    
                }
                else
                {
                    continue;
                }

            }
            i++;
            cnt++;

        }
        if (j == n && i < n)
        {
            cal(n - i);
        }
    }
    cout << ret % 998224353 << endl;




}

signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int TestCase = 1;
    cin >> TestCase;
    while (TestCase--)
        solve();
}
