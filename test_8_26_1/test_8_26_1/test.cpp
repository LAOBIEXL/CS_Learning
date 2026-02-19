#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//打印1-100中三的倍数；
	
	int i = 0;
	for (i = 3; i < 100; i += 3)
	{
		printf("%d ", i);
	}


	return 0;
}

//将三个整数从大到小输出

int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d ", &a, &b, &c);

	if (a > b)
	{
		if (b > c)
		{
			printf("%d %d %d ", a, b, c);
		}
		else if (a > c)
		{
			printf("%d %d %d ", a, c, b);
		}
		else
		{
			printf("%d %d %d ", c, a, b);
		}

	}
	else
	{
		if (a > c)
		{
			printf("%d %d %d ", b, a, c);
		}
		else if (b > c)
		{
			printf("%d %d %d ",  b, c, a);
		}
		else
		{
			printf("%d %d %d ", c, b, a);
		}
	}


	return 0;
}
//有问题

int main()
{
	int a = 0;
	int b = 0;
	while (1)//持续循环
	{
		scanf("%d", &a);
		if (a > 140)
		{
			printf("genius");
		}
	}

	return 0;
}

通过scanf的返回值来终止循环

int main()
{
	int a = 0;
	int b = 0;
	while (scanf("%d",&a) != eof )//持续循环
	{
		if (a > 140)
		{
			printf("genius");
		}
	}
	
	return 0;
}
//涉及到多组输入时可以常用上面这种方法


//从大到小输出排序技巧

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	//不要去判断变量的大小关系，要去改变变量的大小关系：
	
	while (scanf("%d%d%d", &a, &b, &c) != eof)
	{
		int tem = 0;

		if (a < b)
		{
			tem = a;
			a = b;
			b = tem;
		}
		else if (a < c)
		{
			tem = a;
			a = c;
			c = tem;
		}
		else if (b < c)
		{
			tem = b;
			b = c;
			c = tem;
		}
		printf("%d %d %d", a, b, c);

	}

	return 0;
}
//要千万小心排序时的大小，先选出最大的；

//在屏幕上输出99乘法表：

int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d × %d = %d ",i,j, i * j);
		}
		printf("\n");
	}

	return 0;
}

//计算1-100中9出现的次数：

int main()
{
	int i = 0;
	int c = 0;
	for (i = 1; i < 100; i ++)
	{
		if (i % 10 == 9)
		{
			c++;
		}
		if (i / 10 == 9)
		{
			c++;
		}

	}
	printf("%d", c);

	return 0;

}


//打印1000 - 2000年之间的闰年；

int main()
{
	int y = 0;
	for(y = 1000; y <= 2000; y++)
	{
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		{
			printf("%d ", y);
		}
	}
	



	return 0;
}

求出所给数字的最大公约数

int main()
{
	int a = 0;
	int b = 0;
	while (scanf("%d %d", &a, &b) != eof)
	{
		int j = a >= b ? b : a;
		for (j; j >= 1; j--)
		{
			if (a % j == 0 && b % j == 0) {
				printf("最大公约数是%d\n", j);
				break;
			}
				
		}
	}

	return 0;
}

//计算分数相加结果

int main() {
	int i = 0;
	int flag = 1;
	long double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += (long double)(flag * (1.0 / i));
		flag = -flag;
	}
	printf("%lf", sum);
	return 0;
}

//使用辗转相除法计算最大公因数：

int main()
{
	int a = 0;
	int b = 0;
	int tem = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		while (a % b != 0) {
			tem = a % b;
			a = b;
			b = tem;
		}
		printf("%d", b);
		
	}
	return 0;
}