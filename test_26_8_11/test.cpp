// #include<bits/stdc++.h>
// using namespace std;

// using ll = long long ;

// int main()
// {   
//     int n;
//     cin >> n;

//     vector<int> c(n + 1);

//     ll ret = n;

//     for(int i = 2;i <= n / i; i++)
//     {
//         if(n % i == 0)
//         {
//             int cnt = 0;
//             while(n % i == 0)
//             {
//                 cnt++;
//                 n = n / i;
//             }
//             c[i] += cnt;
//             ret = (ret / i) * (i - 1);
//         }
//     }
//     if(n > 1)
//     {
//         ret = (ret / n) * (n - 1);
//         c[n] += 1;
//     }

//     cout << ret << endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> primes;
//     vector<int> minp(n + 1);
//     vector<int> vis(n + 1);

//     for(int i = 2; i <= n;i ++)
//     {
//         if(!vis[i])
//         {
//             primes.push_back(i);
//         }
//         for(int j = 0;1LL * primes[j] * i <= n; j++)
//         {
//             vis[primes[j] * i] = true;
//             if(i % primes[j] == 0) break;
//         }
//     }

//     for(auto e : primes)
//     {
//         cout << e << " "; 
//     }
//     cout << endl;

//     // for(int i = 2; i <= n; i++)
//     // {
//     //     if(!minp[i])
//     //     {
//     //         primes.push_back(i);
//     //         minp[i] = i;
//     //     }
//     //     for(auto p : primes)
//     //     {
//     //         if(p > minp[i] || 1LL * p * i > n)
//     //         {
//     //             break;
//     //         }
//     //         minp[i * p] = p;
//     //     }
//     // }

//     // for(auto e : primes)
//     // {
//     //     cout << e << " ";
//     // }
//     // cout << endl;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long ;
// int main()
// {
//     ll n;
//     cin >> n;
//     vector<int> phi(n + 1);
//     vector<int> primes;
//     vector<int> vis(n + 1);
//     for(int i = 2; i <= n; i++)
//     {
//         if(!vis[i])
//         {
//             primes.push_back(i);
//             phi[i] = i - 1;
//         }
//         for(int j = 0; 1LL * primes[j] * i <= n; j++)
//         {
//             vis[primes[j] * i] = true;
//             if(i % primes[j] == 0)
//             {
//                 phi[primes[j] * i] = primes[j] * phi[i];
//                 break;
//             }
//             else
//             {
//                 phi[primes[j] * i] = (primes[j] - 1) * phi[i]; 
//             }
//         }
//     }
//     ll ret = 0;
//     for(int i = 2; i <= n - 1; i++)
//     {
//         ret += phi[i];
//         //cout << "i : " << i << " " << "phi" << phi[i] << endl;
//     }
//     ret = 2 * ret;
//     if(n >= 2)
//     {
//         ret += 3;
//     }
    
    
//     cout << ret << endl;


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main()
// {   
//     int n;
//     cin >> n;
//     vector<int> primes;
//     ll ret =0;
//     vector<int> st(n + 1);
//     for(int i = 2; i <= n;i++)
//     {
//         if(!st[i])
//         {
//             primes.push_back(i);
//             ret += 2 * (n / i) - 1;
//         }
//         for(int j = 0;1LL * primes[j] * i <= n; j++)
//         {
//             st[primes[j] * i] = true;
//             if(i % primes[j] == 0)
//             {
//                 break;
//             }
//         }
//     }
//     cout << ret << endl;





//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main()
// {
//     ll n ;
//     cin >> n;
//     vector<int> primes;
//     vector<int> st(n + 1);
//     vector<ll> f(n + 1);
//     vector<ll> phi(n + 1);
//     phi[1] = 1;
//     auto get_prime = [&]()
//     {
//         for(int i = 2;i <= n;i ++)
//         {
//             if(!st[i])
//             {
//                 primes.push_back(i);
//                 phi[i] = i - 1;
//             }
//             for(int j = 0; 1LL * primes[j] * i <= n; j++)
//             {
//                 st[primes[j] * i] = true;
//                 if(i % primes[j] == 0)
//                 {
//                     phi[primes[j] * i] = primes[j] * phi[i];
//                     break;
//                 }
//                 else
//                 {
//                     phi[primes[j] * i] = (primes[j] - 1) * phi[i];
//                 }
//             }
//         }
//     };
//     get_prime();
//     for(int i = 1; i <= n ;i ++)
//     {
//         f[i] = phi[i] + f[i - 1];
//     }
//     ll ret = 0;
//     for(int i = 0;i < primes.size(); i++)
//     {   
//         ll ret_t = 0;
//         for(int j = 1; j * primes[i] <= n; j++)
//         {
//             ret_t += phi[j];
//         }
//         ret += ret_t * 2 - 1;
//     }
//     cout << ret << endl;



    

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n , t;
    cin >>n >> t;
    vector<ll> a(n );
    for(int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    ll pos1 = 0;
    ll pos2 = 0;
    ll cnt = 0;
    ll ret = 0;
    while(pos1 <= n)
    {
        cnt += a[pos2 % n];
        if(cnt <= t)
        {
            ll diff = abs((pos2 ) - pos1) + 1;
            ret = max(ret, diff );
            cout << "pos1 " << pos1 << " " << "pos2 " << pos2 <<  " " << ret << endl;
          
        }
        else
        {
            while(cnt > t)
            {
                cnt -= a[pos1 % n];
                pos1++;
            }
           ll diff = abs((pos2) - pos1) + 1;
            ret = max(ret, diff );
            cout << "pos1 " << pos1 << " " << "pos2 " << pos2 << " " << ret << endl;
        }
        pos2++;
    }
    cout << ret << endl;



    return 0;
}