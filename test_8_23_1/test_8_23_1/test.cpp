#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int M = 0;
//	int N = 0;
//	scanf("%d %d", &M, &N);
//	switch (M + N)
//	{
//	case 1:
//		if (N - M == -1 || N - M == 1)
//			printf("Yes");
//		else
//			printf("No");
//		break;
//	case 2:
//		if (M == N)
//			printf("Yes");
//		else if (N - M == -2)
//			printf("Yes");
//		else
//			printf("No");
//		break;
//	case 3:
//		if (N - M == -1 || N - M == 1)
//			printf("Yes");
//		else
//			printf("No");
//		break;
//	case 4:
//		if (M == N)
//			printf("Yes");
//		else if (N - M == -2)
//			printf("Yes");
//		else
//			printf("No");
//		break;
//	case 5:
//		if (N - M == -1 || N - M == 1)
//			printf("Yes");
//		else
//			printf("No");
//		break;
//	case 6:
//		if (M == N)
//			printf("Yes");
//		else if (N - M == -2)
//			printf("Yes");
//		else
//			printf("No");
//		break;
//	default:
//			if ((M + N) % 2 == 0)
//			{
//				if (M == N)
//					printf("No");
//			}
//			else if(N - M == -2)
//
//				
//
//
//
//
//
//	}
//
//
//	return 0;
//}
//

//10
//
//#include<stdio.h>
// 
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int N = 0;
//	scanf("%d", &N);
//	for (i = 0; i < N-1; i++)
//	{
//		int t = 0;
//		scanf("%d", &t);
//		sum += t;
//	}
//	printf("%d", -sum);
//
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int N = 0;
//	int S = 0;
//	int K = 0;
//	int sum = 0;
//	scanf("%d%d%d", &N, &S, &K);
//	for (int i = 0; i < N; i++)
//	{
//		int a = 0;
//		int b = 0;
//		scanf("%d%d", &a, &b);
//		sum += a * b;
//	}
//	if (sum >= S)
//	{
//		printf("%d", sum);
//	}
//	else
//	{
//		printf("%d", sum + K);
//	}
//	
//	return 0;
//}


//计算路径
#include<stdio.h>

int main()
{
	int H = 0, W = 0, N = 0;
	scanf("%d%d%d", &H, &W, &N);
	char op1[1000] = { 0 };
	char table[100][100] = { 0 };
	char a = 0;
	int c1 = 0;
	int c2 = 0;
	int ck[2] = { 0 };
	int count = 0;
	for(int i = 0;i < N;i ++)
	{
		char op = 0;
		scanf(" %c", &op);
		op1[i] = op;
	}
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			scanf(" %c", &a);
			table[i][j] = a;
		}
		printf("\n");
	}
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			printf("%c ", table[i][j]);
		}
		printf("\n");
	}
	int po = 0;
	for (int i = 1; i < H - 1; i++)
	{
		for (int j = 1; j < W - 1; j++)
		{
			if (table[i][j] == '.')
			{
				c1 = i;
				c2 = j;
				int flag = 1;
				for (int n = 0; n < N; n++)
				{
					
					if (op1[n] == 'U')
					{
						if (table[c1 - 1][c2] == '#')
						{
							flag = 0;
							break;
						}
						else
						{
							c1 -= 1;
						}
					}
					else if (op1[n] == 'D')
					{

						if (table[c1 + 1][c2] == '#')
						{
							flag = 0;
							break;
						}
						else
						{
							c1 += 1;
						}
					}
					else if (op1[n] == 'R')
					{

						if (table[c1][c2+1] == '#')
						{
							flag = 0;
							break;
						}
						else
						{
							c2 += 1;
						}
					}
					else if (op1[n] == 'L')
					{

						if (table[c1][c2-1] == '#')
						{
							flag = 0;
							break;
						}
						else
						{
							c2 -= 1;
						}
					}
				}
				if (flag)
				{
					printf("%d %d\n", c1, c2);
					count++;
 				}
			}
		}
	}

	printf("%d", count);
	return 0;
}

/*
6 7 5
LULDR
#######
#...#.#
##...##
#.#...#
#...#.#
#######
*/

//可变数组的使用：
