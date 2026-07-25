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
//const int N = 0;
//const int MOD = 0;
//#define endl '\n'
//
////没有返回值也别忘写return！！！！！！！！！！！！！！
//
//
//void solve()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    s = s + s;
//    int ori = 0;
//    vector<vector<int>> a(4);
//    for (ori = 0; ori < 4; ori++)
//    {
//
//        for (int i = 0; i < n; i++)
//        {
//
//            int single = 0;
//            for (int j = 0; j < 4; j++)
//            {
//                single = 2 * single + (s[i * 4 + j + ori] - 48);
//            }
//            a[ori].push_back(single);
//        }
//    }
//
//    /*for (ori = 0; ori < 4; ori++)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            cout << a[ori][i] << " ";
//        }
//        cout << endl;
//    }*/
//
//    vector<int> cnt(4);
//    for (ori = 0; ori < 4; ori++)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            if (a[ori][i % n] == 1 && a[ori][(i + 1) % n] == 2 && a[ori][(i + 2) % n] == 0)
//            {
//                cnt[ori]++;
//            }
//        }
//    }
//
//    int sum = 0;
//    for (int i = 0; i < 4; i++)
//    {
//        if (cnt[i] == 0) continue;
//        else if (cnt[i] == 1)
//        {
//            sum += n - 2;
//        }
//        else if (cnt[i] > 1)
//        {
//            sum += n;
//        }
//        
//    }
//    cout << sum << endl;
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
//const int MOD = 0;
//#define endl '\n'
//
////没有返回值也别忘写return！！！！！！！！！！！！！！
//
//
//void solve()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    s = s + s;
//    int ori = 0;
//    
//    vector<int> candi;
//    size_t pos = s.find("000100100000");
//    while (pos < n && pos != string::npos)
//    {
//        candi.push_back(pos);
//        pos = s.find("000100100000", pos + 1);
//    }
//    vector<int> cnt(4);
//    for (auto e : candi)
//    {
//        cnt[e % 4]++;
//    }
//
//    int sum = 0;
//    for (int i = 0; i < 4; i++)
//    {
//        if (cnt[i] == 0) continue;
//        else if (cnt[i] == 1)
//        {
//            sum += n - 2;
//        }
//        else if (cnt[i] > 1)
//        {
//            sum += n;
//        }
//
//    }
//    cout << sum << endl;
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
//const int N = 0;
//const int MOD = 0;
//#define endl '\n'
//
////没有返回值也别忘写return！！！！！！！！！！！！！！
//
//
//void solve()
//{
//    int n, m;
//    cin >> n >> m;
//    priority_queue<long long> lefthalf;
//    priority_queue<long long, vector<long long>, greater<long long>> righthalf;
//
//    for (int i = 0; i < n; i++)
//    {
//        int t;
//        cin >> t;
//        if (lefthalf.empty() || t < lefthalf.top())
//        {
//            lefthalf.push(t);
//        }
//        else
//        {
//            righthalf.push(t);
//        }
//        if (i % 2 == 0)
//        {
//            if (lefthalf.size() > righthalf.size() + 1)
//            {
//                int tmp = lefthalf.top();
//                righthalf.push(tmp);
//                lefthalf.pop();
//            }
//            else if (righthalf.size() + 1 > lefthalf.size())
//            {
//                lefthalf.push(righthalf.top());
//                righthalf.pop();
//            }
//        }
//        else if (i % 2 == 1)
//        {
//            if (lefthalf.size() > righthalf.size())
//            {
//                int tmp = lefthalf.top();
//                righthalf.push(tmp);
//                lefthalf.pop();
//            }
//            else if (righthalf.size() > lefthalf.size())
//            {
//                lefthalf.push(righthalf.top());
//                righthalf.pop();
//            }
//        }
//       
//    }
//
//    if (n % 2 == 0)
//    {
//        cout << (double(lefthalf.top()) + double(righthalf.top())) / 2 << endl;
//    }
//    else
//    {
//        cout << lefthalf.top() << endl;
//    }
//
//    int a = 1;
//    int b = 0;
//
//    while (m--)
//    {
//        int op;
//        cin >> op;
//        if (op == 1)
//        {
//            int k;
//            cin >> k;
//            int z = a * (k - b);
//            if (z < lefthalf.top()) {
//                lefthalf.push(z);
//            }
//            else if (z > righthalf.top())
//            {
//                righthalf.push(z);
//            }
//            else if (righthalf.size() == lefthalf.size())
//            {
//                lefthalf.push(z);
//            }
//            else {
//                cout << "yes" << endl;
//                righthalf.push(z);
//            }
//            n++;
//            if (n % 2 == 1)
//            {
//                if (lefthalf.size() > righthalf.size() + 1)
//                {
//                    int tmp = lefthalf.top();
//                    righthalf.push(tmp);
//                    lefthalf.pop();
//                }
//                else if (righthalf.size() + 1 > lefthalf.size())
//                {
//                    lefthalf.push(righthalf.top());
//                    righthalf.pop();
//                }
//            }
//            else if (n % 2 == 0)
//            {
//                if (lefthalf.size() > righthalf.size())
//                {
//                    int tmp = lefthalf.top();
//                    righthalf.push(tmp);
//                    lefthalf.pop();
//                }
//                else if (righthalf.size() > lefthalf.size())
//                {
//                    lefthalf.push(righthalf.top());
//                    righthalf.pop();
//                }
//            }
//            if (n % 2 == 0)
//            {
//                cout << a * ((double(lefthalf.top()) + double(righthalf.top())) / 2) + b << endl;
//            }
//            else
//            {
//                cout << a * double(lefthalf.top()) + b << endl;
//            }
//
//        }
//        else if (op == 2)
//        {
//            int k;
//            cin >> k;
//            b += k;
//            if (n % 2 == 0)
//            {
//                cout << a * ((double(lefthalf.top()) + double(righthalf.top())) / 2) + b << endl;
//            }
//            else
//            {
//                cout << a * double(lefthalf.top()) + b << endl;
//            }
//
//
//            
//        }
//        else if (op == 3)
//        {
//            int k; 
//            cin >> k;
//            a *= -1;
//            b *= -1;
//            b += 2 * k;
//            if (n % 2 == 0)
//            {
//                cout << a * ((double(lefthalf.top()) + double(righthalf.top())) / 2) + b << endl;
//            }
//            else
//            {
//                cout << a * double(lefthalf.top()) + b << endl;
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
//int getAns(string s)
//{
//    vector<int> status(4);
//    for (auto e : s)
//    {
//        if (e == 'u')
//        {
//            status[0]++;
//        }
//        else if (e == 's')
//        {
//            if (status[1])
//            {
//                status[1]--;
//                status[2]++;
//            }
//            else if(status[0])
//            {
//                status[0]--;
//                status[1]++;
//            }
//        }
//        else if (e == 't')
//        {
//            if (status[2])
//            {
//                status[2]--;
//                status[3]++;
//            }
//        }
//    }
//    return status[3];
//}
//
//void solve()
//{
//    string s;
//    cin >> s;
//    int cnt = getAns(s);
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
const int MOD = 0;
#define endl '\n'

