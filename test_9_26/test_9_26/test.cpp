#define _CRT_SECURE_NO_WARNINGS
//typedef long long ll;
//
//ll n;
//ll t;
//
//int a[300000] = { 0 };
//int b[300000] = { 0 };
//ll c[300000] = { 0 };
//
//void my_sort(ll c[], ll n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (c[j] > c[j + 1])
//            {
//                ll tem = c[j];
//                c[j] = c[j + 1];
//                c[j + 1] = tem;
//            }
//        }
//    }
//
//
//}
//
//
//int main()
//{
//    ll ret = 0;
//    ll su = 0;
//    scanf("%lld %lld", &n, &t);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//        su += a[i];
//
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cin >> b[i];
//    }
//    ll ob = t - su;
//    ll max = 0;
//    for (int i = 0; i < n; i++)
//    {
//        max += (a[i] * b[i]);
//        c[i] = a[i] * b[i];
//    }
//    if (max < ob)
//        cout << -1;
//    else
//    {
//        my_sort(c, n);
//        ll ret2 = 0;
//        ll count = 0;
//        ll y = 0;
//        while (ret2 < ob)
//        {
//            ret2 += c[y];
//            y++;
//        }
//        ll ou = 0;
//        ll pre = 0;
//        for (int i = 0; i < y - 1; i++)
//        {
//            pre += c[i];
//            ou += b[i];
//        }
//        while (pre < ob)
//        {
//            pre += b[y];
//            ou++;
//        }
//        cout << ou;
//
//
//    }
//
//
//    return 0;
//}


//
//int main()
//{
//    int a[200000] = { 0 };
//    int n = 0;
//    cin >> n;
//    char s[200000] = { 0 };
//    scanf("%s", s);
//    printf("%s", s);
//
//
//
//
//    return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int a[200000] = { 0 };
//    int b[10] = { 0 };
//    int n = 0;
//    cin >> n;
//    char s[200000] = { 0 };
//    scanf("%s", s);
//    char o[] = "Kato_Shoko";
//    for (int j = 0; j < 10; j++)
//    {
//        b[j] = (int)o[j];
//    }
//    for (int i = 0; i < n; i++)
//    {
//        a[i] = s[i];
//    }
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            int tem = a[j];
//            a[j] = a[j + 1];
//            a[j + 1] = tem;
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        int flag = 1;
//        for (int j = i; j < n; j++)
//        {
//            if (a[j] == b[i])
//        }
//    }


#include<iostream>
using namespace std;

int main()
{
    char a[11] = "Kato_Shoko";
    char b[200] = { 0 };
    int c[8] = { 0 };
    int ce[8] = { 1,1,1,1,1,1,1 ,1};
    int n = 0;
    cin >> n >> b;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 'K')
            c[0] = 1;
        break;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 'a')
            c[1] = 1;
        break;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == '_')
            c[2] = 1;
        break;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 't')
            c[3] = 1;
        break;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 'k')
            c[4] = 1;
        break;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 'S')
            c[5] = 1;
        break;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 'h')
            c[6] = 1;
        break;
    }
    int o = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 'o')
            o++;
    }
    if (o >= 3)
        c[7] = 1;

    for (int y = 0; y < 8; y++)
    {
        if (c[y] != ce[y])
        {
            flag = 0;
            break;

        }
            
   
    }
    if (flag)
        cout << "YES" << " " << n - 10 << endl;
    else
        cout << "NO" << endl;
    

    return 0;
}