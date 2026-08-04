// #include<bits/stdc++.h>
// using namespace std;
// const double eps = 0.000001;

// int main()
// {
//     double H, W;
//     cin >> H >> W;
//     H = H / 100;
//     double ret = W / H / H;
//     //cout << ret << endl;
//     if(ret > 25.0 || abs(ret - 25.0 ) < eps) cout << "Yes" << endl;
//     else cout << "No" << endl;


//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// const double eps = 0.000001;

// int main()
// {
//    int n, m;
//    cin >> n >> m;
//    int cnt1 = 0;
//    int cnt2 = 0;
//    vector<int> a(n + 1);
//    vector<int> b(n + 1);
//    for(int i = 1; i <= n; i++)
//    {
//         cin >> a[i];
//    }
//    for(int i = 1; i <= n - 1; i++)
//    {
//     cin >> b[i];
//    }
//    vector<int> a1(a);
//    for(int i = 2; i <= n; i++)
//    {
//      int tmp = b[i - 1] ^ a1[i - 1];
//      cnt1 += abs(tmp - a1[i]);
//      a1[i] = tmp;
//    }
//    a[1] = (a[1] + 1) % 2;
//    cnt2 += 1;
//    for(int i = 2; i <= n; i++)
//    {
//     int tmp = b[i - 1] ^ a[i - 1];
//     cnt2 += abs(tmp - a[i]);
//     a[i] = tmp;
//    }
//    cout << min(cnt1, cnt2) << endl;




//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// const long double eps = 0.00000001;
// using ld = long double;
// int main()
// {
//     int T;
//     cin >> T;
//     while(T--)
//     {
//         ld px, py, qx, qy, rx, ry, sx, sy;
//         cin >> px >> py;
//         cin >> qx >> qy;
//         cin >> rx >> ry;
//         cin >> sx >> sy;
//         ld k1 = (py - qy) ;
//         ld k12 = (px - qx);
//         ld k2 = (ry - sy) ;
//         ld k22 = (rx - sx);
//         //cout << k1 * k22 - k12 * k2 << endl;
//         if(!(k1 * k22 - k12 * k2))
//         {
//             //平行
//             ld midx = (px + qx) - (rx + sx);
//             ld midy = (py + qy) - (ry + sy);
//             if(!(midx * k12  + midy * k1))
//             {
//                 cout << "Yes\n";
//             }
//             else{
//                 cout << "No\n";
//             }
//         }
//         else{
//             //cout << "eee" << endl;
//             cout << "Yes\n";
//         }

//     }


//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
const long double eps = 0.00000001;
using ld = long double;
using ll = long long;
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n + 1);
    vector<ll> b(n + 1);
    vector<ll> c(2);
    c.reserve(n + 1);
    for(int i = 1;i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n - 1; i++)
    {
        cin >> b[i];
    }
    ll sum = 0;
    c[1] = 0;
    for(int i = 2; i <= n; i++)
    {
        ll d = ((b[i - 1] - a[i - 1] - a[i])%m + m) %m;
        c.push_back(((d - c[i - 1])%m + m)%m);
        sum += c[i];
    }
    ll ret = sum;

    vector<ll> diff;
    map<ll, ll> mp;


    for(int i = 1; i <= n; i++)
    {
        if(i & 1 == 1)
        {
            //odd:
            ll t = m - c[i];
            if(t == m) continue;
            diff.push_back(t);
            mp[t] -= m;
        }
        else
        {
            ll t = c[i] + 1;
            if(t == m) continue;
            diff.push_back(t);
            mp[t] += m;
        }
    }
    diff.erase(unique(diff.begin(), diff.end()),diff.end());
    ll ret_f = ret;
    ll last = 0;
    sort(diff.begin(), diff.end());
    if(n & 1 == 1)
    {
        for(int i = 0; i < diff.size(); i++)
        {
            ret += mp[diff[i]];
            ret += diff[i] - last;
            last = diff[i];
            ret_f = min(ret_f, ret);
        }
    }
    else
    {
        for(int i = 0; i < diff.size(); i++)
        {
            ret += mp[diff[i]];
            ret_f = min(ret_f, ret);
        }
    }
    cout << ret_f << endl;





    return 0;
}
