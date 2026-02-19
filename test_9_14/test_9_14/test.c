#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a = 0;
	printf("%p\n", &a);
	int* p = &a;
	printf("%zd", sizeof(p));

	return 0;
}


//指针变量类型对其解引用后修改权限的影响

int main()
{
	int a = 0x11223344;
	int* p = &a;
	*p = 0;
	printf("%d %x\n", a,a);

	int b = 0x11223344;
	char* q = (char *) & b;
	*q = 0;
	printf("%d %x\n", b, b);
	
	int c = 255;



	return 0;
}


int main()
{
	int a = 0;
	void* p = &a;
	char b = 0;
	void* q = &b;

	



	return 0;
}


//指针的运算：

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = a;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));



	}
	return 0;
}

#include<string.h>

unsigned int my_strlen(char arr[])
{
	char* p = arr;
	while (*p != '\0')
	{
		p++;
		
	}
	unsigned int a = p - arr;//相减就是两个指针之间的元素个数；
	return a;
}


int main()
{
	char arr[] = "hello world!";
	size_t a = strlen(arr);
	size_t b = sizeof(arr) / sizeof(arr[0]);
	size_t c = my_strlen(arr);
	//char *p = ++arr;
	printf("%zd %zd %zd \n", a, b, c);
	char* p = arr;
	printf("%p %p\n", p, &p);


	return 0;
}

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(a) / sizeof(a[0]);
	int* p = a;
	while (p < a + sz)
	{
		printf("%d", *p);
		p++;

	}



	return 0;
}

int main()
{
	const int b = 10;
	int  * const p = &b;//注意在cpp中这种方法似乎不可行；
	*p = 9;
	printf("%p %d\n", p,*p);

	const int c = 20;
	
	//p = &c;
	*p = 19;
	printf("%p %d\n", p, *p);

	int d = 0;
	//p = &d;
	*p = 2;
	printf("%p %d", p, *p);



	return 0;
}

int* re()
{
	int n = 100;
	return &n;
}

int main()
{
	int* a = re();

	return 0;
}


//指针的使用规范：

int main()
{
	int* p = null;
	int a[10] = { 0 };
	p = a;
	for (int i = 0; i < 10; i++)
	{
		*(p++) = i;
		/*等同于
		*p = i;
		p++;*/

	}
	//循环结束时p指针已经越界
	p = null;

	if (p)
	{
		printf("指针可用");
	}
	else
	{
		printf("指针不可用");
	}


	return 0;
}


//指针的使用规范：


//#define ndebug

#include<assert.h>


int main()
{
	int* p = null;
	int a[10] = { 0 };
	p = a;
	for (int i = 0; i < 10; i++)
	{
		*(p++) = i;
		/*等同于
		*p = i;
		p++;*/

	}
	//循环结束时p指针已经越界
	p = null;

	assert(p);
	
	printf("指针可用");
	

	return 0;
}


int main()
{
	int a[10] = { 2,3,4,5,6,7,8,9,10,11 };
	printf("&a[0] = %p\n", &a[0]);
	printf("&a[0] = %p\n", &a[0] +1);
	printf("a = %p\n", a);
	printf("a+1 = %p\n", a+1);
	printf("&a = %p \n", &a);
	printf("&a = %p \n", &a + 1);

	return 0;

 
 }

void re(int* a)
{
	size_t n = sizeof(a) / sizeof(a[0]);
	printf("%zd\n", n);
}

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = a;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
		printf("%d ", p[i]);
		printf("%d ", i[p]);

	}
	printf("\n");
	size_t b = sizeof(a) / sizeof(a[0]);
	printf("%zd\n", b);

	re(a);




	return 0;
}

//冒泡排序：

void bubble(int a[], int sz)
{
	for (int i = 0; i < sz-1; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz-1-i; j++)//注意此处如果不减1就会形成越界访问，导致程序崩溃；
		{
			if (a[j] > a[j + 1])
			{
				int tem = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tem;
				flag = 0;
			}
		}
		if (flag)
		{
			break;
		}

	}

}

int main()
{
	int arr[10] = { 21,9,5,71,3,8,33,52,7,2};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
	return 0;
}