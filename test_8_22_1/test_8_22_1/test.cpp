#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int i = 0, j = 0;
	float x = 0.0f, y = 0.0f;
	scanf("%d%d%f%f",&i ,&j, &x, &y);
	printf("%d %f\n",j, x);
	return 0;
}


int main()
{
	int i = 0;
	float b = 0.0f;
	int t = scanf("%d %f", &i, &b);
	printf("%d %f \n", i, b);
	printf("%d\n", t);
	return 0;
}


int main()
{
	int y = 0, m = 0, d = 0;
	scanf("%d%*c%d%*c%d", &y, &m, &d);//¸´ÖÆºöÂÔ·û
	printf("%d %d %d", y, m, d);
	return 0;
}

