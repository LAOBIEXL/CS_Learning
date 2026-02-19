#include<iostream>

using namespace std;

//int main()
//{
//	int a,b;
//	cin >> a >> b;
//	cout << b << endl;
//	
//	
//	
//	return 0;
//}

//int main()
//{
//	int a = 1.0e5 + 10 ;
//	float b = 1.0e5;
//	double c = 1.0e5;
//	cout << a << " " << b << " " << c << endl;	
//	//科学计数法 
//	return 0;
//}

//迅速表示最小值和最大值

//#include<climits>
//
//
//int main()
//{
//	
//	typedef unsigned long long ull;
//	ull e = 1e10;
//	cout << CHAR_MIN << endl;
//	cout << CHAR_MAX << endl; 
//	
//	
//	
//	return 0;
// } 
//int m = 100; 
//
//int main()
//{
//	int a ;
//	cin >> a;
//	cout << a;
//	int m = 1;
//	int b ;
//	cin >> b;
//	char c = b;
//	cout <<" " << c << endl;
//	
//	int e;
//	cin >> e;
//	cout << (char)e << endl;
//	
//	//注意不能用char接受码值； 
//	
//	return 0;
//}


#include<iostream>

using namespace std;

int n = 100;

int main()
{
	cout << n << endl;
	
	int n = 1;
	
	cout << n << " " << ::n << endl;//使用：：可以在局部变量的作用域输出全局变量； 
	
	return 0;
}





