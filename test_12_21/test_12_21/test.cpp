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
//
//signed main()
//{
//	map<string, string> mp;
//	mp["int"] = "Integer";
//	mp["long long"] = "Long Long Integer";
//	mp["float"] = "Single Precision Floating Point";
//	mp["double"] = "Double Precision Floating Point";
//	mp["long double"] = "Long Double Precision Floating Point";
//	string a;
//	getline(cin, a);
//	cout << mp[a] << endl;
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
//
//bool is_leap(int y)
//{
//    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//    {
//        return true;
//    }
//    else return false;
//}
//
//signed main()
//{
//    int n;
//    cin >> n;
//    int Y = 2024, M = 2, D = 29;
//    int m[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int cur = 0;
//    int to = n * 7;
//    while (cur < to)
//    {
//        D++;
//        int tmp = 0;
//        if (M == 2)
//        {
//            if (is_leap(Y)) tmp = 1;
//            else tmp = 0;
//        }
//        else
//        {
//            tmp = 0;
//        }
//        if (D > m[M] + tmp)
//        {
//            M++;
//            D = 1;
//        }
//        if (M > 12)
//        {
//            Y++;
//            M = 1;
//        }
//        cur++;
//    }
//    printf("%04d-%02d-%02d\n", Y, M, D);
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
//
//
//signed main()
//{
//    ll n = 21;
//    double mid = sqrt(n);
//    for (int i = 1; i <= mid; i++)
//    {
//        if (n % i == 0) cout << i << " ";
//    }
//    cout << sqrt(21) << endl;
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
//const int N = 110;
//int a[N][N];
//
//
//signed main()
//{
//	vector<PII> ret;
//	int cnt = 0;
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			int cek;
//			cin >> cek;
//			if (a[i][j] == 1 && cek == 0)
//			{
//				cnt++;
//				ret.push_back({ i, j });
//			}
//		}
//	}
//	cout << cnt << endl;
//	for (int i = 0; i < ret.size(); i++)
//	{
//		cout << ret[i].first << " " << ret[i].second << endl;
//	}
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
//const int N = 1e4 + 10;
//#define endl '\n'
//int a[N];
//
//void solve()
//{
//    //不要忘记清空数组；
//    int n;
//    cin >> n;
//    int flag_oven = 0;
//    int flag_odd = 0;
//    int flag_up = 1;
//    int flag_down = 1;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//        if (a[i] % 2 == 0)
//        {
//            flag_oven = 1;
//        }
//        else
//        {
//            flag_odd = 1;
//        }
//        if (i >= 1 && a[i] > a[i - 1])
//        {
//            flag_down = 0;
//        }
//        if (i >= 1 && a[i] < a[i - 1])
//        {
//            flag_up = 0;
//        }
//    }
//    if (flag_up == 1 || flag_down == 1) cout << "Yes" << endl;
//    else if (flag_odd == 0 || flag_oven == 0)
//    {
//        cout << "No" << endl;
//    }
//    else cout << "Yes" << endl;
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
//const int N = 20;
//int a[N][N];
//map<int, int> mp_col[10];
//map<int, int> mp_row[10];
//int arr[11];
//
//int test;
//
//int gcd(int a, int b)
//{
//	int t = 0;
//	while (a % b != 0)
//	{
//		t = a % b;
//		a = b;
//		b = t;
//	}
//	return b;
//}
//
//int generate_number(int x)
//{
//	int t = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		t = t * 10 + a[x][i];
//	}
//	return t;
//}
//
//
//bool dfs(int x, int y)
//{
//	if (y == 10)
//	{
//		if (x >= 1)
//		{
//			int cmp = gcd(generate_number(0), generate_number(1));
//			for (int p = 2; p <= x; p++)
//			{
//				int tmp = generate_number(p);
//				cmp = gcd(cmp, tmp);
//			}
//			if (cmp <= 400000) return false;
//		}
//		x++;
//		y = 0;
//		if (x == 10)
//		{
//			return true;
//		}
//	}
//	for (int w = 0; w <= 9; w++)
//	{
//		for (int j = 0; j <= 9; j++)
//		{
//			for (int i = 0; i <= 9; i++)
//			{
//
//				if (mp_row[x].size() == 9 && mp_row[x].count(i) == 0) continue;
//				if (mp_col[y].size() == 9 && mp_col[y].count(i) == 0) continue;
//				if (i == j || i == w)
//				{
//					if (i == j && mp_row[x][i] == 2) continue;
//					if (i == w && mp_col[y][i] == 2) continue;
//				}
//				else
//				{
//					if (mp_col[y][i] == 1 || mp_row[x][i] == 1) continue;
//				}
//				mp_row[x][i]++;
//				mp_col[y][i]++;
//				a[x][y] = i;
//				if (dfs(x, y + 1)) return true;
//				a[x][y] = 0;
//				mp_row[x][i]--;
//				mp_col[y][i]--;
//				if (mp_row[x][i] <= 0)
//				{
//					mp_row[x].erase(i);
//				}
//				if (mp_col[y][i] <= 0)
//				{
//					mp_col[y].erase(i);
//				}
//			}
//		}
//	}
//	
//	return false;
//}
//
//signed main(){
//	int n = 10;
//	dfs(0, 0);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
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
//
//signed main()
//{
//	ull n, d, p;
//	cin >> n >> d >> p;
//	ull k = 1;
//	ull sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		ull t;
//		cin >> t;
//		sum += t;
//	}
//	ull a = sum / d;
//	ull b = sum % d;
//	ull tmp = k * d;
//	while (tmp % p  != 1)
//	{
//		k++; tmp = tmp % p + d;
//	}
//	cout << (b * k) % p + a%p   << endl;
//}


