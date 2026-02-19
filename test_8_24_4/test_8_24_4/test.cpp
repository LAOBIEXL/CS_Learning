#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//二维数组的创建可以是【行】【列】；
	//初始化时候可以不指定行当时必须要写清楚有几列；

	int arr[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr1[][3] = { 0 };
	
	//初始化分为完全初始化和不完全初始化

	int a[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	int b[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };

	//当也可以选择性的填充每一行

	int c[3][5] = { {1,2},{3,4},{5,6} };

	//二元数组的使用：

	printf("%d\n", a[1][1]);
	int v = 0;
	for (v = 0; v < 3; v++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &a[v][j]);
		}
		printf("\n");
	}

	printf("%d\n",a[1][1]);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("a[%d][%d]=%p ",i,j, &a[i][j]);//二元数组中元素存储的地址
		}
		printf("\n");
	}



	return 0;
}

//有关于数组的两道练习题：

//一：多个字符从两端移动，向中间汇聚；

#include<Windows.h>
#include<stdlib.h>

int main()
{
	char content[] = "hello world!";
	char a[] = "############";
	int i = 0;
	int e = 0;
	int sz = 0;
	sz = sizeof(a) / sizeof(a[0]);
	e = sz-2;
	printf("%s\n", a);
	while (i != e)
	{
		a[i] = content[i];
		a[e] = content[e];
		system("cls");
		printf("%s\n", a);
		i++;
		e--;
		Sleep(1000);
		
	}

	
	return 0;
}

//进行二分法的尝试

int main()
{
	//char a[1000] = "have a try";
	//scanf("%s", a);//数组本身就是常量地址
	//printf("%s", a);
	int a[15] = { 1,2,4,6,7,9,13,15,19,25,27,30,32,40,45 };

	//这个数组中的数值是升序列
	//二分法的关键是先从中间取值；
	int count = 0;
	scanf("%d", &count);
	
	//寻找中间下标的值；
	int init = 0;
	int sz = 0;
	sz = sizeof(a) / sizeof(a[0]);
	int t = sz - 1;
	
	while (t != init)
	{
		int aver = (t - init) / 2 + init;
		if (a[aver] > count)
		{
			init = init;
			t = aver - 1;
		}
		else if (a[aver] < count)
		{
			init = aver + 1;
			t = t;
		}
		else
		{
			printf("%d是正确的数，位置是%d", count, aver);
			break;
		}
	}
	return 0;
}