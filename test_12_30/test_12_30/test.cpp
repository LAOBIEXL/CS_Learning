//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//using namespace std;
//
//int fun(int x, int* p)
//{
//	int n = 0;
//	for (int i = 1; i <= x; i++)
//	{
//		if (i % 2 != 0 && x % i == 0)
//		{
//			p[n++] = i;
//		}
//	}
//	return n;
//}
//
//
//int main()
//{
//	int a[100], x, n;
//	cin >> x;
//	n = fun(x, a);
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << ' ';
//	}
//	cout << endl;
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//void move(int (*a)[4], int (*b)[3])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			*(*(b + j) + i) = *(*(a + i) + j);
//		}
//	}
//}
//
//int main()
//{
//	int b[4][3] = {};
//	int a[3][4] = {};
//	cout << "input matrix: " << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	cout << "the origin matrix : " << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "the transport matrix is : " << endl;
//	move(a, b);
//	for (int j = 0; j < 4; j++)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			cout << b[j][i] << " ";
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	bool st[100] = {};
//	int test = n;
//	int cnt = 1;
//	while (test > 1)
//	{
//		int tmp = 0;
//		while (tmp <= 2)
//		{
//			if (cnt > n)
//			{
//				cnt = cnt - n;
//			}
//			if (st[cnt])
//			{
//				cnt++;
//				continue;
//			}
//			tmp++;
//			cnt++;
//		}
//		st[cnt-1] = true;
//		test--;
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (st[i] != true)  cout << i << endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void mySort(const char name[], int n)
//{
//    const char* temp;
//    int i, j, k;
//    for (i = 0; i < n - 1; ++i)
//    {
//        k = i;
//        for (j = i + 1; j < n; ++j)
//            if (strcmp(name[k], name[j]) > 0)
//                k = j;
//        if (k != i)
//        {
//            temp = name[i];
//            name[i] = name[k];
//            name[k] = temp;
//        }
//    }
//}
//
//int main()
//{
//	char a[10][100] = {};
//	cout << "input 5 strings :" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> a[i];
//	}
//    cout << "the result : " << endl;
//
//    mySort(a, 5);
//
//
//
//
//	return 0;
//
// }

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//// 查找子串在字符串中首次出现的位置
//int* myStrFind(char mainStr[], char subStr[]) {
//    int mainLen = strlen(mainStr);
//    int subLen = strlen(subStr);
//    
//    // 如果子串长度大于主串长度，不可能找到
//    if (subLen > mainLen) {
//        return NULL;
//    }
//    
//    // 遍历主串中所有可能的子串起始位置
//    for (int i = 0; i <= mainLen - subLen; i++) {
//        bool found = true;
//        
//        // 检查当前位置开始的子串是否匹配
//        for (int j = 0; j < subLen; j++) {
//            if (mainStr[i + j] != subStr[j]) {
//                found = false;
//                break;
//            }
//        }
//        
//        // 如果找到匹配的子串，返回该位置的指针
//        if (found) {
//            // 使用动态分配，防止返回局部变量的地址
//            int* position = new int;
//            *position = i;  // 返回索引位置
//            return position;
//        }
//    }
//    
//    // 未找到子串
//    return NULL;
//}
//
//int main() {
//    char mainStr[80] = {0}, subStr[80] = {0};
//    cout << "input 2 string : " << endl;
//    cin.getline(mainStr, 80);
//    cin.getline(subStr, 80);
//    
//    int* res = myStrFind(mainStr, subStr);
//    if (res != NULL) {
//        cout << "首次出现位置为：" << *res << endl;
//        // 释放动态分配的内存
//        delete res;
//    } else {
//        cout << "未找到" << endl;
//    }
//    
//    return 0;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//
//int* myStrFind(char mainStr[], char subStr[]) {
//    int lenm = strlen(mainStr);
//    int sulen = strlen(subStr);
//
//    if (sulen > lenm) {
//        return NULL;
//    }
//    for (int i = 0; i <= lenm - sulen; i++) {
//        bool found = true;
//
//
//        for (int j = 0; j < sulen; j++) {
//            if (mainStr[i + j] != subStr[j]) {
//                found = false;
//                break;
//            }
//        }
//
//        if (found) {
//            int* pos = new int;
//            *pos = i;  
//            return pos;
//        }
//    }
//
//    return NULL;
//}
//
//int main() {
//    char mainStr[80] = { 0 }, subStr[80] = { 0 };
//    cout << "input 2 string : " << endl;
//    cin.getline(mainStr, 80);
//    cin.getline(subStr, 80);
//
//    int* res = myStrFind(mainStr, subStr);
//    if (res != NULL) {
//        cout << "首次出现位置为：" << *res << endl;
//        delete res;
//    }
//    else {
//        cout << "未找到" << endl;
//    }
//
//    return 0;
//}


#include <iostream>
using namespace std;

void intop(int n) {
    int* arr = new int[n];
    int* p = arr;

    for (int i = 0; i < n; i++) {
        cin >> *p;
        p++;
    }
    p = arr;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *p;
        p++;
    }
    int ret = sum / n;
    cout << ret << endl;

    delete[] arr;
}
void charop(int n) {
    char* arr = new char[n];
    char* p = arr;

    for (int i = 0; i < n; i++) {
        cin >> *p;
        p++;
    }

    p = arr;
    char mc = *p;
    for (int i = 1; i < n; i++) {
        p++;
        if (*p > mc) {
            mc = *p;
        }
    }

    cout << mc << endl;
    delete[] arr;
}

void floatop(int n) {
    float* arr = new float[n];
    float* p = arr;

    for (int i = 0; i < n; i++) {
        cin >> *p;
        p++;
    }

    p = arr;
    float minf = *p;
    for (int i = 1; i < n; i++) {
        p++;
        if (*p < minf) {
            minf = *p;
        }
    }

    cout << minf << endl;
    delete[] arr;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        char type;
        int n;
        cin >> type >> n;

        if (type == 'I') {
            intop(n);
        }
        else if (type == 'C') {
            charop(n);
        }
        else if (type == 'F') {
            floatop(n);
        }
    }

    return 0;
}