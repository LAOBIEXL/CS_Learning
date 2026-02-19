//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//typedef long long ll;
//
//ll a;//人要给富人的钱；
//
//double b;//富人要给人的钱；
//
//int main()
//{
//	double t = 0.01;
//	cout << fixed << setprecision(2);
//	for (int i = 1; i <= 30; i++)
//	{
//		a += 100000;
//		cout << "第"<< i <<"天，富人会得到的钱是： " << setw(12) << a << "  ";
//		b = t;
//		t *= 2;
//		cout << "陌生人会得到的钱是： " << setw(12) << b << endl;
//	}
//
//
//	return 0;
//}

#include<cmath>
#include<iostream>
using namespace std;

int main()
{
	int i = 0;
	cout << "请输入当月利润： ";
	cin >> i;
	int tem = i / 100000;
	cout << "应发奖金总数为： ";

	switch (tem)
	{
	case 0 :
		cout << int(i * 0.1) << endl;
		break;
	case  1:
		cout << int(0.075 *(i - 100000)) + 10000 << endl;
		break;
	case 2:
		cout << int(0.05 * (i - 200000)) + 10000 + 7500 << endl;
		break;
	case 4:
		cout << int(0.03 * (i - 400000)) + 10000 + 7500 + 10000 << endl;
		break;
	case 6:
		cout << int(0.015 * (i - 600000)) + 10000 + 7500 + 10000 + 6000 << endl;
		break;
	case 10:
		cout << int(0.01 * (i - 1000000)) + 10000 + 7500 + 10000 + 6000 + 6000 << endl;
		break;
	}
}