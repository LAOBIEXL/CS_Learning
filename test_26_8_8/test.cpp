// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, x;
//     cin >> n >> x;
//     vector<int> p(n + 1);
//     vector<int> q(n + 1);
//     int px1 = 0;
//     int px2 = 0;

//     vector<int> addrp(n + 1);
//     vector<int> addrq(n + 1);

//     for(int i = 1; i <= n; i++)
//     {
//         cin >> p[i];
//         if(p[i] ==x)
//         {
//             px1 = i;
//         }
//         addrp[p[i]] = i;
//     }
//     for(int i = 1; i <= n; i++)
//     {
//         cin >> q[i];
//         if(q[i] == x)
//         {
//             px2 = i;
//         }
//         addrq[q[i]] = i;
//     }
//     int pos1 = 1;
//     int pos2 = 1;
//     vector<int> vis(n + 1, false);
//     vector<int> ret;
//     int flag = 1;
//     while(pos1 < px1 && pos2 < px2)
//     {
//         if(vis[p[pos1]])
//         {
//             pos1++;
//         }
//         else if(vis[q[pos2]])
//         {
//             pos2++;
//         }
//         else{
//             if(p[pos1] == q[pos2])
//             {
//                 //cout << p[pos1] << endl;
//                 flag = 0;
//                 break;
//             }
//         if(addrq[p[pos1]] <= addrp[q[pos2]])
//         {
//             ret.push_back(p[pos1]);
//             vis[p[pos1]] = true;
//         }
//         else
//         {
//             ret.push_back(q[pos2]);
//             vis[q[pos2]] = true;
//         }
//         }
//     }
//     while(pos1 < px1)
//     {
//         if(!vis[p[pos1]])
//         {
//             ret.push_back(p[pos1]);
//             pos1++;
//         }
//         else
//         {
//             pos1++;
//         }
//     }
//     while(pos2 < px2)
//     {
//         if(!vis[q[pos2]])
//         {
//             ret.push_back(q[pos2]);
//             pos2++;
//         }
//         else
//         {
//             pos2++;
//         }
//     }

//     if(flag)
//     {
//         if(ret.size() == n- 1)
//         {
//             cout << "YES\n";
//             for(auto e : ret)
//             {
//                 cout << e << " ";
//             }
//             cout << endl;
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }
//     else{
//         cout << "hee";
//         cout << "NO" << endl;
//     }




//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> odd;
//     vector<int> even;
//     vector<int> a;
//     for(int i = 0;i < n;i++)
//     {
//         int t;
//         cin >> t;
//         a.push_back(t);
//         if(t & 1)
//         {
//             odd.push_back(t);
//         }
//         else
//         {
//             even.push_back(t);
//         }
//     }
//     int ret =0 ;
//     if(odd.size() ==1 )
//     {
//         ret = odd[0];
//     }
//     else
//     {
//         ret = even[0];
//     }
//     for(int i = 0; i < n;i ++)
//     {
//         if(a[i] == ret)
//         {
//             cout << i + 1 << endl;
//             break;
//         }
//     }

//     return 0;
// }

    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<ll> st(n + 1);
//     for(int i = 2; i <= n; i++)
//     {
//         if(!st[i]) //没被标记 除了素数自己不标记，所有的倍数都标记；
//         {   //这个地方从i * i 开始，可以减少重复判断的次数；
//             for(ll j = 1LL * i * i ; j <= n; j += i)
//             {
//                 st[j] = 1;
//             }
//         }
//     }
//     for(int i = 2; i <= n; i++)
//     {
//         if(!st[i])
//         {
//             cout << i << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<ll> st(n + 1);
//     vector<ll> primes; //线性筛需要预存素数；
//     for(int i = 2; i <= n; i++)
//     {
//         if(!st[i])
//         {
//             primes.push_back(i);  //初始加入素数
//         }
//         for(int j = 0;j < primes.size();j++) //从最小的素数开始遍历
//         {
//             if(1LL * i * primes[j] > n) //如果超过范围，就break
//             {
//                 break;
//             }
//             st[i * primes[j]] = 1; //标记合数；
//             if(i % primes[j] == 0) //第一次找到最小的因数被筛掉之后，就停止，避免了重复；
//             {
//                 break;
//             }
//         }
//     }

