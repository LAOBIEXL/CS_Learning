#define _CRT_SECURE_NO_WARNINGS

int p = 300;

 int is_leap_year(int y)
{
	if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

 int count_day(int m, int y)
{
	int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30, 31 };
	if (is_leap_year(y) && m == 2)
	{
		return arr[m - 1] + 1;
	}
	else
	{
		return arr[m - 1];
	}
}
