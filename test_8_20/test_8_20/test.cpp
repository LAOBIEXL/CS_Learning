#include<stdio.h>

int main()
{
	char arr1[] = { 'a','b','c' };
	char arr2[] = "abc";
	printf("%s \n", arr1);
	printf("%s \n", arr2);
	return 0;
}
//没有输入\0 printf的输出就不会终止，直到下一个\0出现


#include<stdio.h>

int main(void)
{
	char arr1[] = "abcde";
	char arr2[] = { 'a','b','c','d','e' };
	printf("%s \n", arr1);
	printf("%s \n", arr2);


	int i = 0;
	for (i = 0; i < 5 i++)
	{
		printf("%c ", arr1[i]);
		printf("%c ", arr2[i]);
	}
	return 0;
}

#include<stdio.h>

int main(void)
{
	char big = 'b' - 32;
	char small = 'b';
	printf("%c \n", small);
	printf("%c \n", big);
	printf("%c \n", small - 32);
	char a = 'A';
	char b = '\n';
	char c = ' ';
	char d = '\x23';//16进制对应编号的字符输出
	printf("%c \n", d);
	printf("%d\n", a);
	//字符型本质上就是整数型 而且默认是signed int
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	
	return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
	printf("%c",'\'');
	size_t a = strlen("c:test\\code\\test");
	size_t b = strlen("c:test\test_\132mine)");
	printf("c:test\\code\\test\n");
	printf("c:test\test_\129\ain\vdffe\e)\n");
	printf("c:test\test_\129\mine)");
	printf("%zd %zd", a, b);
	return 0;
}


/*
printf("a ");
printf("b ");
printf("c "); /* 注释⼆ */
printf("d ");
*/
1

//这种注释方式不宜进行嵌套操作

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main()
{
	short a = 0;
	int b = 0;
	char arr1[] = "hello\tworld!";
	char arr[30];
	int arr3[30];
	long long arr4[30];


	//接下来将计算各个数据类型的大小
	printf("%zd \n", sizeof(char));
	printf("%zd \n", sizeof(unsigned char));
	printf("%zd \n", sizeof(bool));
	printf("%zd \n", sizeof(short));
	printf("%zd \n", sizeof(int));
	printf("%zd \n", sizeof(long));
	printf("%zd \n", sizeof(long long));
	printf("%zd \n", sizeof(float));
	printf("%zd \n", sizeof(double));
	printf("%zd \n", sizeof(long double));
	printf("%zd \n", sizeof(float));
	printf("%zd \n", sizeof(3.23f));
	printf("%zd \n", sizeof a);
	printf("%zd \n", sizeof b);
	printf("%zd \n", sizeof (a*a));
	//printf("%zd \n", sizeof char [30]);
	printf("%zd \n", sizeof (char [30]));
	printf("%zd \n", sizeof arr);
	printf("%zd \n", sizeof arr1);
	printf("%zd \n", sizeof arr3);
	printf("%zd \n", sizeof arr4);
	printf("%zd \n", strlen(arr1));
	printf("%zd \n", sizeof(a + (short)1));
	printf("%d", a);
	b = a + 1;
	printf("%d", b);
	return 0;
}