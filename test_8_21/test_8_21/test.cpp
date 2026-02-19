#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

int main()
{
	float a = 6 / 4;
	int b = 6 / 4;
	printf("%f\n", a);//默认输出小数点后六位的小数
	printf("%.3f\n", a);
	printf("%d\n", b);
	return 0;

 }

#include<stdio.h>

int main()
{
	int a = -6;
	int b = 4;
	printf("%d\n", a % b);//取模运算只能用于整型
	return 0;
}

int main()
{
	int a = 6;
	int b = -4;
	printf("%d\n", a % b);//正负取决于第一个操作数的正负。
	return 0;

 }

int main()
{
	int a = 3;
	int b = 7;
	int c = 0;
	c = b = a + 3;
	printf("%d %d %d\n", c,b,a);
	a = 3;
	b = 7;
	c = 0;
	c = b = a++;
	printf("%d %d %d\n", c,b,a);
	return 0;
}

int main()
{
	float b = 1;
	int a = (int)3.14;
	printf("%d\n", a);
	return 0;

}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	c = scanf("%d%d", &a, &b);
	int max = 0;
	max = a > b ? a : b;
	printf("%d\n", max);
	return 0;
}


//闰年的判断：
int leap_year(int);

int main()
{
	int year = 0;
	scanf("%d", &year);
	if (leap_year(year))
		printf("%d是闰年\n", year);
	else
		printf("不是闰年");
	return 0;
}

int leap_year(int year)
{
	if (year / 400 == 0 || year / 100 != 0 && year / 4 == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int a = 34;
	printf("%x\n", 12);
	return 0;

}

#include<stdio.h>

int main()
{
	printf("%E  %e  %a  %A  %\n",31415.00f,3.1415f,3.14f,3.1f);
	return 0;
}

#include<stdio.h>

int main()
{
	double a = 2.21;
	printf("12345678999\n");
	printf("%+lf##\n", a);

	return 0;
}

#include<stdio.h>

int main()
{
	float a = 3.14f;
	printf("%-*.*f##\n", 10 ,5, a);
	return 0;
}

#include<stdio.h>

int main()
{
	char arr1[] = "Hello world!";
	for (int i = 0; i < 12; i++)
	{
		printf("%c ", arr1[i]);
	}
	int i = 0;
	for (i = 0; i < 12; i++)
		printf("%.*s\n", i, arr1);
	return 0;
}