//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//
//// 计算两个数的最大公约数
//int gcd(int a, int b) {
//    return b == 0 ? a : gcd(b, a % b);
//}
//
//// 生成一行对应的9位整数
//int generateNumber(const std::vector<int>& row) {
//    int num = 0;
//    for (int digit : row) {
//        num = num * 10 + digit;
//    }
//    return num;
//}
//
//// 检查一行是否满足数字不重复且只有9个不同数字的条件
//bool checkRow(const std::vector<int>& row) {
//    std::vector<bool> used(10, false);
//    int count = 0;
//    for (int digit : row) {
//        if (used[digit]) {
//            return false;
//        }
//        used[digit] = true;
//        count++;
//    }
//    return count == 9;
//}
//
//// 检查一列是否满足数字不重复且只有9个不同数字的条件
//bool checkCol(const std::vector<std::vector<int>>& matrix, int colIndex) {
//    std::vector<bool> used(10, false);
//    int count = 0;
//    for (int i = 0; i < 9; ++i) {
//        int digit = matrix[i][colIndex];
//        if (used[digit]) {
//            return false;
//        }
//        used[digit] = true;
//        count++;
//    }
//    return count == 9;
//}
//
//// 深度优先搜索函数
//bool dfs(std::vector<std::vector<int>>& matrix, int row, int col, std::vector<int>& rowNums) {
//    if (row == 9) {
//        // 所有行已填充完毕，计算这9个行整数的最大公约数
//        int gcdValue = rowNums[0];
//        for (int i = 1; i < 9; ++i) {
//            gcdValue = gcd(gcdValue, rowNums[i]);
//        }
//        return gcdValue > 400000;
//    }
//
//    if (col == 9) {
//        // 当前行填充完毕，进入下一行
//        return dfs(matrix, row + 1, 0, rowNums);
//    }
//
//    for (int digit = 0; digit <= 9; ++digit) {
//        matrix[row][col] = digit;
//        if (checkRow(matrix[row]) && checkCol(matrix, col)) {
//            if (col == 8) {
//                rowNums[row] = generateNumber(matrix[row]);
//            }
//            if (dfs(matrix, row, col + 1, rowNums)) {
//                return true;
//            }
//        }
//        matrix[row][col] = 0;
//    }
//    return false;
//}
//
//int main() {
//    std::vector<std::vector<int>> matrix(9, std::vector<int>(9, 0));
//    std::vector<int> rowNums(9);
//    if (dfs(matrix, 0, 0, rowNums)) {
//        for (const auto& row : matrix) {
//            for (int digit : row) {
//                std::cout << digit << " ";
//            }
//            std::cout << std::endl;
//        }
//    }
//    return 0;
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
//const int N = 2e5 + 10;
//int a[N];
//vector<int> blank;
//vector<int> maxi;
//vector<int> mini;
//
//signed main()
//{
//	int n, x, y;
//	cin >> n >> x >> y;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		if (a[i] > x && a[i] < y)
//		{
//			blank.push_back(i);
//		}
//		if (a[i] == x)
//		{
//			maxi.push_back(i);
//		}
//		if (a[i] == y)
//		{
//			mini.push_back(i);
//		}
//	}
//	int l = 1, r = 1;
//	int cnt = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			
//		}
//	}
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
//vector <ll> num;
//map<ll, ll> mp;
//
//signed main()
//{
//    ll n;
//    ll cnt = 0;
//    cin >> n;
//    ll i = 1;
//    for (i = 1; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//        {
//            num.push_back(i);
//        }
//    }
//    num.push_back(i);
//    for (int i = 0; i < num.size() - 1; i++)
//    {
//        if (num[i] + 1 == num[i+1])
//        {
//            ll left = i;
//            ll right = i+1;
//            ll sum = num[left];
//            while ( right < num.size() && num[right] == num[right - 1] + 1)
//            {
//                sum *= num[right];
//                while (sum > n)
//                {
//                    sum = sum / num[left++];
//                }
//                if (sum == n)
//                {
//                    cnt++;
//                    mp.insert({ num[left], num[right] });
//                    if (left == 0 && right != 1)
//                    {
//                        cnt++;
//                        mp.insert({ num[left + 1], num[right] });
//                    }
//                   
//                }
//                
//                right++;
//            }
//            i = left + 1;
//        }
//
//    }
//    cout << cnt << endl;
//    for (auto e : mp)
//    {
//        for (ll i = e.first; i < e.second; i++)
//        {
//            cout << i << " ";
//        }
//        cout << e.second;
//        cout << endl;
//    }
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
//const int N = 1e5 + 10;
//ll a[N];
//
//signed main()
//{
//    ll n, d, p;
//    cin >> n >> d >> p;
//    ll sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        ll t;
//        cin >> t;
//        sum = (sum + t) % p;
//    }
//    ll up = p - 2;
//    ll k = 1;
//    ll base = d;
//    while (up)
//    {
//        if (up & 1) k = k * base % p;
//        base = base * base % p;
//        up >>= 1;
//    }
//    cout << sum * k % p << endl;
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
//const int N = 2e5 + 10;
//#define endl '\n'
//ll a[N];
//
//signed main()
//{
//	
//	ll n, x, y;
//	cin >> n >> x >> y;
//	for (int i = 1; i <= n; i++)
//	{
//
//	}
//}


