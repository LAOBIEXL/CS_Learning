#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//    int x[4][4] = { {3,5,2,4},{5,3,9,8},{4,6,8,7},
//    {6,8,3,1} };
//    int i, j, m, n, k;
//    for (i = 0; i < 4; i++) {
//        k = x[i][0]; m = i, n = 0;
//        for (j = 1; j < 4; j++)
//            if (x[i][j] < k) {
//                k = x[i][j];
//                m = i; n = j;
//            }
//        for (j = 0; j < 4; j++)
//            x[i][j] /= x[m][n];
//    }
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 4; j++) cout << setw(3) << x[i][j];
//        putchar('\n');
//    }
//}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//const int N = 13;
//int arr[N][N];
//
//int dx[] = { 0, 1, 0, -1 };
//int dy[] = { 1, 0, -1, 0 };
//int pos = 0;
//
//int n;
//int x = 1, y = 1;
//
//
//int main()
//{
//	cin >> n;
//	int cnt = 1;
//	while (cnt <= n * n)
//	{
//		arr[x][y] = cnt;
//		//开始修改坐标；
//		int a = x + dx[pos], b = y + dy[pos];
//		//判断是否认越界；
//
//		if (a < 1 || a > n || b < 1 || b > n || arr[a][b] != 0)
//		{
//			pos = (pos + 1) % 4;
//			a = x + dx[pos];
//			b = y + dy[pos];
//		}
//		x = a; y = b;
//		cnt++;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cout << setw(3) << arr[i][j];
//		}
//		cout << endl;
//	}
//
//
//
//	return 0;
//}

//
//#include<iostream>
//#include<string>
//#include<cctype>
//#include<algorithm>
//using namespace std;
//
//int p1, p2, p3, n;
//string a;
//string ret;
//
//void trans(int l, int r)
//{
//	string t;
//	char tmp;
//	int left = a[l];
//	int right = a[r];
//	for (int i = left + 1; i < right; i++)
//	{
//		tmp = i;
//		if (p1 == 3) tmp = '*';
//		else if (p1 == 2 || isalpha(tmp)) tmp = tmp - 32;
//		for (int j = 0; j < p2; j++)
//		{
//			t += tmp;
//		}
//	}
//	if (p3 == 2)
//	{
//		reverse(t.begin(), t.end());
//	}
//	ret += t;
//}
//
//int main()
//{
//	cin >> p1 >> p2 >> p3;
//	cin >> a;
//	n = a.size();
//
//	for (int i = 0; i < n; i++)
//	{
//		char tmp = a[i];
//		if (tmp != '-' || i == 0 || i == n - 1) ret += tmp;
//		else
//		{
//			int left = i - 1, right = i + 1;
//			if (isdigit(a[left]) && isdigit(a[right]) && a[left] < a[right] || isalpha(a[left]) && isalpha(a[right]) && a[left] < a[right])
//				trans(left, right);
//			else
//			{
//				ret += tmp;
//			}
//		}
//	}
//
//	cout << ret << endl;
//
//	return 0;
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//
////定义数组的大小可以达到：
//const int N = 1e6 + 10;
//
//int a[N], b[N], c[N];
//
////由于字符串可以直接统计长度，但是数组不能快捷统计非空长度，所以需要记录数的长度：
//int la, lb, lc;
//
//void add()
//{
//	for (int i = 0; i < lc; i++)
//	{
//		c[i] += a[i] + b[i]; //注意这个地方一定是＋= ,所有进位的值都存储在c的未使用的数位上；
//		c[i + 1] = c[i] / 10;
//		c[i] %= 10;
//		
//	}
//	if (c[lc]/*c[lc]位置非空，说明总长度发生进位*/) lc++;
//}
//
//int main()
//{
//	string x;
//	string y;
//	cin >> x >> y;
//	la = x.size();
//	lb = y.size();
//	//先一般化默认c的长度为a,b中的最大值，如果有进位再后续处理：
//	lc = max(la, lb);
//
//	for (int i = 0; i < la; i++) a[la - 1 - i] = x[i] - '0';
//	for (int i = 0; i < lb; i++) b[lb - 1 - i] = y[i] - '0';
//
//	add();
//
//	for (int i = lc - 1; i >= 0; i--)
//	{
//		cout << c[i];
//	}
//	cout << endl;
//	return 0;
//}


