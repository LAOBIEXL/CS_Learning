#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

//int main()
//{
//	char a = 0;
//	scanf(" %c", &a);
//	printf("%c#######\n",a);
//	return 0;
//
// 
//}

//#include<cstdio>
//
//int main()
//{
//	int a = 0;
//	float b = 0;
//	scanf("%d", &a);
//	printf("%d", a);
//	scanf("%f", &b);
//	printf("\n%f", b);
//
//	//现在传入 -13.45e12# 0
//
//
//	return 0;
//}

#include<cstdio>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	double c = a*1.0 / b;
//	printf("%.3lf\n", c);
//	
//	return 0;
//}


//以百分号形式输出数据；

#include<iomanip>


//int main()
//{
//	int a = 123;
//	
//	cout << a << endl;
//	cout << setw(5) << a << a << endl;
//	//效果等同于  %5d；
//
//	cout << setfill('0') << setw(6) << a << a << endl;
//	printf("%06d\n", a);
//
//	cout << setw(6) << a << " " << setfill('*') << setw(6) << a << endl;
//
//	return 0;
//}


//int main()
//{
//	float  a = 3.14159265358979;
//	cout << a << endl;
//
//	cout << fixed << setprecision(9) << a << endl;
//
//	double b = 314.159265358979;
//
//	cout << b << endl;
//	 
//	cout << fixed << setprecision(9) << b << endl;
//
//	cout << b << endl;
//
//	cout << setprecision(15) << b << endl;
//
//	cout << scientific << b << endl;
//
//	cout << setprecision(6) <<b << endl;
//
//	return 0;
//}


//int main()
//{
//	double a = 314.15926;
//	double b = 314.159265358979;
//	
//	cout << fixed << setprecision(13);
//
//	cout << a << ' ' << b << endl;
//
//	cout << setprecision(20);
//
//	cout << a << ' ' << b << endl;
//
//	cout << setprecision(1);
//
//	cout << a << ' ' << b << endl;
//
//	printf("%.1lf", a);
//
//	return 0;
//
//}


//int main()
//{
//	//设置打印进制：dec hex oct;
//
//	int a = 15;
//
//	cout << a << ' ' << hex << a << ' ' << oct << a << " " << dec << a << endl;
//
//
//
//	return 0;
//
// }



int main()
{
	//控制对齐方式 ：left 左对齐  right 右对齐；

	int n = 123;

	cout << "右对齐" << setw(10) << n << "###" << endl;

	cout << "左对齐" << left <<setw(10) << n << "###" << endl;

	cout << "右对齐" << right <<setw(10) << n << "###" << endl;


	return 0;
}

