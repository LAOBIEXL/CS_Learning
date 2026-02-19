#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a[10] = { 2,3,4,5,6,4,2,3,4,3 };
	printf("%zd\n", sizeof(((&a)[0])[1]));
	printf("%zd\n", sizeof(&a[0]));
	int b[2][3] = { {1,2,3},{2,3,4}};
	int* b2 = b[0];
	int (*p)[10] = &a;
	int* w = a;
	printf("%zd\n", sizeof(&a));
	printf("%zd\n", sizeof(p));
	printf("%zd\n", sizeof(*p));
	printf("%zd\n", sizeof(w));
	printf("%zd\n", sizeof(b2));
	printf("%zd\n", sizeof(b[0]));


	char* c[] = { "hello","world","name" };
	char** cp[] = { c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%p\n", cp[1]);
	cpp++;
	++*cpp;
	printf("%p\n", cp[1]);


	return 0;
}