//[1, 2, 3, 4, 5, 6, 7, 8, 0],
//[4, 5, 6, 7, 8, 0, 1, 2, 3],
//[7, 8, 0, 1, 2, 3, 4, 5, 6],
//[2, 3, 4, 5, 6, 7, 8, 0, 1],
//[5, 6, 7, 8, 0, 1, 2, 3, 4],
//[8, 0, 1, 2, 3, 4, 5, 6, 7],
//[3, 4, 5, 6, 7, 8, 0, 1, 2],
//[6, 7, 8, 0, 1, 2, 3, 4, 5],
//[0, 1, 2, 3, 4, 5, 6, 7, 8]
////
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>+
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
//
//signed main()
//{
//	int a[9][9] = { { 1, 2, 3, 4, 5, 6, 7, 8, 0 } , {4, 5, 6, 7, 8, 0, 1, 2, 3}, { 7, 8, 0, 1, 2, 3, 4, 5, 6}, { 2, 3, 4, 5, 6, 7, 8, 0, 1}, { 5, 6, 7, 8, 0, 1, 2, 3, 4},  {8, 0, 1, 2, 3, 4, 5,6,7},{3, 4, 5, 6, 7, 8, 0, 1, 2}, {6, 7, 8, 0, 1, 2, 3, 4, 5},{0, 1, 2, 3, 4, 5, 6, 7, 8} };
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
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
//const int N = 0;
//
//signed main()
//{
//    int n, x, y;
//    cin >> n >> x >> y;
//    vector<int> a(n + 1);
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//
//    ll ret = 0;
//
//    if (x == y)
//    {
//        int len = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            if (a[i] == x) len++;
//            else
//            {
//                if (len > 0)
//                {
//                    ret += (ll)len * (len + 1) / 2;
//                    len = 0;
//                }
//            }
//        }
//        if (len > 0) ret += (ll)len * (len + 1) / 2;
//    }
//    else
//    {
//        vector<pair<int, int>> pa;
//        int left = 1;
//        for (int i = 1; i <= n; i++)
//        {
//            if (a[i] < y || a[i] > x)
//            {
//                if (left <= i - 1)
//                {
//                    pa.push_back({ left, i - 1 });
//                }
//                left = i + 1;
//            }
//        }
//        if (left <= n) pa.push_back({ left, n });
//
//
//        for (auto& e : pa)
//        {
//            int l = e.first, r = e.second;
//            vector<int> x1, y1;
//            for (int i = l; i <= r; i++)
//            {
//                if (a[i] == x) x1.push_back(i);
//                if (a[i] == y) y1.push_back(i);
//            }
//            if (x1.empty() || y1.empty()) continue;
//
//            int len = r - l + 1;
//            ll total = (ll)len * (len + 1) / 2;
//
//            ll x2 = 0;
//            vector<int> blank;
//            blank.push_back(l - 1);
//            for (int p : x1) blank.push_back(p);
//            blank.push_back(r + 1);
//            for (size_t i = 1; i < blank.size(); i++)
//            {
//                int d = blank[i] - blank[i - 1] - 1;
//                if (d > 0)
//                {
//                    x2 += (ll)d * (d + 1) / 2;
//                }
//            }
//            ll y2 = 0;
//            blank.clear();
//            blank.push_back(l - 1);
//            for (int p : y1) blank.push_back(p);
//            blank.push_back(r + 1);
//            for (size_t i = 1; i < blank.size(); i++)
//            {
//                int d = blank[i] - blank[i - 1] - 1;
//                if (d > 0)
//                {
//                    y2 += (ll)d * (d + 1) / 2;
//                }
//            }
//
//
//            ll nxy = 0;
//            blank.clear();
//            blank.push_back(l - 1);
//            vector<int> pos;
//            int i = 0, j = 0;
//            while (i < x1.size() && j < y1.size())
//            {
//                if (x1[i] < y1[j])
//                {
//                    pos.push_back(x1[i]);
//                    i++;
//                }
//                else
//                {
//                    pos.push_back(y1[j]);
//                    j++;
//                }
//            }
//            while (i < x1.size())
//            {
//                pos.push_back(x1[i++]);
//            }
//            while (j < y1.size())
//            {
//                pos.push_back(y1[j++]);
//            }
//
//            for (int p : pos) blank.push_back(p);
//
//            blank.push_back(r + 1);
//            for (size_t i = 1; i < blank.size(); i++)
//            {
//                int d = blank[i] - blank[i - 1] - 1;
//                if (d > 0) nxy += (ll)d * (d + 1) / 2;
//            }
//
//            ret += total - x2 - y2 + nxy;
//        }
//    }
//
//    cout << ret << endl;
//
//    return 0;
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
//vector <ll> num;
//map<ll, ll> mp;
//
//signed main()
//{
//    ll n;
//    ll cnt = 0;
//    cin >> n;
//    ll i = 1;
//    for (i = 1; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//        {
//            num.push_back(i);
//        }
//    }
//    num.push_back(i);
//    for (int i = 0; i < num.size() - 1; i++)
//    {
//        if (num[i] + 1 == num[i+1])
//        {
//            ll left = i;
//            ll right = i+1;
//            ll sum = num[left];
//            while ( right < num.size() && num[right] == num[right - 1] + 1)
//            {
//                sum *= num[right];
//                while (sum > n)
//                {
//                    sum = sum / num[left++];
//                }
//                if (sum == n)
//                {
//                    cnt++;
//                    mp.insert({ num[left], num[right] });
//                    if (left == 0 && right != 1)
//                    {
//                        cnt++;
//                        mp.insert({ num[left + 1], num[right] });
//                    }
//                   
//                }
//                
//                right++;
//            }
//            i = left + 1;
//        }
//
//    }
//    cout << cnt << endl;
//    for (auto e : mp)
//    {
//        for (ll i = e.first; i < e.second; i++)
//        {
//            cout << i << " ";
//        }
//        cout << e.second;
//        cout << endl;
//    }
//}


