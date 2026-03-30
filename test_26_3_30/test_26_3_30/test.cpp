#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS


//#include<iostream>
//#include<stack>
//using namespace std;
//const int N = 1e5 + 10;
//int a[N];
//int ret[N]; // 用来存放结果
//int n;
//void test()
//{
//	stack<int> st; //存放的是下标，为了直接便于往结果数组里面存
//	for (int i = 1; i <= n; i++)
//	{
//		while(st.size() && a[st.top()] >= a[i]) st.pop();  //严格单调递减栈
//		if (st.size()) ret[i] = st.top();
//		st.push(i);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << ret[i] << " ";
//	}
//	cout << endl;
//}
//
//
//int main()
//{
//	cin >> n;
//	for (int i =1; i <=n; i++)
//	{
//		cin >> a[i];
//	}
//
//	test();
//	return 0;
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
//const int N = 3e6 + 10;
//const int MOD = 0;
//#define endl '\n'
//
////没有返回值也别忘写return！！！！！！！！！！！！！！
//int a[N];
//int ret[N];
//int n;
//
//void solve()
//{
//    //不要忘记清空数组；
//    //你个nt递归死路记得也要写返回；
//    
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    stack<int> st;
//    for (int i = n; i >= 1; i--)
//    {
//        while (st.size() && a[st.top()] <= a[i]) st.pop();
//        if (st.size()) ret[i] = st.top();
//        st.push(i);
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        cout << ret[i] << " ";
//    }
//    cout << endl;
//}
//
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
//const int N = 1e6 + 10;
//const int MOD = 0;
//#define endl '\n'
//
////没有返回值也别忘写return！！！！！！！！！！！！！！
//int a[N];
//int v[N];
//int n;
//int ret1[N];
//int ret2[N];
//int ret[N];
//
//void solve()
//{
//    //不要忘记清空数组；
//    //你个nt递归死路记得也要写返回；
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        cin >> v[i];
//    }
//
//    stack<int> st1;
//    for (int i = 1; i <= n; i++)
//    {
//        while (st1.size() && a[st1.top()] <= a[i]) st1.pop();
//        if (st1.size()) ret1[i] = st1.top();
//        st1.push(i);
//    }
//    stack<int> st2;
//    for (int i = n; i >= 1; i--)
//    {
//        while (st2.size() && a[st2.top()] <= a[i]) st2.pop();
//        if (st2.size()) ret2[i] = st2.top();
//        st2.push(i);
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        ret[ret1[i]] += v[i];
//        ret[ret2[i]] += v[i];
//    }
//    int maxi = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        maxi = max(maxi, ret[i]);
//    }
//    cout << maxi << endl;
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
//const int N = 1e6 +10;
//const int MOD = 0;
//#define endl '\n'
//
////没有返回值也别忘写return！！！！！！！！！！！！！！
//int n;
//ll a[N];
//ll ret1[N];
//ll ret2[N];
//
//void solve()
//{
//    //不要忘记清空数组；
//    //你个nt递归死路记得也要写返回；
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    stack<int> st;
//    for (int i = 1; i <= n; i++)
//    {
//        while (st.size() && a[st.top()] >= a[i]) st.pop();
//        if (st.size()) ret1[i] = st.top();
//        st.push(i);
//    }
//    stack<int> st1;
//    for (int i = n; i >= 1; i--)
//    {
//        while (st1.size() && a[st1.top()] >= a[i]) st1.pop();
//        if (st1.size()) ret2[i] = st1.top();
//        else
//        {
//            ret2[i] = n + 1; //处理边界情况；
//        }
//        st1.push(i);
//    }
//    ll maxi = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        maxi = max(maxi, a[i] * (ret2[i] - ret1[i] - 1));
//    }
//    cout << maxi << endl;
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
#include<deque>

using namespace std;
const int N = 1e6 + 10;


int a[N];
int n, k;

int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	deque<int> q;

	for (int i = 1; i <= n; i++)
	{
		while (q.size() && a[q.back()] >= a[i]) q.pop_back();
		q.push_back(i);
		if (q.back() - q.front() + 1 > k) q.pop_front();
		if (i >= k) cout << a[q.front()] << " ";
	}
	cout << endl;

	q.clear();

	for (int i = 1; i <= n; i++)
	{
		while (q.size() && a[q.back()] <= a[i]) q.pop_back();
		q.push_back(i);
		if (q.back() - q.front() + 1 > k) q.pop_front();
		if (i >= k) cout << a[q.front()] << " ";
	}
	cout << endl;

	return 0;
}