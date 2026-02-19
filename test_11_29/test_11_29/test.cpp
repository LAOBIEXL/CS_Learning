#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//using namespace std;
//
//const int N = 1e5 + 10;
//int a[N], f[N];
//
//int main()
//{
//    int  n, m;
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        f[i] = f[i - 1] + a[i];
//    }
//    for (int i = 0; i < m; i++)
//    {
//        int l, r;
//        cin >> l >> r;
//        cout << f[l] - f[r - 1] << endl;
//    }
//
//
//    return 0;
//}
//
//#include<iostream>
//using namespace std;
//const int N = 2e5 + 10;
//int f[N];
//int a[N];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = max(a[i], a[i] + f[i - 1]);
//	} 
//	int ret = f[1];
//	for (int i = 2; i <= n; i++)
//	{
//		ret = max(f[i], ret);
//	}
//	cout << ret << endl;
//
//
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//
//const int N = 2e5 + 10;
//int f[N];
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int t;
//		cin >> t;
//		f[i] = t + f[i - 1];
//	}
//	int ret = -0x3f3f3f3f;
//	int pre = 0;//这个是最小前驱子段和；
//	for (int i = 1; i <= n; i++)
//	{
//		ret = max(ret, f[i] - pre);
//		pre = min(pre, f[i]);//在过程中动态计算最小前驱子段和；
//	}
//	cout << ret << endl;
//	
//
//	return 0;
//
// 
// 
// }

//#include<iostream>
//using namespace std;
//const int N = 1e3 + 10;
//typedef long long LL;
//LL f[N][N];
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int q;
//	cin >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			int x;
//			cin >> x;
//			f[i][j] = x + f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1];
//		}
//	}
//	while (q--)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		cout << f[x2][y2] - f[x2][y1 - 1] - f[x1 - 1][y2] + f[x1 - 1][y1 - 1] << endl;
//	}
//
//}

//#include<iostream>
//using namespace std;
//const int N = 5e3 + 10;
//int f[N][N];
//int a[N][N];
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	while (n--)
//	{
//		int x, y, v;//特别注意，这个地方的x,y可能零；
//		cin >> x >> y >> v;
//		a[x + 1][y + 1] = v;
//	}
//	for (int i = 1; i <= int(5e3+1); i++)
//	{
//		for (int j = 1; j <= int(5e3+1); j++)
//		{
//			f[i][j] = a[i][j] + f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1];
//		}
//	}
//	int ret = 0;
//	for (int i = m; i <= int(5e3+1); i++)
//	{
//		for (int j = m; j <= int(5e3+1); j++)
//		{
//			ret = max(ret, (f[i][j] - f[i][j - m] - f[i - m][j] + f[i - m][j - m]));
//		}
//	}
//	cout << ret << endl;
//
//
//	return 0;
//}
//
//
//#include<iostream>
//using namespace std;
//const int N = 1e5 + 10;
//typedef long long LL;
//LL f[N], a[N];
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	//方法一：
//	//for (int i = 1; i <= n; i++)
//	//{
//	//	cin >> a[i];
//	//	f[i] = a[i] - a[i - 1];
//	//}
//	//方法二:
//	for (int i = 1; i <= n; i++)
//	{
//		int t;
//		cin >> t;
//		f[i] += t;
//		f[i + 1] -= t;
//	}
//
//	while (m--)
//	{
//		int l, r, k;
//		cin >> l >> r >> k;
//		f[l] += k;
//		f[r + 1] -= k;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//	/*	a[i] = a[i - 1] + f[i];
//		cout << a[i] << " ";*/
//		f[i] = f[i - 1] + f[i];
//		cout << f[i] << " ";
//	}
//
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//typedef long long LL;
//const int N = 100010;
//LL f[N], a[N];
//
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int t;
//	cin >> t;
//	for (int i = 1; i < m; i++)
//	{
//		int t2;
//		cin >> t2;
//		if (t > t2) f[t2]++, f[t]--;
//		else
//		{
//			f[t]++, f[t2]--;
//		}
//		t = t2;
//	}
//	//还原：
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = f[i - 1] + f[i];
//	}
//	LL ret = 0;
//	for (int i = 1; i <= n-1; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		ret += min(a * f[i], c + b * f[i]);
//	}
//	cout << ret << endl;
//
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n;
//		cin >> n;
//		int y, r;
//		cin >> y >> r;
//		if (n - r - y/2 <= 0) cout << n << endl;
//		else
//		{
//			cout << n - (n - r - y / 2) << endl;
//		}
//	}
//
//
//
//}
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(2 * n);
        for (int i = 0; i < 2 * n; i++) 
        {
            cin >> arr[i];
        }
        unordered_map<int, int> count;
        for (auto num : arr)
        {
            count[num]++;
        }

        int o2 = 0, o1 = 0;
        for (auto it : count) 
        {
            if (it.second % 2 == 0) o2++;
            else o1++;
        }
        int k = min(o2, n);
        if (o1 == 0 && k % 2 != n % 2) 
        {
            k = max(0, k - 1);
        }
        cout << o1 + 2 * k << endl;
    }
    return 0;
}


//#include<iostream>
//using namespace std;
//
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//
//	}
//
//
//
//}