//     for(auto e : primes)
//     {
//         cout << e << " ";
//     }

    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<ll> primes; //线性筛需要预存素数；
//     vector<ll> minp(n + 1);
//     for(int i = 2;i <= n;i ++)
//     {
//         if(minp[i] == 0) //没有被筛，说明是质数；
//         {
//             primes.push_back(i);
//             minp[i] = i; //质数的最小质因数是自己；
//         }
//         for(auto p : primes)
//         {
//             if(p > minp[i] || 1LL * p * i > n)
//             {
//                 break;
//             }
//             minp[p * i] = p;
//         }
//     }
//     for(auto e : primes)
//     {
//         cout << e << " ";
//     }
//     cout << endl;

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<ll> primes;
//     ll m = 1e6 + 10;
//     vector<ll> minp(m + 1);
//     for(ll i = 2; i <= m;i ++)
//     {
//         if(minp[i] == 0)
//         {
//             minp[i] = i;
//             primes.push_back(i);
//         }
//         for(auto p : primes)
//         {
//             if(p > minp[i] || 1LL * p * i > m)
//             {
//                 break;
//             }
//             minp[i * p] = p;
//         }
//     }
//     set<ll> st;
//     for(auto p : primes)
//     {
//         ll t = p * p;
//         st.insert(t);
//     }
//     for(int i = 1; i <= n; i++)
//     {
//         ll t;
//         cin >> t;
//         if(st.count(t))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }   
    

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     double l;
//     cin >>l;
//     vector<double> lan(n + 1 + 2);
//     for(int i = 1 ;i <= n;i ++)
//     {
//         cin >> lan[i];
//     }
//     lan[n + 1] = 0;
//     lan[n + 2] = l;
//     double first = 0;
//     double second = 0;
//     sort(lan.begin() + 1, lan.end());
//     double maxd = 0;
//     for(int i = 1;i + 1 <= n + 2; i++)
//     {
//         if(i == 1)
//         {
//             first = lan[i + 1] - lan[i];
//             continue;
//         }
//         if(i == n + 1)
//         {
//             second = lan[i + 1] - lan[i];
//             continue;
//         }
//         maxd = max(lan[i + 1] - lan[i], maxd);
//     }
//     first = max(first , second);
//     maxd = max(maxd / 2 , first);
//     cout << fixed << setprecision(10) << maxd  << endl;


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, a, b, c;
//     cin >> n >> a >> b >> c;
//     vector<int> dp(n + 1, -1);
//     dp[0] = 0;
//     for(int i = 0; i <= n; i++)
//     {
//         if(dp[i] == -1) continue;
//         if(i + a <= n)
//         {
//             dp[i + a] = max(dp[i + a], dp[i] + 1);        }
//         if(i + b <= n)
//         {
//             dp[i + b] = max(dp[i + b], dp[i] + 1);
//         }
//         if(i + c <= n)
//         {
//             dp[i + c] = max(dp[i + c], dp[i] + 1);
//         }
//     }
//     cout << dp[n] << endl;



//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t, m;
//     cin >> t >> m;
//     vector<int> w(m + 1);
//     vector<int> v(m + 1);
//     for(int i = 1; i <= m;i ++)
//     {
//         cin >> v[i] >> w[i];
//     }
//     vector<int> dp(t + 1, 0);
//     for(int i = 1; i <= m; i++)
//     {
//         for(int j = t;j >= v[i]; j--)
//         {
//             dp[j] = dp[j];
           
//                 dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
           
//         }
//     }
//     cout << dp[t] << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> price(n + 1);
    for(int i = 1; i <= n; i++) cin>> price[i];
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    dp[0][0] = 1;
    for(int i = 1;i <= n; i++)
    {
        for(int j = m; j >= 0; j--)
        {
            dp[i][j] = dp[i - 1][j];
            if(j >= price[i])
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - price[i]];
        }
    }
    if(dp[n][m] != -INF)
    {
        cout << dp[n][m] << endl;
    }



    return 0;
}
