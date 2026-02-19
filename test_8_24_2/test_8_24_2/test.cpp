#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	printf("i love jinghong");
	return 0;
}


#include<stdio.h>

int main()
{
	int t = 0;
	int n = 0;
	int re = 0;
	scanf("%d", &t);

	for (int a = 0; a < t; a++)
	{
		re = 0;
		scanf("%d", &n);
		for (int b = 1; b <= n; b++)
		{
			for (int c = 1; c <= n; c++)
			{
				int tem = b * c;
				re += tem;
				
			}
		}
		printf("%d\n", re);
	}
	return 0;
}


#include<stdio.h>

int main()
{
	int t = 0;
	int n = 0;
	char name[10] = { 0 };
	scanf("%d %d", &t, &n);

	for (int i = 0; i < t; i++)
	{




	}



	return 0;
}


#include<stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	int arr[200000] = { 0 };

	int t = 0;
	scanf("%d", &t);
	while (t)
	{
		int sum1 = 0;
		int sum2 = 0;
		scanf("%d %d", &n, &m);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		for (int i = 0; i < n; i++)
		{
			sum1 += arr[i];
		}
		int z = n - m;//ÒÆ¶¯´ÎÊý
		//printf("%d\n", sum);
		int q = 0;
		int v = 0;
		int flag = 0;
		int r = 1;
		int tem = 1;
		int p = m;
		while (p < n)
		{
		
			if (r)
			{
				for (int i = 0; i < p; i++)
				{
					tem = 1;
					for (int j = 0; j < p; j++)
					{
						if (arr[i] > arr[j])
						{
							tem = 0;
							break;
						}
					}
					if (tem)
					{
						q++;
						sum2 += arr[i];
						v += arr[i];
						arr[i] = 0;
						r = 0;
						p++;
					}
				}
			}
			else
			{
				flag = 0;
				for (int o = 0; o <  p-1 ; o++)
				{
					if (arr[o] > 0)
					{
						if (arr[p - 1] > (arr[o] - v))
						{
							flag++;
						}
					}
					else
					{
						flag++;
					}
				}
				if (flag == q)
				{
					q++;
					sum2 += arr[p-1] + sum2 ;
					v += arr[p-1];
					arr[p-1] = 0;
			
				}
				else
				{
					for (int i = 0; i < p; i++)
					{
						flag = 0;
						for (int j = 0; j < p; j++)
						{
							if (arr[i] - v > arr[j] - v)
							{
								flag++;
							}
						}
						if (flag == q)
						{
							if (arr[i] - v < 0)
							{
								q++;
								sum2 += sum2 + 0;
								v += 0;
								arr[i] = 0;
								p++;
								break;

							}
							else
							{
								q++;
								sum2 += sum2 + (arr[i] - v);
								v += (arr[i] - v);
								arr[i] = 0;
								p++;
								break;
								
							}
							
						}
					}
				}
			}


		}
		printf("%d", sum1 + sum2 );
		t--;
	}
	




	return 0;
}

/*
// 


3
5 3
10 20 30 40 
30  30   0 10   20

0  10 10 10  90+
7 4
50 15 30 20 15 90 25
10 2
50 40 60 80(_1 2)      15  7 5(1,2,3,4) 30 65(1,2,3,4,5,6) 95 15

50 10  20 30 170
40 20 30 
20 30       140
110 20 30 40      50
0 0 10 20 10 
0 10 20 20 10 

		10 2
50 40 60 80 15 75 30 65 95 15
		0 
0  80 15 75 30 65 95 15
*/

#include<stdio.h>

int main()
{
	int t = 0;
	scanf("%d", &t);
	int n = 0;
	int a[n] = { 0 };

	return 0;
}