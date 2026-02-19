#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


瓶子和汽水

int main()
{
	int money = 11;
	int count =  money;
	int bottle = money;
	while (bottle >= 2)
	{
		count += bottle / 2;
		bottle = bottle / 2 + bottle % 2;


	}
	printf("%d", count);

	return 0;
}

int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;


	scanf("%d", &money);

	//方法1
	total = money;
	empty = money;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}

	printf("total = %d\n", total);
	return 0;
}

//在屏幕上输出菱形

int main()
{
	char display[13][13] = { 0 };
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			display[i][j] = '*';
		}
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if(i + j < 6)
			display[i][j] = ' ';
		}
	}
	for (int i = 7; i < 13; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if((12-i) + j < 6)
			display[i][j] = ' ';
		}
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 7; j < 13; j++)
		{
			if((12-j) + i < 6)
			display[i][j] = ' ';
		}
	}
	for (int i = 7; i < 13; i++)
	{
		for (int j = 7; j < 13; j++)
		{
			if ((12-i)+(12-j) < 6)
			display[i][j] = ' ';
		}
	}
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 13; j++)
		{

			printf("%c", display[i][j]);
		}
		printf("\n");
	}



	return 0;

}

//求前5项和

int main()
{
	int  n = 0;
	scanf("%d", &n);
	int count = 5;
	int su = 0;

	while (count)
	{
		int num ;
		num = n;
		for (int i = 1; i < count; i++)
		{
			 num = (num * 10 + n);
		}
		su += num;
		count--;



	}
	printf("%d", su);

	return 0;
}




//斐波那契数列
// 

long count(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
	{
		return count(n - 1) + count(n - 2);
	}
	
}




int main()
{
	int n = 0;
	while (scanf("%d",& n) != eof)
	{
		long su = count(n);

		printf("%ld", su);

	}




	return 0;
}

//非递归的视线：



int main()
{
	int a = 1;
	int b = 1;
	int n = 0;
	int tem = 0;
	while (scanf("%d", &n) != eof)
	{
		if (n == 1 || n == 2)
			printf("%d", 1);
		else
		{
			for (int i = 0; i < n - 2; i++)
			{
				tem = a + b;
				a = b;
				b = tem;

			}
			
			printf("%d", tem);
		}

	
	}


	return 0;
}


//实现n的k次方

#include<math.h>

int my_pow(int i, int n)
{
	if (n == 1)
		return i;
	else
	{
		return my_pow(i, n - 1 ) * i;
	}


}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int a = my_pow(n, k);

	printf("%d", a);


	return 0;

}


//递归实现每个位数之和：


void my_sum(int i)
{
	if ((i / 10) == 0)
	{
		printf("%d ", i);
	}
	else
	{
		
		my_sum(i / 10);
		printf("%d ", i % 10);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	my_sum(n);




	return 0;
}


//使用单纯控制行列输出的形式完成图形：

int main()
{
	int n = 7;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 7 - 1 - i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < 1 + 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < 1 + i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < 11-2*i; j++)
		{
			printf("*");
		}
		printf("\n");
	}







	return 0;
}

//找到单独出现的数

int main()
{
	int a[11] = { 1,2,3,4,5,1,2,3,4 };
	int sz = sizeof(a) / sizeof(a[0]);
	int an = 0;
	for (int i = 0; i < sz; i++)
	{
		an = an ^ a[i];
	}

	printf("%d", an);



	return 0;
}


打印整形二进制的奇数位和偶数位：

int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 30; i >= 0; i-= 2)
	{
		if ((n & (1 << i)) == 1)
			printf("1");
		else
			printf("0");
	}



	return 0;
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	printf("%d", count);

	return 0;
}






int a;

int main()
{
	a--;
	if (a > sizeof(a))
	{
		printf("hehe")
	}


	return 0;
}

void bubble(int a[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tem = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tem;
				flag = 0;
			}

		}
		if (flag == 0)
			break;
	}
}


int main()
{
	int a[11] = { 1,6,35,345,3,5,75,4,13,78,43 };
	int sz = sizeof(a) / sizeof(a[0]);
	bubble(a, sz);
	for (int i = 0; i < sz; i++)
	{

		printf("%d ", a[i]);
	}


	return 0;
}

void bubble(char a[],int k,int sz)
{
	for (int i = 0; i < k; i++)
	{
		
		for (int j = 0; j < sz - 1; j++)
		{
			
			int tem = a[j + 1];
			a[j + 1] = a[j];
			a[j] = tem;

		}

	}
}
#include<string.h>

int main()
{
	char a[10] = "abcde";
	int sz = (int)strlen(a);
	int k = 0;
	scanf("%d", &k);
	bubble(a,k,sz);
	
	printf("%s", a);


	return 0;
}

调整数组使奇数排在偶数前面：





//指针模拟二维数组
int main()
{
	int a[10] = { 1,2,3,4,5 };
	int b[10] = { 3,4,5,6,2 };
	int c[10] = { 6,4,5,3,2 };
	int* p[3] = { a,b,c };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", *(p[i] + j));
			printf("%d ", p[i][j]);

		}
		printf("\n");
	}

	 





	return 0;
}


int main()
{
	char* p = "hello";//注意cpp不支持这个功能；
	printf("%s\n", p);
	printf("%c\n", *p);
	*p = 'c';
	printf("%s\n", p);
	



	return 0;
}


int main()
{
	int a[10] = { 0 };

	printf("%p\n", a);
	printf("%p\n", &a);
	printf("%p\n", *&a);




	return 0;
}