//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//typedef long long ll;
//
//int main() {
//    ll n;
//    cin >> n;
//
//    // 收集所有因子
//    vector<ll> factors;
//    for (ll i = 1; i * i <= n; i++) {
//        if (n % i == 0) {
//            factors.push_back(i);
//            if (i != n / i) {
//                factors.push_back(n / i);
//            }
//        }
//    }
//
//    // 排序因子
//    sort(factors.begin(), factors.end());
//
//    map<ll, ll> mp;  // 记录每个方案的起点和终点
//
//    // 在因子中寻找连续的序列
//    for (int i = 0; i < factors.size(); i++) {
//        // 尝试以factors[i]为起点的连续序列
//        ll prod = factors[i];
//        for (int j = i + 1; j < factors.size(); j++) {
//            // 检查是否连续
//            if (factors[j] != factors[j - 1] + 1) {
//                break;
//            }
//
//            // 更新乘积
//            if (prod > n / factors[j]) {  // 防止溢出
//                break;
//            }
//            prod *= factors[j];
//
//            if (prod == n) {
//                // 找到一个方案
//                mp[factors[i]] = factors[j];
//                break;  // 对于这个起点，找到了一个方案，不需要继续找更长的
//            }
//            else if (prod > n) {
//                break;
//            }
//        }
//    }
//
//    // 输出结果
//    cout << mp.size() << endl;
//    for (auto e : mp) {
//        for (ll i = e.first; i < e.second; i++) {
//            cout << i << " ";
//        }
//        cout << e.second << endl;
//    }
//
//    return 0;
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
//
//map<ll, ll> mp;
//
//signed main()
//{
//	ll n, cnt = 0;
//	cin >> n;
//	vector<ll> yin_zi;
//	for (int i = 1; i <= sqrt(n); i++)
//	{
//		if (n % 1 == 0)
//		{
//			yin_zi.push_back(i);
//			if (n / i != i)
//			{
//				yin_zi.push_back(n / i);
//			}
//		}
//	}
//	sort(yin_zi.begin(), yin_zi.end());
//	for (int i = 0; i < yin_zi.size(); i++)
//	{
//		ll tem = yin_zi[i];
//		for (int j = i; j < yin_zi.size() - 1; j++)
//		{
//			
//			if (yin_zi[j] + 1 != yin_zi[j + 1] ) break;
//			tem *= yin_zi[j + 1];
//			if (tem > n) break;
//			if (tem == n)
//			{
//				mp[yin_zi[i]] = yin_zi[j + 1];
//				cnt++;
//			}
//		}
//	}
//	cout << cnt << endl;
//	for (auto e : mp)
//	{
//		for (ll i = e.first; i < e.second; i++)
//		{
//			cout << i << " ";
//		}
//		cout << e.second << endl;
//	}
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
//const int N = 0;
//
//int a[20][20];
//int row[10][10];
//int r_kind;
//int col[10][10];
//int c_kind;
//
//
//
//
//void dfs(int x, int y)
//{
//	
//
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			
//		}
//	}
//
//}
//
//
//signed main()
//{
//	dfs(1, 1);
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
//const int N = 1e6 + 10;;
//int a[N];
//int mp[2010];
//int kind;
//int len = 1e6;
//int ret = -100;
//
//signed main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	int L = 1, R = 1;
//	while (R <= n)
//	{
//		//进窗口中的进是最后一步，第一步是处理当前位置的right的值；
//		if (mp[a[R]] == 0)
//		{
//			kind++;
//			mp[a[R]]++;
//		}
//		else
//		{
//			mp[a[R]]++;
//		}
//		//判断合法：
//		while (kind == m)
//		{
//			if (R - L + 1 < len)
//			{
//				ret = R;
//				len = R - L + 1;
//			}
//			if (mp[a[L]] == 1)
//			{
//				mp[a[L]]--;
//				kind--;
//			}
//			else
//			{
//				mp[a[L]]--;
//			}
//			L++;
//		}
//		R++;
//	}
//	cout << ret - len + 1 << " " << ret << endl;
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
//const int N = 2e5 + 10;
//int a[N];
//vector<int> blank = { 0 };
//
//signed main()
//{
//    ll ret = 0;
//    int n, x, y;
//    cin >> n >> x >> y;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        if (a[i] > x || a[i] < y)
//        {
//            blank.push_back(i);
//        }
//    }
//    blank.push_back(n + 1);
//    for (int i = 0; i < blank.size() - 1; i++)
//    {
//        int L = blank[i] + 1;
//        int R = blank[i + 1] - 1;
//        int kind = 0;
//        int mp[3] = {};
//        if (R - L < 0) continue;
//        int l = L; int r = L;
//        while (r <= R)
//        {
//            if (a[r] == x)
//            {
//                if (mp[2] == 0) kind++;
//                mp[2]++;
//            }
//            if (a[r] == y)
//            {
//                if (mp[1] == 0) kind++;
//                mp[1]++;
//            }
//            while (kind == 2)
//            {
//                ret += R - r + 1;
//                if (a[l] == x)
//                {
//                    if (mp[2] == 1) kind--;
//                    mp[2]--;
//                }
//                if (a[l] == y)
//                {
//                    if (mp[1] == 1) kind--;
//                    mp[1]--;
//                }
//                l++;
//            }
//            r++;
//        }
//    }
//    cout << ret << endl;
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
//
//ll qpow(ll a, ll b, ll p)
//{
//	ll ret = 1;
//	while (b)
//	{
//		if (b & 1) ret = ret * a % p;
//		a = a * a % p;
//		b >>= 1;
//	}
//	return ret;
//}
//
//
//signed main()
//{
//	ll a, b, p;
//	cin >> a >> b >> p;
//	ll ret = qpow(a, b, p);
//	printf("%d^%d mod %d=%d", a, b, p, ret);
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
//const int N = 400;
//int n;
//strin path;
//int cnt;
//int col[N];
//int ma[2 * N];
//int su[2 * N];
//
//void dfs(int pos)
//{
//	if (pos == n)
//	{
//		cnt++;
//		if (cnt <= 3)
//		{
//			for (int i = 0; i < path.size(); i++)
//			{
//				cout << path[i] << " ";
//			}
//			cout << endl;
//		}
//		return;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (col[i] || ma[i + pos + 30] || su[pos - i + 30]) continue;
//		col[i] = 1;
//		ma[i + pos + 30] = 1;
//		su[pos - i + 30] = 1;
//		path += char(i + 48);
//		dfs(pos + 1);
//		ma[i + pos + 30] = 0;
//		su[pos - i + 30] = 0;
//		col[i] = 0;
//		path.pop_back();
//
//
//	}
//
//}
//
//
//signed main()
//{
//	cin >> n;
//	dfs(0);
//	cout << cnt << endl;
//
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
const int N = 10;
int a[N][N];

signed main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
        }
    }
}