// #include<bits/stdc++.h>
// using namespace std;

// const int N = 2010;
// const int MOD = 1e8;
// int dp[N][N];

// int main()
// {
//     int n, f;
//     cin >> n >> f;
//     vector<int> v(n + 1);
//     for(int i = 1; i <= n;i ++)
//     {
//         cin >> v[i];
//     }
//     dp[0][0] = 1; //记得最后需要减掉这种情况；

//     for(int i = 1; i <= n;i ++)
//     {
//         for(int j = 0;j <= f-1;j++)
//         {
//             dp[i][j] = (dp[i - 1][j] + dp[i - 1][((j - v[i])%f + f)%f]) % MOD;
//         }
//     }
//     cout << (dp[n][0] - 1 + MOD)%(MOD) << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// const int N = 1010;
// int dp[N][N];

// int main()
// {
//     int n, vo;
//     cin >> n >> vo;
//     vector<int> v(n + 1);
//     vector<int> w(n + 1);
//     for(int i = 1;i <= n; i++)
//     {
//         cin >> v[i] >> w[i];
//     }
//     for(int i = 1; i <= n;i++)
//     {
//         for(int j = 0;j <= vo;j ++)
//         {
//             dp[i][j] = dp[i - 1][j];
//             if(j >= v[i])
//             {
//                 dp[i][j] = max(dp[i - 1][j] , w[i] + dp[i][j - v[i]]);
//             } 
//         }
//     }
//     cout << dp[n][vo] << endl;
//     memset(dp, -0x3f3f, sizeof dp);
//     dp[0][0] = 0;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 0;j <= vo;j++)
//         {
//             dp[i][j] = dp[i - 1][j];
//             if(j >= v[i])
//             {
//                 dp[i][j] = max(dp[i - 1][j] , w[i] + dp[i][j - v[i]]);
//             }
//         }
//     }
//     if(dp[n][vo] > 0) cout << dp[n][vo] << endl;
//     else
//     {
//         cout << 0 << endl;
//     }


    
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// const int N = 1010;
// int dp[N];

// int main()
// {
//     int n, vo;
//     cin >> n >> vo;
//     vector<int> v(n + 1);
//     vector<int> w(n + 1);
//     for(int i = 1;i <= n; i++)
//     {
//         cin >> v[i] >> w[i];
//     }
//     for(int i = 1; i <= n;i++)
//     {
//         for(int j = v[i];j <= vo;j ++)
//         {
           
//                 dp[j] = max(dp[j] , w[i] + dp[j - v[i]]);
            
//         }
//     }
//     cout << dp[vo] << endl;
//     memset(dp, -0x3f3f, sizeof dp);
//     dp[0] = 0;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = v[i];j <= vo;j++)
//         {
          
//                 dp[j] = max(dp[j] , w[i] + dp[j - v[i]]);
            
//         }
//     }
//     if(dp[vo] > 0) cout << dp[vo] << endl;
//     else
//     {
//         cout << 0 << endl;
//     }


    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// const ll N = 2e5 + 10;
// vector<ll> pow2(N);
// const ll MOD = 1e9 + 7;



// long long qpow(long long a, int b)
// {
//     long long ret = 1;
//     while(b > 0)
//     {
//         if(b & 1) 
//         {
//             ret = ret * a % MOD;
//         }
//         a = a * a % MOD;
//         b >>= 1;
//     }
//     return ret ;
// }



// int main()
// {
//     pow2[0] = 1;
//     for(int i = 1;i < pow2.size(); i++)
//     {
//         pow2[i] = (2 * pow2[i - 1]) % MOD;
//     }
//      int t;
//      cin >> t;
//      while(t--)
//      {
//         int n;
//         cin >> n;
//         vector<int> a(n + 1);
//         map<int, int> mp;
//         for(int i  = 1; i <= n;i ++)
//         {
//             cin >> a[i];
//             mp[a[i]]++;
//         }
//         ll ex = 0;
//         for(auto e : mp)
//         {
//             if(e.first != -1)
//             {
//                 if(mp.count(e.first + 1))
//                 {
//                     ex++;
//                 }
//             }
//         }

//         ll ret = 1;
//         if(mp.count(-1))
//         {
//             for(auto e : mp)
//             {
//                 ret = (ret * qpow(2, e.second - 1)) % MOD;    
//             }
//             ll tmp = 1;
//             for(auto e : mp)
//             {
//                 tmp = (tmp * qpow(2, e.second - 1)) % MOD;
//             }
//             ret = (ret + (tmp * ex) % MOD) % MOD;
//         }
//         else
//         {
//             for(auto e : mp)
//             {
//                 ret = (ret * qpow(2, e.second - 1)) % MOD;    
//             }
//         }
//         cout << ret << endl;

//      }


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main()
// {       
//     int t, m;
//     cin >> t >> m;
//    vector<ll> dp(t + 1, 0);
//     vector<int> v(m + 1);
//     vector<int> w(m + 1);
//     for(int i = 1;i <= m; i++)
//     {
//         cin >> v[i];
//         cin >> w[i];
//     }
//     for(int i = 1; i <= m; i++)
//     {
//         for(int j = v[i];j <= t; j++)
//         {
          
//                 dp[j] = max(dp[j - v[i]] + w[i], dp[j]);
         
//         }
//     }
//     cout << dp[t] << endl;





//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main()
// {       
//     int t, m;
//     cin >> t >> m;
//    vector<ll> dp(t + 1, 0);
//     vector<int> v(m + 1);
//     vector<int> w(m + 1);
//     for(int i = 1;i <= m; i++)
//     {
//         cin >> v[i];
//         cin >> w[i];
//     }
//     for(int i = 1; i <= m; i++)
//     {
//         for(int j = v[i];j <= t; j++)
//         {
          
//                 dp[j] = max(dp[j - v[i]] + w[i], dp[j]);
         
//         }
//     }
//     cout << dp[t] << endl;





//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
const int N = 5e4 + 10;
using ll = long long;
int main()
{
    int n, h;
    cin >> n >> h;
    vector<ll> dp(h + 1, 0x3f3f3f3f);
    dp[0] = 0;
    vector<int> v(n + 1);
    vector<int> w(n + 1);
    for(int i = 1;i <= n;i ++)
    {
        cin >> v[i] >> w[i];
    }
    for(int i = 1;i <= n; i++)
    {
        for(int j = 0;j <= h; j++)
        {
            if(j < v[i])
            {
                dp[j] = min(dp[j], dp[0] + w[i]);
            }
            else
            {
                dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
            }
        }
    }
    cout << dp[h] << endl; 




    return 0;
}