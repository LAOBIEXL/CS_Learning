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
//int f[2][N];
//int a[N];
//
//
//signed main()
//{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    f[0][1] = a[1];
//    f[1][1] = 0; // 不可能；
//    f[1][2] = a[2];
//    f[0][2] = 0; // 不可能；
//    for (int i = 3; i <= n; i++)
//    {
//        f[0][i] = f[1][i - 1] + a[i];
//        f[1][i] = max(f[0][i - 2], f[1][i - 2]) + a[i];
//    }
//    int f_max = max(f[1][n],f[0][n]);
//    cout << f_max << endl;
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
//#define endl '\n'
//int a[N];
//int quest[N];
//
//void solve()
//{
//    //不要忘记清空数组；
//    int n, q;
//    cin >> n >> q;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 0; i < q; i++)
//    {
//        cin >> quest[i];
//    }
//    for(int i = 0; i < q; i++)
//    {
//        int left = 1, right = 1;
//        ull sum = 1;
//        int flag = 1;
//        while (right <= n)
//        {
//            sum *= a[right];
//            if (sum == quest[i])
//            {
//                flag = 0;
//                cout << "YES" << endl;
//                break;
//            }
//            while (sum > quest[i])
//            {
//                sum = sum / a[left];
//                left++;
//            }
//            right++;
//        }
//        if (flag) cout << "NO" << endl;
//
//    }
//   
//    
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
//const int N = 1e5 + 10;
//#define endl '\n'
//
//int quest[N];
//int a[N];
//
//void solve()
//{
//    unordered_set<ull> mp;
//    //不要忘记清空数组；
//    int n, q;
//    cin >> n >> q;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        ull sum = 1;
//        int k = i;
//        while (sum <= 1e9 && k <= n)
//        {
//            sum *= a[k];
//            mp.insert(sum);
//            k++;
//        }
//    }
//    for (int i = 0; i < q; i++)
//    {
//        cin >> quest[i];
//    }
//    for (int i = 0; i < q; i++)
//    {
//        int tmp = quest[i];
//        if (mp.count(tmp))
//        {
//            cout << "yes" << endl;
//        }
//        else
//        {
//            cout << "no" << endl;
//        }
//    }
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
//const int N = 10000;
//#define endl '\n'
//bool nums[N];
//int dist[N];
//
//void solve()
//{
//    memset(dist, -1, sizeof(dist));
//    //不要忘记清空数组；
//    int a, b;
//    cin >> a >> b;
//    queue<int> q;
//    q.push(a);
//    int flag = 1;
//    dist[a] = 0;
//    while (q.size())
//    {
//        auto t = q.front();
//        q.pop();
//       
//        for (int k = 0; k < 4; k++)
//        {
//            if (flag == 0) break;
//            for (int i = 0; i <= 9; i++)
//            {
//                int x = 0;
//                if (k == 0)
//                {
//                    x = t / 10;
//                    x = x * 10 + i;
//                  
//                }
//                else if (k == 1)
//                {
//                    int tmp = t % 10;
//                    x = t / 100;
//                    x = x * 100 + tmp + 10 * i;
//                }
//                else if (k == 2)
//                {
//                    int tmp = t % 100;
//                    x = t / 1000;
//                    x = x * 1000 + tmp + 100 * i;
//                }
//                else
//                {
//                    x = t % 1000;
//                    x = x + 1000 * i;
//                }
//                if (nums[x] && dist[x] == -1)
//                {
//                    dist[x] = dist[t] + 1;
//                    q.push(x);
//                    if (x == b)
//                    {
//                        cout << dist[x] << endl;
//                        flag = 0;
//                        break;
//                    }
//                }
//
//            }
//        }
//
//    }
//    if (flag) cout << -1;
//
//}
//
//signed main()
//{
//    for (int i = 2; i <= N; i++)
//    {
//        int flag = 1;
//        for (int j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag) nums[i] = true;
//    }
//
//
//
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
//#define endl '\n'
//
//ll mod = 1e9 + 7;
//
//void solve()
//{
//    //不要忘记清空数组；
//    string s;
//    cin >> s;
//    ull a = 0, c = 0, m = 0, ac = 0, cm = 0, acm = 0;
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] == 'A')
//        {
//            a++;
//            a %= mod;
//        }
//        if (s[i] == 'a')
//        {
//            acm += cm;
//            acm %= mod;
//            ac += c;
//            ac %= mod;
//            a++;
//            a %= mod;
//        }
//        if (s[i] == 'C')
//        {
//            ac += a;
//            ac %= mod;
//            c++;
//            c %= mod;
//        }
//        if (s[i] == 'c')
//        {
//            cm += m;
//            cm %= mod;
//            c++;
//            c %= mod;
//        }
//        if (s[i] == 'M')
//        {
//            acm += ac;
//            acm %= mod;
//            m++;
//            m %= mod;
//            cm += c;
//            cm %= mod;
//        }
//        if (s[i] == 'm')
//        {
//            m++;
//            m %= mod;
//
//        }
//        cout << acm % mod << " ";
//    }
//    cout << endl;
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