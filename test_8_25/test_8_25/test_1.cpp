#define _CRT_SECURE_NO_WARNINGS


//有关于数组的两道练习题：

//一：多个字符从两端移动，向中间汇聚；

#include<windows.h>
#include<stdlib.h>
#include <stdio.h>
#include<string.h>


int main()
{
	char content[] = "hello world!";
	char a[] = "############";
	char content2[] = { 'h','e','l','l','o',' ','w','o','r','l','d','!' };
	int sz3 = 0;
	sz3 = sizeof(content2) / sizeof(content2[0]);//对于字符串的计算会比strlen多一个
	int i = 0;
	int e = 0;
	int sz = 0;
	int sz1 = (int)strlen("hello world!");
	sz = sizeof(a) / sizeof(a[0]);//对于字符串的计算会比strlen多一个
	e = sz - 2;
	printf("%d  %d %d\n", sz,sz1,sz3);
	printf("%d\n",e);
	printf("%s\n", a);
	while (i < e)
	{
		a[i] = content[i];
		a[e] = content[e];
		//system("cls");
		printf("%s\n", a);
		printf("i = %d, e = %d\n", i, e);
		i++;
		e--;
		sleep(1000);

	}


	return 0;
}

#include<Windows.h>
#include<stdlib.h>
#include <stdio.h>
#include<string.h>

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
	printf("%d\n", t);
	

	while (t >= init)
	{
		int aver = (t - init) / 2 + init;
		printf("%d\n", aver);
		if (a[aver] > count)
		{
			init = init;
			t = aver-1 ;
		}
		else if (a[aver] < count)
		{
			init = aver-1 ;
			t = t;
		}
		else
		{
			printf("%d是正确的数，位置是%d", count, aver);
			break;
		}
		//注意如果上面循环条件写的是不等于的话，就不要令 t = aver - 1；否则减一相等后就会代码停止；
		//如果执意写！= 作为循环条件，那么就不要减一
	}
	return 0;
}