//没有返回值也别忘写return！！！！！！！！！！！！！！

struct LeftState
{
    int ans;
    int u;
    int us;
    int uss;
};

struct RightState
{
    int ans;
    int t;
    int st;
    int sst;
};

void addLeft(LeftState& state, char ch)
{
    if (ch == 'u' || ch == '1')
    {
        state.u++;
    }
    else if (ch == 's')
    {
        // 优先推进更接近完成的 us
        if (state.us > 0)
        {
            state.us--;
            state.uss++;
        }
        else if (state.u > 0)
        {
            state.u--;
            state.us++;
        }
    }
    else if (ch == 't')
    {
        if (state.uss > 0)
        {
            state.uss--;
            state.ans++;
        }
    }
}

// 从右向左加入一个字符
// 右侧的 1 全部看成 t
void addRight(RightState& state, char ch)
{
    if (ch == 't' || ch == '1')
    {
        state.t++;
    }
    else if (ch == 's')
    {
        // 反向扫描时，优先把 ts 推进成 tss
        if (state.st > 0)
        {
            state.st--;
            state.sst++;
        }
        else if (state.t > 0)
        {
            state.t--;
            state.st++;
        }
    }
    else if (ch == 'u')
    {
        if (state.sst > 0)
        {
            state.sst--;
            state.ans++;
        }
    }
}

int merge(const LeftState& left, const RightState& right)
{
    int matchA = min(left.uss, right.t);
    int uss1 = left.uss - matchA;
    int matchB = min(uss1 + left.us, right.st);
    int remain2 = uss1 + left.us - matchB;
    int matchC = min(remain2 + left.u, right.sst);
    return matchC + matchB + matchA + left.ans + right.ans;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    //prefix[i]表示遍历到n时的前缀情况，0 - i中的l均为u
    vector<LeftState> prefix(n + 1);

    vector<RightState> subfix(n + 1);
    //subfix[i]表示 i - n-1的所有l都取t的情况，与prefix[i]相配合
    
    prefix[0] = { 0, 0, 0, 0 };
    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] = prefix[i];
        addLeft(prefix[i + 1], s[i]);
    }

    subfix[n] = { 0, 0, 0, 0 };
    for (int i = n - 1; i >= 0; i--)
    {
        subfix[i] = subfix[i + 1];
        addRight(subfix[i], s[i]);
    }

    int answer = 0;


    for (int cut = 0; cut <= n; cut++)
    {
        answer = max(answer, merge(prefix[cut], subfix[cut]));
    }

    cout << answer << endl;
}

signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int TestCase = 1;
    cin >> TestCase;
    while (TestCase--)
        solve();
}