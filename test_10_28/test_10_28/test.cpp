#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;
#include<utility>

//int main()
//{
//	int a[15] = { 2,5,3,0,4,3,0,5,0,33,0,0,3,5,0 };
//
//	int cur = -1;
//	int p = 0;
//	
//	for (int p = 0; p < 15; p++)
//	{
//		if (a[p] != 0)
//		{
//			swap(a[p], a[++cur]);
//		}
//	}
//
//	for (int i = 0; i < 15; i++)
//	{
//		cout << a[i] << " ";
//	}
//
//	return 0;
//}

//int main()
//{
//	int a[15] = { 2,5,3,0,4,3,0,5,0,33,0,0,3,5,0 };
//
//	int cur = -1;
//	int p = 0;
//	while (p < 15)
//	{
//		if (a[p] != 0)
//		{
//			swap(a[p++], a[++cur]);
//		}
//		else
//		{
//			p++;
//		}
//	}
//
//	for (int i = 0; i < 15; i++)
//	{
//		cout << a[i] << " ";
//	}
//
//	return 0;
//}

//
////避免访问越界：
//
////1遍历指针的自增在for循环内部；
//
//int main()
//{
//	int cur = -1;
//	int p;
//	for (int p = 0; p < 15; p++)
//	{
//		if (a[p] != 0)
//		{
//			swap(a[p], a[++cur]);
//		}
//	}
//	
//}
//
////2遍历指针的自增在循环内：
//
//int main()
//{
//	int cur = -1;
//	int p = 0;
//	while (p < 15)
//	{
//		if (a[p] != 0)
//		{
//			swap(a[p++], a[++cur]);
//		}
//		else
//		{
//			p++;
//		}
//	}
//
//	//不要忘写else的p++;
//}
//#include<vector>
//
//int main()
//{
//	vector<int> num = {2, 0,2 ,1,1,0 };
//	int left = -1;
//	int right = num.size() ;
//	int p = 0;
//
//	while (p < right)
//	{
//		if (num[p] == 0)
//		{
//			swap(num[p++], num[++left]);
//		}
//		else if (num[p] == 1)
//		{
//			p++;
//		}
//		else
//		{
//			swap(num[--right], num[p]);
//		}
//	}
//	
//	for (int i = 0; i < num.size(); i++)
//	{
//		cout << num[i] << " ";
//	}
//}

////归并：
//
//int main()
//{
//	int a[10] = { 1,3,5,9,11,23,44,48,99,126 };
//	int b[7] = { 1,4,7,9,11,16,19 };
//
//	int sz1 = sizeof(a) / sizeof(a[0]);
//	int sz2 = sizeof(b) / sizeof(b[0]);
//
//	int c[17] = { 0 };
//
//	int i = 0;
//	int j = 0;
//
//	int p = 0;
//	while (i <= sz1 - 1 && j <= sz2 - 1)
//	{
//		if (a[i] >= b[j])
//		{
//			c[p++] = b[j++];
//		}
//		else
//		{
//			c[p++] = a[i++];
//		}
//
//	}
//	while (i <= sz1 - 1)
//	{
//		c[p++] = a[i++];
//	}
//	while (j <= sz2 - 1)
//	{
//		c[p++] = b[j++];
//	}
//	for (int i = 0; i < 17; i++)
//	{
//		cout << c[i] << " ";
//	}
//
//}

//
//
//int main()
//{
//	int a[17] = { 1,3,5,9,11,23,44,48,99,126 };
//	int b[7] = { 1,4,7,9,11,16,19 };
//
//	int p = 16;
//	int j = 9;
//	int i = 6;
//	while (i >= 0 && j >= 0)
//	{
//		if (a[j] >= b[i])
//		{
//			a[p--] = a[j--];
//		}
//		else
//		{
//			a[p--] = b[i--];
//		}
//	}
//	while (j >= 0) a[p--] = a[j--];
//	while (i >= 0) a[p--] = b[i--];
//
//	for (int i = 0; i < 17; i++)
//	{
//		cout << a[i] << " ";
//	}
//}

#include<cctype>
int main()
{
	char c;
	int num = 0;
	while ((c = getchar()) != 10)
	{
		num = num * 10 + (c - '0');

	}
	cout << num;
}

