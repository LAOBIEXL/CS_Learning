#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>


using namespace std;

//打印vector :
void print(vector<int> &a)//这里如果是传值调用，需要将顺序表中的内容全部拷贝一份，所以这里使用引用的方式效率最高
{
	for (int i = 0; i < a.size(); i++)//注意和数组一样，下标从零开始；
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void Print(vector<int>& a)//使用迭代器来遍历
{
	for ( /*vector<int> :: iterator */ auto it = a.begin(); it != a.end();it ++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//使用迭代器进行迭代；

	for (int t : a)
	{
		cout << t << " ";
	}
	cout << endl;

}





int main()
{
	//创建vector
	vector<int> a1;
	//创建一个名字为a1的可变长数组，里面存储的数据是整型，空的

	vector<int> a2(10);
	//创建时，初始的空间设置为100;
	//没有给出初始化数据时，默认数据是零


	vector<int> a3(100, 2);
	//创建时，将所有的数据都初始化为2；

	vector<int> a4 = { 1,2,3,4,5,6,7 };
	//初始化列表的创建方式

	//<>在尖括号内部可以存放任意数据类型，体现了模版的强大之处
	//vector可以存放所以的数据类型，甚至是STL本身

	vector<string> a5;
	vector<vector<int>> a7;
	//创建了一个二维的可变长数据



	vector<int> a8[100];
	//圆括号是为了初始化大小，而方括号则是创建了一个大小为N的vector数组，类似数组指针和指针数组的关系


	//size and empty
	
	//size 返回实际元素的个数 : return n；返回标记元素个数的变量，时间复杂度是O(1);
	//empty 返回是否为空，返回类型是bool类型；如果为零返回true,如果不为零就会返回false,时间复杂度是O(1);


	
	print(a1);
	print(a2);
	print(a3);
	print(a4);
	

	if (a1.empty()) cout << "none" << endl;
	else cout << "yes";

	

	//迭代器 begin and end;
	//begin 返回起点位置的迭代器，可以利用迭代器访问整个容器
	//一个容器存在迭代器就可以使用范围for

	//begin 和 end 配套使用，从begin一直迭代到end

	Print(a4);


	//push_back pop_back 时间复杂度O(1);

	a4.push_back(996);
	Print(a4);

	a4.pop_back();
	Print(a4);
	
	for (int i = 0; i < 10; i++)
	{
		a4.push_back(i);
		print(a4);
	}

	//front and back

	cout << a4[0] << " ";
	cout << a4.front() << endl;

	cout << a4[a4.size() - 1] << " ";
	cout << a4.back() << endl;

	//resize 修改vector的大小
	//如果调节后的大小大于原来的大小，多出来的值会补上默认值,对于int 默认是零
	//如果调节后的大小小于原来的大小，会将超出的元素全部删除；
	//时间复杂度O(n);

	vector<int> a(5, 1);
	print(a);
	a.resize(10);
	print(a);
	a.resize(3);
	print(a);

	//clear清空 时间复杂度O(n)

	cout << a.size() << endl;
	a.clear();
	cout << a.size() << endl;




}

