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
//using namespace std;
//const int N = 0;
//using namespace std;
//#define endl '\n'
//
//void solve()
//{
//    int n;
//    cin >> n;
//    ll sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        string a;
//        cin >> a;
//        int sz = a.size();
//        int left = 0;
//        int right = 0;
//        for (left = 0; left < sz; left++)
//        {
//            int maxi = a[left], id = left;//此时都是字符
//            for (right = left; right < sz; right++)
//            {
//                if (a[right] > maxi)
//                {
//                    maxi = a[right];
//                    id = right;
//                }
//            }
//            if (maxi == a[left]) continue;
//            else
//            {
//                swap(a[left], a[id]);
//                break;
//            }
//        }
//        sum += stoi(a);
//    }
//    cout << sum << endl;
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int T = 1;
//    cin >> T;
//    while (T--)
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
using namespace std;
const int N = 0;
using namespace std;
#define endl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    size_t p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, p6 = 0;
    int a1 = 0, a2 = 0, b1 = 0, b2 = 0, c1 = 0, c2 = 0;
    while ((p1 = s.find("fire", p1)) != string::npos)
    {
        a1++;
        p1++;//找到之后要前进一位；
    }
    while ((p2 = t.find("fire", p2)) != string::npos)
    {
        a2++;
        p2++;
    }

    while ((p3 = s.find("water", p3)) != string::npos)
    {
        b1++;
        p3++;
    }
    while ((p4 = t.find("water", p4)) != string::npos)
    {
        b2++;
        p4++;
    }
    while ((p5 = s.find("wind", p5)) != string::npos)
    {
        c1++;
        p5++;
    }
    while ((p6 = t.find("wind", p6)) != string::npos)
    {
        c2++;
        p6++;
    }
  
    if (a1 + b1 * c1 > a2 + b2 * c2) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
}
