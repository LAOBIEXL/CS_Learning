#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>

int main()
{
	char a[] = "abcde";
	char b[5] = "abcd";

	return 0;
}

//打印X形状
#include<stdio.h>

int main()
{
    int n = 0;
    while(scanf("%d", &n) != EOF)
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j || i == (n - 1) - j)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }


}

#include<stdio.h>

int main()
{
    int a = 0;
    while(scanf("%d", &a) != EOF)
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < a; j++)
            {
                if (i == 0 || i == a - 1 || j == 0 || j == a - 1)
                {
                    printf("* ");
                }
                else {
                    printf("  ");
                }
            }
            printf("\n");
        }


    }

    return 0;
}

//
//
////对两个有序数组进行升序合并
//
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int a[1000] = { 0 };
//    int b[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &b[i]);
//    }
//    int count = 0;
//    int tem = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (int j = 0 + count; j < m; j++)
//        {
//            if (a[i] > b[j])
//            {
//                printf("%d ", b[j]);
//                tem++;
//            }
//            else {
//                count = j;
//                break;
//            }
//            count = tem;
//        }
//        printf("%d ", a[i]);
//    }
//    for (int t = count; t < m; t++)
//    {
//        printf("%d ", b[t]);
//    }
//
//    return 0;
//}




//输入十个整数，并且求出平均值；

int main()
{
    int a[10] = { 0 };
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int j = 0; j < 10; j++)
    {
        sum += a[j];

    }
    double aver = sum / 10.0;
    printf("%d %lf",sum, aver);


    return 0;
}

交换数组中的内容

int main()
{
	int a[10] = { 0 };
	int b[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int  i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}
	int tem[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		tem[i] = a[i];
		a[i] = b[i];
		b[i] = tem[i];
	}


	return 0;
}



//二分法查找函数

int find_num(int,int [],int);

int main()
{
	int a[] = { 1, 4, 5,6,7,11,12,13,14,15,16,19,21,23,25 };
	int n = 0;
	scanf("%d", &n);
	int sz = sizeof(a) / sizeof(a[0]);
	int b = find_num(n,a,sz);
	printf("%d", b+1);
	return 0;
}

int find_num(int i, int a[],int sz)
{
	int t = 0;
	int c = 0;
	int e = sz-1;
	
	while(t <= e)
	{
		int aver = t + (e - t) / 2;
		if (a[aver] > i)
		{
			e = aver - 1;
		}
		else if (a[aver] < i)
		{
			t = aver + 1;
		}
		else
		{
			c = aver;
			break;
		}

	}

	return c;
}

//数组初始化函数

void init(int a[], int i)
{
	for (int t = 0; t < i; t++)
	{
		a[t] = 0;
	}

}

void reverse(int a[], int i)
{
	int tem = 0;
	int t = 0;
	int f = i - 1;
	while (t <= f)
	{
		tem = a[f];
		a[f] = a[t];
		a[t] = tem;
		f--;
		t++;
	}
}


int main()
{
	int a[10] = { 1, 2, 4, 5, 2 ,4, 65, 2, 232,2 };
	int sz = sizeof(a) / sizeof(a[0]);

	/*init(a, sz);*/

	
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	reverse(a, sz);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}



//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）

int main()
{
	int mon = 20;
	int count = 0;
	while (mon != 0)
	{
		count += mon;
		mon /= 2;
	}
	printf("%d", count);
	return 0;
}


//打印菱形图案

int main()
{
	char a[14] = "             ";
	char b[14] = "*************"; 
	char c[14] = "             ";
	int count1 = 6;
	int count2 = 6;
	for (int i = 0; i < 7; i++)
	{
		a[count1] = b[count1];
		a[count2] = b[count2];
		printf("%s\n", a);
		count1++;
		count2--;
	}
	count1 = 0;
	count2 = 12;
	for (int i = 0; i < 6; i++)
	{
		a[count1] = c[count1];
		a[count2] = c[count2];
		printf("%s\n", a);
		count1++;
		count2--;
	}


	return 0;
}


寻找1-10000的水仙花数
#include<math.h>


int main()
{

	for (int n = 1; n <= 10000; n++)
	{
		int arr1[5] = { 0 };
		//判断位数
		int c = 0;
		int a = n;
		do {
			a /= 10;
			c++;
		} while (a != 0);

		int b = n;

		for (int i = 0; i < c; i++)
		{
			arr1[i] = (b % 10);
			b /= 10;
		}
		int sum = 0;
		for (int i = 0; i < c; i++)
		{
			sum += pow(arr1[i], c);
		}
		if (n == (sum))
		{
			printf("%d ", n);
		}

	}
	return 0;
}

int main()
{
	int n = 153;
	int arr1[5] = { 0 };
	//判断位数
	int c = 0;
	int a = n;
	do {
		a /= 10;
		c++;
	} while (a != 0);

	int b = n;

	for (int i = 0; i < c; i++)
	{
		arr1[i] = (b % 10);
		b /= 10;
	}
	int sum = 0;
	for (int i = 0; i < c; i++)
	{
		sum += pow(arr1[i], c);
	}
	if (n == (sum))
	{
		printf("%d ", n);
	}


	return 0;
}