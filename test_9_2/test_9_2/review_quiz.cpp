#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand((unsigned int)time(NULL));//注意不要放到循环体内部
	int a = rand();
	printf("%d", a);
	

	return 0;
}

//求十个整数当中的最大值

int main()
{
	int arr1[10] = {0};
	for (int j = 0; j < 10; j++)
	{
		scanf("%d", &arr1[j]);
	}
	int max_num = 0;
	for (int i = 0; i < 10; i++)
	{
		if (max_num < arr1[i])
		{
			max_num = arr1[i];
		}
	}
	printf("%d", max_num);

	return 0;
}

//一百到两百之间的素数

int main()
{
	for (int i = 101; i < 200; i+= 2)
	{
		int  flag = 1;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			printf("%d ", i);
		}
	}

	return 0;
}


int main()
{
	int b = 0;
	int a = 0;
	a = (5, 5,b = 4);//逗号表达式，返回最后一个运算的结果，优先级最低啊
	printf("%d %d\n", a, b);
	return 0;
}



