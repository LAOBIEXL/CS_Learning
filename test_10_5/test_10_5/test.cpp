#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    int sum = 0;
//    while (n)
//    {
//        sum += n % 10;
//        n /= 10;
//    }
//    cout << sum << endl;
//
//
//
//
//    return 0;
//}

#include<iostream>
using namespace std;

//int main()
//{
//    int N;
//    cin >> N;
//    while (N != 1)
//    {
//        if (N % 2 == 0)
//            cout << N << "/2" << "=" << (N /= 2) << endl;
//        else
//            cout << "5*" << N << "+1=" << (N = N * 3 + 1) << endl;
//    }
//    cout << "End" << endl;
//
//
//
//    return 0;
//}
//
//int main()
//{
//	int n = 10;
//	while (n--)
//		cout << n;
//
//	cout << n;
//
//
//
//
//	return 0;
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    cin >> n;
//    double counter = 0;
//    for (int i = 0; i < n; i++)
//    {
//        double a, b;
//        int p;
//        cin >> a >> b >> p;
//        double d = sqrt(a * a + b * b);
//        counter = 2 * (d / 50) + p;
//    }
//    if (counter - (int)counter > 1e-5)
//        cout << int(counter) + 1 << endl;
//    else
//        cout << int(counter << endl;
//    return 0;
//}

//
//#include<cmath>
//
//int main()
//{
//	cout << ceil(4.3) << endl;
//	cout << ceil(5.3) << endl;
//	cout << ceil(3.00001) << endl;
//	cout << ceil(3.0) << endl;
//	cout << ceil(-3.1) << endl;
//	cout << floor(-3.1) << endl;
//	cout << floor(4.2) << endl;
//
//}


int main()
{
	int n = 124120;
	int counter = 0;
	do
	{
		counter++;
		n /= 10;
	} while (n);
	cout << counter << endl;



}