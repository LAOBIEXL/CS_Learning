#define _CRT_SECURE_NO_WARNINGS

//使用库函数：


//函数的声明可以不用写上形参的名称

long Add(long , long );

int main()
{
	

	long e = 32452;
	long v = 345563;
	long c = Add(e, v);
	printf("%ld\n", c);

	return 0;
}


//自定义函数

//加法函数的练习
//
//long Add(long a, long b)
//{
//	long c = a + b;
//	return c;
//}

//简化为返回表达式

long Add(long a, long b)
{
	return a+b;
}


//关于return的一些试验；


int re()
{
	if (1)
	{
		printf("hello\n");
	}
	else
	{
		return 3;
	}
}


int main()
{
	int a = re();
	printf("%d", a);



	return 0;
}

//以数组为参数的函数


void set_arr(int a[], int s)
{
	int i = 0;
	for (i = 0; i < s; i++)
		a[i] = -1;
}

void prin_arr(int a[], int s)
{
	int i = 0;
	for (i = 0; i < s; i++)
		printf("%d ", a[i]);
}


int main()
{
	int arr[20] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	set_arr(arr,sz);

	prin_arr(arr,sz);

	return 0;

}


//写一个程序输出相应月份的天数

#include"is_leap_year.h"



int main()
{
	printf("%d\n", p);
	int m = 0;
	int y = 0;
	printf("请输入你想知道天数的月份 >>> ");
	scanf("%d", &m);
	printf("\n该月份属于哪一年 >>> ");
	scanf("%d", &y);

	printf("\n该月份的天数是%d", count_day(m, y));

	//关于作用域的相关试验：
	return 0;
}

void test(void)
{
	static int i = 0;
	i++;
	i++;
	printf("%d ", i);
}

int main()
{
	int i = 0;
	for(i = 0;i < 10;i++)
	{
		test();
	}
	printf("\n%d\n", i);
	

	return 0;
	
}