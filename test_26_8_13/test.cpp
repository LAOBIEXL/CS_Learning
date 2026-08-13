// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// ll exgcd(ll a, ll b, ll& x, ll& y)
// {
//     if(b == 0)
//     {
//         x = 1;
//         y = 0;
//         return a;
//     }
//     ll x1, y1;
//     ll d = exgcd(b, a % b , x1, y1);
//     x = y1;
//     y = x1 - a / b * y1;
//     return d;
// }

// void solve()
// {
//     ll a, b, c;
//     cin >> a >> b >> c;
//     ll x0 = 0;
//     ll y0 = 0;
//     ll d = exgcd(a, b, x0, y0);
//     if(c % d != 0)
//     {
//         cout << -1 << endl;
//         return;
//     }
//     ll n = c / d;
//     ll x = x0 * n;
//     ll y = y0 * n;
//     ll k1 = b / d;
//     ll k2 = a / d;
//     ll x_min_pos = ((x % k1) + k1) % k1;
//     if(x_min_pos == 0) x_min_pos = k1;
//     ll y_max_pos = (c - (x_min_pos * a)) / b;
 
//     ll y_min_pos = ((y % k2) + k2) % k2;
//     if(y_min_pos == 0) y_min_pos = k2;
//     ll x_max_pos = (c - (y_min_pos * b)) / a;

//     if(y_max_pos <= 0)
//     {
//         cout << x_min_pos << " " << y_min_pos << endl;
//         //printf("%lld %lld\n", x_min_pos, y_min_pos);
//     }
//     else
//     {
//         ll num = (x_max_pos - x_min_pos) / k1 + 1; 
//         cout << num <<" " << x_min_pos << " " << y_min_pos << " ";
//         cout << x_max_pos << " " << y_max_pos << endl;
//     }
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while(T--) solve();


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// ll exgcd(ll a, ll b, ll&x , ll&y)
// {
//     if(b == 0)
//     {
//         x = 1;
//         y = 0;
//         return a;
//     }
//     ll y1, x1;
//     ll d = exgcd(b, a % b, x1, y1);
//     x = y1;
//     y = x1 - (a / b) * y1;
//     return d;
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while(T--)
//     {
//         ll a, b;
//         cin >> a >> b;
//         ll x, y;
//         ll d = exgcd(a, b, x, y);
//         if(d != 1)
//         {
//             cout << -1 << endl;
//             continue;
//         }
//         else
//         {
//             cout <<( x % (b) + b) % b<< endl;
//             continue;
//         }
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll exgcd(ll a, ll b, ll&x ,ll& y)
{
    if(b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1 , d;
    d = exgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}

int main()
{
    ll x, y, m, n, L;
    cin >> x >> y >> m >> n >> L;
    ll k, t;
    ll d= exgcd( abs(m - n) , L, k, t);
    if(m - n < 0)
    {
       k = -k; //只有求gcd解特解，为了方便可以使用正数，但是输出一定要判断a，b的正负调整特解，后续不用管任何符号的问题了；
    }

    if((y - x) % d != 0)
    {
        cout << "Impossible" << endl;
    }
    else
    {
        ll x_real = k * ((y - x) / d);
    
        ll k1 = (L / d);
        ll ans = (x_real % k1 + k1) % k1;
       
        cout << ans << endl;
    }


    return 0;
}