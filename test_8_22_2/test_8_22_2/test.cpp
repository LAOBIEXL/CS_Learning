#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age <= 18)
		printf("未成年");
	else
		if (age % 2 == 0)
			printf("是偶数");
	return 0;
}

//输入一个整数判断其是否是正数；

int main()
{
	int a = 0;
	scanf("%d",&a);
	if (a == 0)
		printf("等于0");
	else if (a < 0)
		printf("是负数");
	else
		printf("是正数");

	return 0;

//模拟一下else的悬空问题

#include<stdbool.h>

int main()
{
	bool a = false;
	bool b = true;
	if (a)
		if(b)
		printf("第一次打印");
	    else
		printf("第二次打印");

	return 0;
}

//switch 语句的运用：

int main()
{
	int a = 0;
	scanf("%d", &a);
	switch (a % 5)
	{
	case 1 :
		printf("余数是一");
		break;
	case 2 :
		printf("余数是二");
		break;
	case 3 :
		printf("余数是三");
		break;
	default :
		printf("余数是四");
		break;

	}


	return 0;
}

int main()
{
	//输入一个星期天数
	int a = 0;
	scanf("%d", &a);
	//判断是休息日还是工作日
	switch (a)
	{
	default:
		printf("请规范输入");
		break;
	case 1 :
	case 2 :
	case 3 :
	case 4 :
	case 5 :
		printf("是工作日");
		break;
	case 6 :
	case 7 :
		printf("是双休日");
		break;

	}

	return 0;
}

//在屏幕上打印1-10的值：

int main()
{
	int i = 1;
	while (i < 11)
	{
		printf("%d ", i);
		i++;
	}

	return 0;
}

//输入一个整数，将这个整数逆序打印

int main()
{
	int i = 0;
	scanf("%d", &i);
	while (i)
	{
		printf("%d ", i % 10);
		i /= 10;
	}
	return 0;
}

int main()
{
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		printf("%d ",i+1);
	}
	printf("%d", i);
	return 0;
}

//计算1-100中3的倍数的和

int main()
{
	int i = 0;
	int sum = 0;
	for (i = 3; i < 100; i += 3)
	{
		sum += i;
	}
	printf("%d\n", sum);
	return 0;

}

//利用循环结构计算输入数据的位数：
int main()
{
	int n = 0;
	int i = 0;
	scanf("%d",&i);
	while (i)
	{
		i /= 10;
		n++;
	}
	printf("%d\n", n);
	return 0;
}
//这种形式直接输入零就会输出错误结果

do while loop 形式

int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &i);
	do
	{
		i /= 10;
		n++;
	} while (i);
	printf("%d\n", n);

	return 0;
}

//找出100-200之间的素数

int main()
{
	//产生可能为素数的一组数
	int flag = 1;
	int i = 0;
	for (i = 101; i < 200; i += 2)
	{
		flag = 1;
		int j = 2;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			printf("%d ",i);
		}
	}
	return 0;
}

//使用goto语句演示跳转

int main()
{
	printf("第一次输出\n");
	goto san;
	printf("第二次输出");
san:
	printf("第三次输出");


	return 0;
}