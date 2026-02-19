#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int *array;
	int size;
}Array;

Array array_create(int size)
{
	Array a;
	a.size = size;
	a.array = (int *)malloc(sizeof(int) * a.size);
	return a;
}

Array a = array_create(100);

int main()
{
	int T = 0;
	scanf("%d", &T);
	
	Array a = array_create(2 * T);

	for(int i = 0; i < T; i++)
	{
		scanf("%d %d", &a[i]);
		 
	}

	return 0;
}

//有关指针的练习

#include<stdio.h>


void exchange(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;

}

int main()
{
	int a = 5;
	int b = 3;
	printf("%d%d\n", a, b);
	//利用指针实现在函数内进行数值交换
	exchange(&a, &b);
	printf("%d%d\n", a, b);
	int ab[] = { 1, 6, 9 };
	printf("%d\n", *ab);
	printf("%p\n", ab);
	//数组本身是指针常量，不可以被修改，可以直接打印
	//指针的移位置,向后一位就是加一；并且*（ab + 1)和ab[1]等同；
	printf("%d\n", *(ab + 1));
	//对指针的加减就是以指针的类型为基准去移位；
	int* z = 0;
	z = ab + 1;
	printf("%d",z[1]);
	//z【1】的效果等同与*（z + 1）= *（ab + 2）
	
	return 0;
}


//结构：包含多种变量的变量；
#include<stdio.h>
//定义方法1

struct {
	int a = 0;
	char b = '#';
}s1,s2;

//使用这种方法，下面的S1，S2是具有struct特性的变量，通过加（.某）进行访问；
//缺点是想要创建新的变量时，需要整个复制一遍，再在结尾创建新的变量名，如：
//struct {
//	int a = 0;
//	char b = '#';
//}s3, s4;

//第二中定义方法，不定义变量，直接定义数据类型：

struct type {
	char a =0;
	int b = 1;
	char arr1[];
};

//第三类定义方法相比于第二种定义方法更加方便
typedef struct {
	int a;
	char b;
	char arr1[];
}hello;
//hello同样不是变量，但是这种定义方法在创建变量的时候不需要再前面写struct


int main()
{
	//第一类
	s1.a = 2;
	s2.b = '%';
	printf("%d %c\n", s1.a, s2.b);

	//第二类
	struct type n;//创建变量n
	n.b = 735;
	printf("%d\n", n.b);
	//而且使用这一类结构体可以在创建变量的时候进行初始化：
	struct type init = { 'c',114514,"hello world" };
	printf("%c %d %s\n", init.a, init.b, init.arr1);

	//第三类
	hello test1 = { 3,'c',"try try try " };
	printf("%d %c %s\n", test1.a,test1.b, test1.arr1);
	//并且结构体类型也可以创建相应类型的指针：
	hello* p;
	p = &test1;
	printf("%s\n", (*p).arr1);
	printf("%s\n", p -> arr1);
	//上述两种方式的效果相同；


	return 0;
}


//链表相关练习
//前置知识：指针和结构体；
#include<stdio.h>

//节点= 数据 + 指针

//链表的初始化
//链表的增删改查；

struct node {
	int data;
	struct node* next;//指针域
};

//头节点一般不存储数据，存储指向第一个节点的指针域；

int main()
{
	










	return 0;
}