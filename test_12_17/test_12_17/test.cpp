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
//const int N = 20;
//using namespace std;
//#define endl '\n'
//int n;
//int a[N][N];
//bool row[N][N], col[N][N], mat[N][N][N];
//
//bool dfs(int x, int y)
//{
//    if (y == 9)//检查参数有效性；
//    {
//        x++;
//        y = 0;
//        //判断是否是递归出口；
//        if (x == 9)
//        {
//            //说明已经产生有效结果，需要结束循环并且立刻输出结果；
//            return true;
//        }
//    }
//    if (a[x][y])//如果原位置有元素完全不需要进入循环
//    {
//        if (dfs(x, y + 1)) return true;
//        else return false;
//    }
//    for (int i = 1; i <= 9; i++)
//    {
//        if (row[x][i] || col[y][i] || mat[x / 3][y / 3][i ]) continue; //剪枝
//        row[x][i] = col[y][i] = mat[x / 3][y / 3][i] = true;
//        a[x][y] = i;
//        if (dfs(x, y + 1)) return true;
//        a[x][y] = 0;
//        row[x][i] = col[y][i] = mat[x / 3][y / 3][i] = false;
//    }
//    //一直在判断每个位置要填什么，如果出了循环依旧没有一个成功，说明之前有一个位置填错了；
//    return false;
//
//
//        
//
//}
//
//
//void solve()
//{
//    int n = 9;
//    //不要忘记清空数组；
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> a[i][j];//默认标记，只有非零才需要标记；
//            if (a[i][j])
//            {
//                row[i][a[i][j]] = true;
//                col[j][a[i][j]] = true;
//                mat[i / 3][j / 3][a[i][j]] = true;
//            }
//            
//        }
//    }
//    dfs(0, 0);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cout << a[i][j] << " ";
//
//        }
//        cout << endl;
//    }
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
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
//using namespace std;
//const int N = 210;
//using namespace std;
//#define endl '\n'
//
//int n, k;
//int ret;
//int path;
//
//void dfs(int pos, int begin)
//{
//    if (pos == k)
//    {
//        if (path == n)
//        {
//            ret++;
//            return;
//        }
//    }
//    if (path + (k - pos) * begin > n) return;
//    for (int i = begin; i <= n; i++)
//    {
//        path += i;
//        dfs(pos + 1, i);
//        path -= i;
//    }
//
//
//
//}
//
//void solve()
//{
//    //不要忘记清空数组；
//    cin >> n >> k;
//    dfs(0, 1);
//    cout << ret << endl;
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
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
//const int N = 2e5 + 10;
//using namespace std;
//#define endl '\n'
//int a[N];
//
//void solve()
//{
//    //不要忘记清空数组；
//    int n, m;
//    cin >> n >> m;
//    for (int i = 0; i < m; i++)
//    {
//        cin >> a[i];
//    }
//    ll ret = 0;
//    int crt = a[0];
//    for (int i = 1; i < m; i++)
//    {
//        ret += min(abs(a[i] - crt), abs(n - abs(a[i] - crt)));
//        crt = a[i];
//    }
//    ret += min(abs(a[0] - crt), abs(n - abs(a[0] - crt)));
//    crt = a[0];
//    cout << ret << endl;
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    
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
//#define endl '\n'
//int mo[13] = { 0, 31, 28,31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//void solve()
//{
//    int y, m, d;
//    vector<int> year;
//    scanf("%4d%2d%2d", &y, &m, &d);
//
//    int count1 = 0;
//    for (int i = 1; i <= 12; i++)
//    {
//
//        for (int j = 1; j <= mo[i]; j++)
//        {
//            int t1 = i;
//            int t2 = j;
//            int tmp = 0;
//            for (int z = 1; z <= 4; z++)
//            {
//                if (z <= 2)
//                {
//                    tmp = tmp * 10 + (t2 % 10);
//                    t2 = t2 / 10;
//                }
//                else
//                {
//                    tmp = tmp * 10 + t1 % 10;
//                    t1 = t1 / 10;
//                }
//            }
//            year.push_back(tmp);
//
//        }
//    }
//    sort(year.begin(), year.end());
//    for (int i = 0; i < year.size(); i++)
//    {
//        if (year[i] >= y)
//        {
//            string ret = to_string(year[i]);
//            if (ret.size() < 4)
//            {
//                ret.insert(0, "0");
//            }
//            if (year[i] == y)
//            {
//                string m4 = ret.substr(2, 2);
//                string d4 = ret.substr(0, 2);
//                reverse(d4.begin(), d4.end());
//                reverse(m4.begin(), m4.end());
//                int d3 = stoi(d4);
//                int m3 = stoi(m4);
//                if (m3 < m || m3 == m && d3 < d)
//                {
//                    continue;
//                }
//            }
//            string gg = ret;
//            reverse(gg.begin(), gg.end());
//            cout << ret + gg << endl;
//            break;
//        }
//
//    }
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
//#define endl '\n'
//   
//void solve()
//{
//    //不要忘记清空数组；
//    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    printf("%p\n", a);
//    printf("%p\n", a+1);
//    int (*ptr)[10] = &a;
//    printf("%p\n", &a+1);
//    printf("%p\n", ptr);//不改变指针内部的存储，但是改变指针的访问权限和属性；
//    
//    int* p = &a[0];
//    printf("%p\n", &(p));
//
//    /*printf("%p\n", &(&a[0]));*/    //取地址的对象必须是一个左值，也就是有存储空间的指针；
//    //   &a[0]   ==   a;
//
//    &a;//针对数组名一种特殊的操作，实现在不改变值本身的情况下进行升维，改变基类型和访问权限；
//
//    int b[10][10];
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            b[i][j] = j + 1 + 10 * i;
//        }
//    }
//    int* pt[10];
//    for (int i = 0; i < 10; i++)
//    {
//        pt[i] = b[i];
//    }
//
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            cout << b[i][j] << " " << pt[i][j] << endl;
//        }
//    }
//    //这里pt数组也就是二维数组，完全等价；
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    
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
//const int N = 20;
//#define endl '\n'
//int c[N], w, n;
//int  cnt;
//int car[N];
//int ret = 30;
//
//void dfs(int pos)
//{
//    if (pos == n)
//    {
//        if (cnt < ret)
//        {
//            ret = cnt;
//        }
//        return;
//    }
//    if (cnt >= ret) return;
//    //从第一辆车开始；；
//    for (int i = 1; i <= cnt; i++)
//    {
//        if (c[pos] + car[i] > w) continue;
//        car[i] += c[pos];
//        dfs(pos + 1);
//        car[i] -= c[pos];
//    }
//    //创建新车：
//    cnt++;
//    car[cnt] = c[pos];
//    dfs(pos + 1);
//    car[cnt] = 0;
//    cnt--;//回溯；
//
//    
//
//
//}
//
//bool cmp(int a, int b)
//{
//    return a > b;
//}
//
//
//void solve()
//{
//    //不要忘记清空数组；
//    cin >> n >> w;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> c[i];
//    }
//    sort(c, c + n, cmp);
//    dfs(0);
//    cout << ret << endl;
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    
//     solve();
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
//const int N = 25;
//#define endl '\n'
//ll mp[N][N][N];
//ll a, b, c;
//
//ll dfs(ll a, ll b, ll c)
//{
//
//    if (a <= 0 || b <= 0 || c <= 0)  return 1;
//    else if (a > 20 || b > 20 || c > 20) return dfs(20, 20, 20);
//    if (mp[a][b][c]) return mp[a][b][c];
//
//    else if (a < b && b < c) return mp[a][b][c] = dfs(a, b, c - 1) + dfs(a, b - 1, c - 1) - dfs(a, b - 1, c);
//
//
//    mp[a][b][c] = dfs(a - 1, b, c) + dfs(a - 1, b - 1, c) + dfs(a - 1, b, c - 1) - dfs(a - 1, b - 1, c - 1);
//    return mp[a][b][c];
//
//}
//
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    while (1)
//    {
//
//        cin >> a >> b >> c;
//        if (a == -1 && b == -1 && c == -1) break;
//
//        printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, dfs(a, b, c));
//    }
//
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
//const int N = 1e4 +10;
//#define endl '\n'
//int p;
//int x, y;
//
//map<PII, int> mp;
//
//int dfs(int x, int y)
//{
//    if (mp.count({x, y})) return mp[{x, y}];
//    if (x == 0) return 1;
//    if (y == 0) return 2;
//    mp[{x, y}] = 3;
//    return mp[{x, y}] = dfs((x + y) % p, ((x + 2 * y) % p));
//}
//
//
//void solve()
//{
//    //不要忘记清空数组；
//    cin >> x >> y;
//    int ret = dfs(x, y);
//    if (ret == 1) cout << 1 << endl;
//    else if (ret == 2) cout << 2 << endl;
//    else if (ret == 3) cout << "error" << endl;
//
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
//    cin >> TestCase >> p;
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
//const int N = 110;
//#define endl '\n'
//int a[N][N];
//int ret = 0;
//int dx[] = { 1, -1, 0, 0 };
//int dy[] = { 0, 0, 1, -1 };
//int r, c;
//int path = 1;
//
//
//void dfs(int x, int y)
//{
//    int flag = 1;
//    for (int k = 0; k < 4; k++)
//    {
//        int h = a[x][y];
//        int x1 = x + dx[k];
//        int y1 = y + dy[k];
//        //剪枝;
//        if (x1 < 0 || y1 < 0 || x1 >= r || y1 >= c) continue;
//        if (a[x1][y1] > h) continue;
//        path++;
//        dfs(x1, y1);
//        path--;
//        flag = 0;
//    }
//    if (flag)
//    {
//        ret = max(ret, path);
//    }
//    return;
//    
//}
//
//
//void solve()
//{
//    //不要忘记清空数组；
//   
//    cin >> r >> c;
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < c; j++)
//        {
//            cin >> a[i][j];
//        }
//    }
//    for (int i = 0; i < r; i++)
//    {
//        for (int j = 0; j < c; j++)
//        {
//            dfs(i, j);
//        }
//    }
//    cout << ret << endl;
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
// 
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
//const int N = 110;
//#define endl '\n'
//int C, R;
//int a[N][N];
//int dx[] = { 1, -1, 0, 0 };
//int dy[] = { 0, 0 , -1, 1 };
//int dp[N][N];
//
//int dfs(int x, int y)
//{
//    if (dp[x][y]) return dp[x][y];
//    int len = 1;
//    int tmp = a[x][y];
//    for (int k = 0; k < 4; k++)
//    {
//        int x1 = x + dx[k];
//        int y1 = y + dy[k];
//        if (x1 < 0 || y1 < 0 || x1 >= R || y1 >= C) continue;
//        if (a[x1][y1] >= tmp) continue;
//        len = max(len, 1 + dfs(x1, y1));
//    }
//    return dp[x][y] = len;
//}
//
//void solve()
//{
//    //不要忘记清空数组；
//    cin >> R >> C;
//    for (int i = 0; i < R; i++)
//    {
//        for (int j = 0; j < C; j++)
//        {
//            cin >> a[i][j];
//        }
//    }
//    int ret = 0;
//    for (int i = 0; i < R; i++)
//    {
//        for (int j = 0; j < C; j++)
//        {
//            ret = max(ret, dfs(i, j));
//        }
//    }
//    cout << ret << endl;
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//   
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
//const int N = 410;
//#define endl '\n'
//int dis[N][N];
//int m, n, x, y;
//
//int dx[] = { 1,2,2,1,-1,-2,-2,-1 };
//int dy[] = { 2,1,-1,-2,2,1,-1, -2 };
//
//
//void bfs(int x, int y)
//{
//    memset(dis, -1, sizeof(dis));
//    queue<PII> q;
//    q.push({ x, y });
//    dis[x][y] = 0;
//    while (q.size())
//    {
//        x = q.front().first; y = (q.front()).second;
//        q.pop();
//        for (int k = 0; k < 8; k++)
//        {
//            int x1 = x + dx[k];
//            int y1 = y + dy[k];
//            if (x1 < 0 || y1 < 0 || x1 >= n || y1 >= m) continue;
//            if (dis[x1][y1] != -1) continue;
//            q.push({ x1, y1 });
//            dis[x1][y1] = dis[x][y] + 1;
//        }
//    }
//}
//
//void solve()
//{
//    
//    //不要忘记清空数组；
//    cin >> n >> m;
//    cin >> x >> y;
//    bfs(x-1, y-1);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cout << dis[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    
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
//#define endl '\n'
//
//void solve()
//{
//    //不要忘记清空数组；
//    int l, a, b;
//    cin >> l >> a >> b;
//    int m;
//    for (int i = 0; i <= 5000; i++)
//    {
//        m = max(m, (a + i * b) % l);
//    }
//    cout << m << endl;
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
//const int N = 1010;
//#define endl '\n'
//string a[N];
//int n;
//string ret;
//string retf;
//
//void dfs(int pos)
//{
//    if (pos > n)
//    {
//        if (retf == "" || ret < retf)
//        {
//            retf = ret;
//        }
//        return;
//    }
//
//
//    string tmp = ret;
//    //后加；
//    if (retf == "")
//    {
//        ret = ret + a[pos];
//        dfs(pos + 1);
//        ret = tmp;
//        //前加；
//        ret = a[pos] + ret;
//        dfs(pos + 1);
//        ret = tmp;
//    }
//    else
//    {
//        if (ret <= retf)
//        {
//            ret = ret + a[pos];
//            dfs(pos + 1);
//            ret = tmp;
//            //前加；
//            ret = a[pos] + ret;
//            dfs(pos + 1);
//            ret = tmp;
//        }
//        else return;
//    }
//}
//
//void solve()
//{
//    //不要忘记清空数组；
//    cin >> n;
//    ret = retf = "";
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    dfs(1);
//    cout << retf << endl;
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
//#include<string>
//using namespace std;
//
//int main()
//{
//	string a = "abc";
//	string d = "dddddd";
//	cout << (a < d) << endl;
//	string b = "abbc";
//	cout << (a < b) << endl;
//	string c = "abcc";
//	cout << (a < c) << endl;
//	return 0;
//}



