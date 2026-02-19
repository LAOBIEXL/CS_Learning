#include<iostream>
using namespace std;

//int h, m ,s;
//
//int main()
//{
//	int a = 3661;
//	h = a / 3600;
//	m = a % 3600 / 60;
//	s = a % 60 ;
//	
//	cout << h << " " << m << " " << s << endl;
//	
//	
//	
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 2;
//	float c = a / b;
//	printf("%f %f",a / b , c);
//	
//}


//关于整形提升和算术转换

//int main()
//{
//	char a = 'a';
//	int b = 10;
//	
//	char c = a + b;
//	
//	cout << c << endl;  
//	
//	
//	
//	return 0;
// } 
#include<climits>

int main()
{
	short a = -1;
	cout << UINT_MAX << endl;
	unsigned short b = 1;
	if(a > sizeof(a))
	cout << (unsigned short)a; 
	cout << "uint已经是算术转换范围，所以a变成了很大的无符号整形"; 
	
	if(a > b)
	cout << "两个都整形提升为int，所以a还是-1,不会比b大";
	
	
	return 0;
}


