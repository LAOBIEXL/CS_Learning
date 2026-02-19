//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
using namespace std;

double cal(double x)
{
	double e = 0.000001;
	double ret = 1;
	double tmp = 1;
	int flag = -1;
	double z = x * x;
	int i = 2;
	long long z2 = i;
	while ((tmp = (z / z2)) > e)
	{
		z2 = z2 * (i + 1) * (i + 2);
		i = i + 2;
		ret += flag * tmp;
		flag *= -1;
		
		z *= x * x;
	}
	return ret;
}

int main()
{
	double x = 0;
	cin >> x;
	cout << cal(x) << endl;



}

//#include<iostream>
//#include<cmath>
//using namespace std;
//
//double cal(double x) {
//    const double e = 1e-6; // 精度阈值
//    double ret = 1.0;       // cos(x)的第一项：1
//    double z = x * x;       // 分子：x?（对应第二项的分子）
//    int i = 2;              // 初始分母：2!（对应第二项的分母）
//    long long z2 = i;       // 分母：2!（用long long避免溢出）
//    int flag = -1;          // 符号：第二项为负
//
//    while (true) {
//        double tmp = z / z2; // 当前项的值：x^(2n)/(2n)!
//        if (tmp < e) break;  // 当项值小于精度阈值时停止
//        ret += flag * tmp;   // 累加当前项（带符号）
//        flag *= -1;          // 符号翻转（下一项符号相反）
//        cout << ret << " ";  // 输出中间结果（可选）
//
//        // 更新分子、分母、项数
//        z *= x * x;          // 分子：x^(2n) → x^(2n+2)
//        z2 *= (i + 1) * (i + 2); // 分母：(2n)! → (2n+2)!（关键修正：i递增）
//        i += 2;              // 项数递增（2n → 2n+2）
//    }
//    return ret;
//}
//
//int main() {
//    double x;
//    cout << "请输入x的值：";
//    cin >> x;
//    cout << "\ncos(" << x << ")的计算结果：" << cal(x) << endl;
//    return 0;
//}
