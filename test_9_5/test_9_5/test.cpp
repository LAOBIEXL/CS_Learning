#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//using namespace std;


//
////找到润年函数
//

//
//const int N = 2e3 + 10;
//
//bool check(int i)
//{
//	if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int x = 0, y = 0;
//	int num = 0;
//	int leapYear[N] = { 0 };
//	cin >> x >> y;
//	for (int i = x; i <= y; i++)
//	{
//		if (check(i))
//		{
//			leapYear[num++] = i;  //将＋+和数组调用合并
//		}
//	}
//
//	cout << num << endl;
//	for (int j = 0; j < num; j++)
//	{
//		cout << leapYear[j]<<" ";
//	}
//
//
//
//	return 0;
//}

////结构体 P5740
//
//const int N = 1100;
//
//
//struct student {
//	string name;
//	int a, b, c;
//}stu[N];
//
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> stu[i].name >> stu[i].a >> stu[i].b >> stu[i].c;
//	}
//	int	sum = 0;
//	int sum_max = -200;//注意，比较时初始最大值设置成负数很重要
//	int num = 0;
//	for (int j = 1; j <= n; j++)
//	{
//		sum = stu[j].a + stu[j].b + stu[j].c;
//		if (sum > sum_max)
//		{
//			sum_max = sum;
//			num = j;
//		}
//
//	}
//	
//
//	cout << stu[num].name << " " << stu[num].a << " " << stu[num].b << " " << stu[num].c << endl;
//
//
//
//	return 0;
//}