//aac fs sde aa dfea afsa aaaa
//aaaaaacfssdeaadfeaafsa
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
//const int N = 1010;
//#define endl '\n'
//string a[N];
//int n;
//string ret;
//string retf;
//
//void dfs(int pos)
//{
//    if (pos > n)
//    {
//        if (retf == "" || ret < retf)
//        {
//            retf = ret;
//        }
//        return;
//    }
//
//
//    string tmp = ret;
//    //后加；
//
//    ret = ret + a[pos];
//    dfs(pos + 1);
//    ret = tmp;
//    //前加；
//    ret = a[pos] + ret;
//    dfs(pos + 1);
//    ret = tmp;
//
//
//}
//
//void solve()
//{
//    //不要忘记清空数组；
//    cin >> n;
//    ret = retf = "";
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    dfs(1);
//    cout << retf << endl;
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
//const int N = 40;
//#define endl '\n'
//char a[N][N];
//int n,  m;
//int dis[N][N];
//
//int dx[] = {1, -1, 0, 0};
//int dy[] = {0 , 0, -1, 1};
//int ret = 0;
//int cur = 10000;
//int x_ret, y_ret;
//
//void bfs(int i, int j)
//{
//    queue<PII> q;
//    q.push({ i, j });
//    dis[i][j] = 0;
//    while (q.size())
//    {
//        auto t = q.front(); q.pop();
//        int x = t.first; int y = t.second;
//        for (int k = 0; k < 4; k++)
//        {
//            int x1 = x + dx[k]; int y1 = y + dy[k];
//            if (a[x1][y1] != '*' && x1 >= 1 && y1 >= 1 && x1 <= n && y1 <= m && dis[x1][y1] == -1)
//            {
//                dis[x1][y1] = dis[x][y] + 1;
//                if (a[x1][y1] == 'e')
//                {
//                    ret++;
//                    cur = min(cur, dis[x1][y1]);
//                    continue;
//                }
//                q.push({ x1, y1 });
//            }
//        }
//    }
//}
//
//void solve()
//{
//    //不要忘记清空数组；
//    memset(dis, -1, sizeof(dis));
//    cin >> n >> m;
//    int x, y;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            cin >> a[i][j];
//            if (a[i][j] == 'k')
//            {
//                x = i; y = j;
//            }
//        }
//    }
//    bfs(x, y);
//    if (ret == 0)
//    {
//        cout << -1 << endl;
//    }
//    else
//    {
//        cout << ret << " " << cur << endl;
//    }
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    solve();
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
//int dis[N];
//int x, y;
//int ret = 100000;
//
//void dfs(int  x)
//{
//    queue<int> q;
//    q.push(x);
//    dis[x] = 0;
//    while (q.size())
//    {
//        auto t = q.front(); q.pop();
//        x = t;
//        if (x - 1 >= 0 && dis[x - 1] == -1)
//        {
//            dis[x - 1] = dis[x] + 1;
//            if (x - 1 == y)
//            {
//                ret = dis[x - 1];
//                return;
//            }
//            q.push(x - 1);
//        }
//        if (x + 1 <= 100000 && dis[x + 1] == -1)
//        {
//            dis[x + 1] = dis[x] + 1;
//            if (x +1 == y)
//            {
//                ret = dis[x + 1];
//                return;
//            }
//            q.push(x + 1);
//        }
//        if (x * 2 <= 100000 && dis[2 * x] == -1)
//        {
//            dis[x * 2] = dis[x] + 1;
//            if (x *2 == y)
//            {
//                ret = dis[x * 2];
//                return;
//            }
//            q.push(x * 2);
//        }
//    }
//}
//
//void solve()
//{
//    memset(dis, -1, sizeof(dis));
//    //不要忘记清空数组；
//    cin >> x >> y;
//    dfs(x);
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