//
//#include<iostream>
//using namespace std;
//
//const int N = 70;
//long long f[N]; //f[i]的状态表示为有i个台阶的时候，一共有多少种方案；
//
//int main()
//{
//	int n;
//	cin >> n;
//	f[0] = 1;
//	f[1] = 1;
//	f[2] = 2;
//	for (int i = 3; i <= n; i++)
//	{
//		f[i] = f[i - 1] + f[i - 2] + f[i - 3];
//	}
//
//	cout << f[n] << endl;
//
//
//
//
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//long long a, b, c, t;
//
//int main()
//{
//	int n;
//	cin >> n;
//	a = 1; b = 1; c = 2;
//	for (int i = 3; i <= n; i++)
//	{
//		t = a + b + c;
//		a = b;
//		b = c;
//		c = t;
//	}
//	//这里需要小心如果n为1，2的话，是不会进入循环的，但是有由于本来就是输出c的值，所以只有n=1需要特殊说明；
//
//	if (n == 1) cout << b;
//	else cout << c;
//}
//
//#include<iostream>
//using namespace std;
//
//const int N = 1010;
//int arr[N][N], f[N];//只保留一维，一维时候要注意填数的顺序；
//int ret = 0;
//int r;
//
//int main()
//{
//	cin >> r;
//	for (int i = 1; i <= r; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	for (int i = 1; i <= r; i++)
//	{
//		for (int j = i; j >= 1; j--)//反过来遍历
//		{
//			f[j] = max(f[j - 1], f[j]) + arr[i][j];
//		}
//	}
//	for (int j = 1; j <= r; j++)
//	{
//		ret = max(ret, f[j]);
//	}
//	cout << ret << endl;
//
//
//	return 0;
//}

//#include<iostream>
//#include<cmath>
//
//using namespace std;
//#define long long LL
//
//const int N = 1e5 + 10;
//int f[N];
//int a[N];
//
//
//int main()
//{
//	int n; int k;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	memset(f, 0x3f, sizeof(f));
//
//	f[1] = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		for (int j = i - 1; j >= i - k && j >= 1; j--)
//		{
//			f[i] = min(f[j] + int(fabs(a[i] - a[j])), f[i]);
//		}
//	}
//	cout << f[n] << endl;
//
//
//	return 0;
//}

  
//#include<iostream>
//using namespace std;
//
//const int N = 110;
//int t, n;
//
//
//int main()
//{
//	cin >> t;
//	while (t--)
//	{
//		int h[N] = { 0 };
//	
//		cin >> n;
//		int maxi = 0;
//		for (int i = 0; i < n; i++)
//		{
//			
//			int t;
//			cin >> t;
//			h[t]++;
//			maxi = max(maxi, t);
//		}
//		int ret = 0;
//		int i = 1;
//		while (i <= maxi)
//		{
//			
//			if (h[i] != i && h[i] != 0)
//			{
//				if (h[i] < i) ret += h[i];
//				else ret += h[i] - i;
//			}
//	
//				
//			i++;
//		}
//		cout << ret+h[0] << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, x, y;
//		cin >> n >> x >> y;
//		int a = 0;
//		int b = 0;
//		int o = n;
//		while (o--)
//		{
//			char tmp;
//			cin >> tmp;
//			if (tmp == '4') a++;
//			else b++;
//		}
//		x = fabs(x); y = fabs(y);
//		int flag = 1;
//		if (x <= n && y <= n)
//		{
//			if (y >= -1 * x + 2 * n - a + 1)
//				flag = 0;
//			if (flag) cout << "YES" << endl;
//			else cout << "NO" << endl;
//
//		}
//		else cout << "NO" << endl;
//
//	}
//
//
//}


//#include<iostream>
//using namespace std;
//
////想要输出 y = -x + 3 与x,y轴相围成的图案，使用一下方法：
//int main()
//{
//	//1.解析式范围法，即在循环的过程中每个点都循环到，但是超过范围的点不输出；
//	for (int i = 0; i <= 3; i++)
//	{
//		for (int j = 0; j <= 3; j++)
//		{
//			if (i >= -j + 3) cout << "*";
//			else cout << " ";
//		}
//		cout << endl;
//		//输出的方向不一致的底层原因是解析式的坐标系与输出的坐标系不一致导致的，输出的坐标系中，向下是y的正方向，向右是x的正方向；
//		//所以使用这种方法，要使用输出的坐标系
//		//如果不想改变计算的解析式，可以改变输出的坐标系；
//
//	
//	}
//	for (int i = 3; i >= 0; i--)
//	{
//		for (int j = 0; j <= 3; j++)
//		{
//			if (i <= -j + 3) cout << "*";
//			else cout << " ";
//		}
//		cout << endl;
//	}
//
//	//2.方法二，直接找到i与j之间的关系输出：
//	for (int i = 0; i <= 3; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//	return 0;
//
// for()
//#include<iostream>
//using namespace std;
//
//
//int main()
//{
//	int b = 3;
//	int n = 10;
//	for (int y = 10; y >= 0; y--)
//	{
//		for (int x = 0; x <= 10; x++)
//		{
//			if (y >= -1 * x + 20 - b + 1) cout << "*";
//			else cout << " ";
//		}
//		cout << endl;
//	}
//
//}