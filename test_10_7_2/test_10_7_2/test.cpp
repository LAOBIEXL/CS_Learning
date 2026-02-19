#define _CRT_SECURE_NO_WARNINGS
//#include<cstdio>
//#include<iostream>
//using namespace std;

//int main()
//{
//	char a[10] = {'2','3','4'};
//	scanf("%6s", a);
//	//限制的最大读取不包括自动加的'\0 ';
//	printf("%s\n", a);
//	printf("%.4s\n", a);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char a[10];
//	fgets(a, 10, stdin);
//	cout << a;
//
//	return 0;
//}

//#include<cstdio>
//#include<iostream>
//using namespace std;

//int main()
//{
//	char a[10];
//	scanf("%[^\n]s", a);
//	cout << a;
//
//
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	//输入 "abc def\n"
//	int i = 0;
//	int ch = 0;
//	while ((ch = getchar()) != 10) {
//		arr[i] = ch;
//		i++;
//	}
//	/*arr[i] = '\0';*/
//	cout << arr;
//	return 0;
//}

//int main()
//{
//	putchar(getchar());
//
//}


//int main()
//{
//	char a[] = "hello world";
//	printf("%.4s", a + 1);
//	//从第二个字符开始输出4个字符
//
//	return 0;
//}

//#include<cstring>
//
//int main() {
//	char a[] = "hello world";
//	char b[20];
//	char c[20];
//	char d[20];
//
//	strcpy(b, a);
//	cout << b << endl;
//
//	memcpy(c, a, 11);
//	cout << c << endl;
//
//	memcpy(d, a, 12);
//	cout << d << endl;
//
//	return 0;
//}
//
//#include<cstring>
//
//int main()
//{
//	char a[20] = "hello ";
//	char b[] = "world";
//	//想要实验 a + b 追加字符：
//
//	strcat(a, b);
//	cout << a << endl;
//
//
//	return 0;
//}

//#include<cstring>
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char a[] = "hello world";
//	int i = 0;
//	while (i < 200)
//	{
//
//		cout << a[i % strlen(a)];
//		i++;
//	}
//
//
//	return 0;
//}

#include<iostream>
#include<cstring> 
using namespace std;



//n张牌，1在上 ，n 在下； 

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char a[200010] = { 0 };
		char b[200010] = { 0 };
		int c[3] = { 0 };
		int n, k;
		cin >> n >> k;
		cin >> a;
		//操作分为'0','1','2';
		int i = 0;
		while (a[i])
		{
			c[(a[i] - 48)]++;
			i++;
		}
		for (int j = 0; j < n; j++)
		{
			b[j] = '+';
		}
		int e = 0; int w = 0;
		for (e = 0; e < c[0]; e++)
		{
			b[e] = '-';
		}
		for (w = 0; w < c[1]; w++)
		{
			b[n - 1 - w] = '-';
		}
		for (int j = 0; j < c[2]; j++)
		{
			b[e + j] = '?';
			b[n - 1 - w - j] = '?';

		}
		cout << b << endl;
	}


	return 0;
}