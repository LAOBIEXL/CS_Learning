//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//
//using namespace std;
//
//class Time
//{
//private: //添加
//	int hour;
//	int minute;
//	int sec;
//
//	/*void set_time(void);
//	void show_time(void);*/
//
//public:
//	void set_time(void);
//	void show_time(void);
//	// 错误 ： 默认private；
//};
//Time t;
//int main()
//{
//	/*set_time();
//
//	show_time();*/
//
//	t.set_time();
//	t.show_time();
//	//错误：类的函数调用方法错误；
//
//
//	return 0;
//}
//
////int set_time(void)
//
//void Time::set_time(void)  //表明是类域内的定义
//{
//	/*cin >> t.hour;
//	cin >> t.minute;
//	cin >> t.sec;*/
//
//	cin >> hour;
//	cin >> minute;
//	cin >> sec;
//	//t是具体的对象，应当使用this指针；
//}
////int show_time(void)
//void Time::show_time(void)
//{
//	/*cout << t.hour << ": " << t.minute << " " << t.sec << endl;*/
//	cout << hour << ": " << minute << ": " << sec << endl;
//}

//#include<iostream>
//using namespace std;
//class Test
//{
//	int x, y;
//public:
//	/*fun(int i, int j)
//	{
//		x = i;
//		y = j;
//	}*/
//
//	void fun(int i, int j = 0) { x = i; y = j; }
//	//没有函数类型， 并且参数没有默认值；
//
//	/*show()*/
//
//	void show()
//	{
//		cout << "x =" << x;
//		if (y)
//		{
//			cout << ",y =" << y << endl;
//		}
//		cout << endl;
//	}
//};
//int main()
//{
//	Test a;
//	a.fun(1);
//	a.show();
//	a.fun(2, 4);
//	a.show();
//	return 0;
//}


//
//#include<iostream>
//using namespace std;
//
//class changfang {
//private:
//	int length;
//	int width;
//	int height;
//	int volumn;
//
//public:
//	void init_v();
//	void calc();
//	void print();
//
//};
//
//int main()
//{
//	changfang s[3];
//	int n = 3;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "对于长方体" << i + 1 << ": ";
//		s[i].init_v();
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << "对于长方体" << i + 1 << ": ";
//		s[i].print();
//	}
//
//	return 0;
//}
//
//
//
//void changfang::calc()
//{
//	volumn = length * width * height;
//}
//
//
//void changfang::init_v()
//{
//	int a, b, c;
//	cout << "请依次输入长方体的长，宽，高： " << endl;
//	cin >> a >> b >> c;
//	length = a;
//	width = b;
//	height = c;
//	calc();
//}
//
//void changfang::print()
//{
//	cout << "体积是：" <<  volumn << endl;
//}

    
#include<iostream>
#include<iomanip>
using namespace std;

//时钟类：

class MyClock {
public :
    void show_time();
    void set_time();
    long long diff(const MyClock& T);
    long long normalize() const;
private:
    int hour;
    int minute;
    int second;
};

long long calcfee(long long time);

int main()
{
    while (true)
    {
        cout << "                  p 收费标准" << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "一小时内                                          免费 " << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "每满一小时                                         4元 " << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "                少于15分钟                       不收费 " << endl;
        cout << "超过一小时的部分  超过15分钟（含）但少于30分钟     2元  " << endl;
        cout << "                多余半小时（含）                   4元 " << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "超过12小时                                        60元 " << endl;
        cout << "-----------------------------------------------------" << endl;

        MyClock arriveTime, leaveTime;
        cout << "请输入到达时间(24小时制)";
        arriveTime.set_time();
        arriveTime.show_time();
        cout << "请输入离开时间(24小时制)";
        leaveTime.set_time();
        leaveTime.show_time();

        long long  time_tot = leaveTime.diff(arriveTime);
        long long  fee = calcfee(time_tot);
        cout << "本次停车收费: " << fee << "(元)" << endl;
    }

    return 0;
}

void MyClock::show_time()
{
    cout <<setw(2) << setfill('0') <<  hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second << endl;
}

void MyClock::set_time()
{
    cout << ":( H / M / S )";
    while (true)
    {
         cin >> hour >> minute >> second;
         if (hour < 0 || hour >= 24 || minute < 0 || minute > 59 || second < 0 || second > 59)
         {
             cout << "输入的时间范围不合法，请重新输入：" << endl;
         }
         else
         {
             break;
         }
    }

}

long long  MyClock::diff(const MyClock& T)
{
    long long d = normalize() - T.normalize();
    if (d < 0)
    {
        d += 1440;
    }
    return d;
}

long long MyClock::normalize() const
{
    return hour * 60 + minute;
}

long long  calcfee(long long time)
{
    if (time < 60)
    {
        return 0;
    }
    else
    {
        int cnt = int(time / 60);
        int m = time % 60;
        if (cnt >= 12)
        {
            return 60;
        }
        else
        {
            int ret = 4 * cnt;
            if (m < 15)
            {
                return ret;
            }
            else if (m >= 15 && m < 30)
            {
                return ret + 2;
            }
            else
            {
                return ret + 4;
            }
        }
    }
}

