#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//越界访问导致的死循环：


int main() 
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	return 0;



}

//函数定义和声明的快捷跳转

#include"filename.h"

int main()
{
	int x = 0, y = 0;
	add(x, y);
	return 0;

}


//在自定义函数中监视数组：

void check(int arr[][3],int arr2[3])
{
	return;


}

int main()
{
	int a[4][3] = { {1,2,3},{3,2,1},{2,3,1} };
	int b[3] = { 4,3,2 };
	check(a, b);


	return 0;
}

//函数递归

int main()
{

	printf("hehe\n");
	main();


	return 0;
}


//阶乘的递归实现

long fuc(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	return n * fuc(n - 1);



}



int main()
{
	int n = 10;

	long int result = fuc(10);
	printf("%ld", result);



	return 0;
}

//逆序打印与顺序打印：

void prin(int n)
{
	if (n / 10 == 0)
	{
		printf("%d ", n);
		return;

	}
	
	prin(n / 10);
	printf("%d ", n % 10);
}

void print(int);

int main()
{
	int n = 1234;
	while (n)
	{
		printf("%d ", n % 10);
		n = n / 10;
	}
	printf("\n");

	n = 1234;
	prin(n);
	printf("\n");
	print(n);


	return 0;
}

//改进版本：

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);

	}
	printf("%d", n % 10);

}


int main()
{
	long sum = 1;
	for (int i = 1; i <= 10; i++)
	{
		sum *= i;


	}
	printf("%ld", sum);







	return 0;
}


//斐波那契数列

long ma(int n)
{
	if (n <= 2)
	{
		return 1;

	}
	else
	{
		return ma(n - 1) + ma(n - 2);
	}

}

int main()
{
	int n = 10;
	printf("%ld", ma(10));



	return 0;
}

//使用非递归的方法进行实现

int main()
{
	int a = 1;
	int b = 1;
	int sum = 0;
	for (int j = 0; j < 8; j++)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("%d", sum);





	return 0;
}

int main()
{
	int a = -3;
	int b = 2;
	int c = a / b;
	printf("%d", c);


	return 0;
}

int main()
{
	int a = 017;
	int b = 0xf;
	int c = 15;
	printf("%d %d %d \n", a, b, c);
	printf("%o %x %d", c, c, c);
	int d = -1;
	return 0;

}


int main()
{
	int num1 = -3;
	int num2 = 5;
	//11111111 11111111 11111111 11111100
	//00000000 00000000 00000000 00000101
	int a = num1 & num2;
	int b = num1 | num2;
	int c = num1 ^ num2;
	int d = ~num1;
	int e = ~0;
	printf("%d %d %d %d %d ", a, b, c, d, e);


	return 0;
}

//位操作符？


//在不创建中间变量实现数值交换的几种方法

int main()
{
	int a = 4;
	int b = 7;
	printf("%d %d\n", a, b);
	a = a + b;//有整形溢出的风险；
	b = a - b;
	a = a - b;
	printf("%d %d\n", a, b);

	// 0 ^ 0 = 0; a ^ a = 0
	// 0 ^ a = a; 所以 a ^ a ^ b = b;且满足交换率 a ^ b ^ a = b

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);



	return 0;
}



//计算存储在内存中的二进制中的一的个数

int main()
{
	//对于非负数可以使用短除法
	int a = -15;
	int count = 0;
	while (a)
	{
		if (a % 2 == 1)
		{
			count++;
		}
		a /= 2;
	}
	printf("%d\n", count);
	
	//对于负数：与00001按位与，直接判断二进制的最后一位是不是1；

	int b = -15;
	int count2 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((b>>i) & 1 == 1)
		{
			count2++;
		}
	}
	printf("%d\n", count2);

	//上面这种方法对于每一种整数都需要进行32次判断
	//更简洁的方法

	int n = -15;
	int count3 = 0;
	while (n)
	{
		count3++;
		n = n & (n - 1);//这个表达式可以让n的二进制形式中的最低位的一消失
	}
	printf("%d\n", count3);


	return 0;
}



//对二进制中的零一进行特定地修改：

//定义一个二进制输出函数

void b_print(int n)
{
	if (n > 1)
	{
		b_print(n >> 1);
	}
	printf((n & 1) == 1 ? "1" : "0");
	

}

int main()
{
	//将13的二进制序列第五位修改为1再修改回来
	int n = 13;
	b_print(n);
	printf("\n");
	n = n | (1 << 4);
	b_print(n);
	printf("\n");
	n = n& (~(1 << 4));
	b_print(n);
	printf("\n");
	return 0;
}

//结构体的几种定义方法
struct {
	int a;
	int b;
	int arr[10];
	char name[10];
}a,b;

struct node {
	int num;
	char ol[10];



}c,d,e;

typedef struct {
	int hello;
	char hi[10000];


}node1;


int main()
{
	a = { 1,2,{2,3,4},"oh no" };
	printf("%d %s %d\n", a.a, a.name, a.b);
	struct node b = { 30, "hello" };
	printf("%d %s\n", b.num, b.ol);
	c = { 40,"what" };
	printf("%d %s\n", c.num, c.ol);
	node1 d = { 34335,"hello world!" };
	printf("%d %s\n", d.hello, d.hi);

	//结构体的初始化除了上面的严格顺序初始化，还可以使用成员变量名进行初始化

	node1 w = { .hello = 114514, .hi = "list" };
	e = { .ol = "how", .num = 35 };



	return 0;
}

//结构体嵌套结构体的初始化
struct node2 {
	int d;
	int e;
};


struct node1 {
	int a;
	int b;
	struct node2 c;
	int* p;
};



int main()
{
	struct node1 w = { 20,30,{30,50},null };//再次使用大括号可以对结构体内定义的结构体变量进行初始化

	printf("%d", w.c.d);


	return 0;
}

#include<string.h>

int main()
{
	char name[10] = { 0 };
	strcpy(name, "tony");
	printf("%s\n", name);




	return 0;
}

#include<string.h>

struct nodo {
	int a;
	int b;
	char c[120];
};

int main()
{
	struct nodo node;
	struct nodo* p = &node;
	p->a = 10;
	p->b = 114514;
	strcpy(p->c, "hello again");
	printf("%d %d %s %s", node.b, p->b, node.c, p->c);

	return 0;

 }


int main()
{
	char a = 127;//char 为unsigned int 
	//00000000 00000000 00000000 01111111;注意127是七个一不是八个一；
	char b = 4;
	//00000000 00000000 00000000 00000100;
	//上面两个均是补码；补码计算，补码存储
	char c = 0;
	//00000000 00000000 00000000 10000011;所以这个计算结果也是补码；
	c = a + b;
	printf("%d", c);//%d表示的是int类型，需要进行整形提升 11111111 11111111 11111111 10000011;
	//转化为原码 10000000 0000000 0000000 01111101 = -125

	return 0;
}


