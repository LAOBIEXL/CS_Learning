// #include<iostream>
// using namespace std;
// using ll = long long;

// int main()
// {
//     int k;
//     cin >> k ;
//     ll sum = 0;
//     ll cnt = 0;
//     int i = 1;
//     while(cnt <= k)
//     {
//         if((cnt + i) <= k)
//         {
//             cnt += i;
//             sum += i * i;
//         }
//         else
//         {
//             sum += i * (k - cnt);
//             break;
//         }
//         i++;
//     }
//     cout << sum << endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n + 1);
//     for(int i= 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }
//     priority_queue<int,vector<int> ,greater<int>> q;
//     for(int i = 1; i <= n ;i++)
//     {
//         if(q.size() < m)
//         {
//             q.push(a[i]);
//         }
//         else{
//             int t = q.top();
//             t += a[i];
//             q.pop();
//             q.push(t);
//         }
//     }
//     int ret = 0;
//     while(!q.empty())
//     {
//         int t = q.top();
//         ret = max(ret, t);
//         q.pop();
//     }
//     cout << ret << endl;

//     return 0;

// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n + 1);
//     for(int i= 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }
//     priority_queue<int,vector<int> ,greater<int>> q;
//     for(int i = 1; i <= n ;i++)
//     {
//         if(q.size() < m)
//         {
//             q.push(a[i]);
//         }
//         else{
//             int t = q.top();
//             t += a[i];
//             q.pop();
//             q.push(t);
//         }
//     }
//     int ret = 0;
//     while(!q.empty())
//     {
//         int t = q.top();
//         ret = max(ret, t);
//         q.pop();
//     }
//     cout << ret << endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> l(n + 1), r(n + 1);
//     vector<int> u(n + 1), v(n + 1);
//     for(int i = 1; i <= n; i++)
//     {
//         cin >> l[i] >> r[i] >> u[i] >> v[i];
//     }

//     int ans = 0;
//     for(int m = n; m >= 1; m--)
//     {
//         int j = 1;
//         for(int i = 1; i <= n; i++)
//         {
//             if(j > m)
//             {
//                 break;
//             }

//             int k = m - j + 1;
//             if((j < l[i] || j > r[i]) && (k < u[i] || k > v[i]))
//             {
//                 j++;
//             }
//         }

//         if(j == m + 1)
//         {
//             ans = m;
//             break;
//         }
//     }

//     cout << ans << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int a, b;
//     string s;
//     cin >> s;
//     for(int i = 0; i < s.size(); i++)
//     {
//         if(s[i] == '0')
//         {
//             a = i;
//             break;
//         }
//     }
//     for(int i = 0;i < s.size(); i++)
//     {
//         if(s[i] == '1')
//         {
//             b = i;
//             break;
//         }

//     }
//     for(int i = 0; i < s.size(); i++)
//     {
//         if(i == a || i== b)
//         {
//             continue;
//         }
//         else cout << s[i] ;
//     }
//     cout << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void solve()
// {
//    int n, m;
//    cin >> n >> m;
//    vector<int> a(n);
//    vector<int> b(m);
//    int maxa = 0;
//    int mina = 1e9 + 1;
//      int maxb = 0;
//    int minb = 1e9 + 1;
//    for(int i = 0; i < n; i++)
//    {
//         cin >> a[i];
//    }
//    for(int i = 0;i  < m; i++)
//    {
//         cin >> b[i];
//    }
//    if(n < m * 2)
//    {
//     cout << "NO" << endl;
//     return;
//    }
//    sort(a.begin(),a.end());
//    sort(b.begin(),b.end());
//    for(int i = 0; i < m; i++)
//    {
//     if(b[i] < a[i] || b[i] > a[n - m + i])
//     {
//         cout << "NO" << endl;
//         return;
//     }
//    }
//    cout << "YES" << endl;
//    return;


// }

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     vector<int> b(m);
//     for(int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for(int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }

//     if(n < 2 * m)
//     {
//         cout << "NO" << endl;
//         return;
//     }

//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());

//     for(int i = 0; i < m; i++)
//     {
//         if(a[i] >= b[i] || a[n - m + i] <= b[i])
//         {
//             cout << "NO" << endl;
//             return;
//         }
//     }

//     cout << "YES" << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> a(2 * n + 1);
//     vector<int> pos(n + 1);
//     vector<long long> dp(2 * n + 1);

//     for(int i = 1; i <= 2 * n; i++)
//     {
//         cin >> a[i];
//     }

//     for(int i = 1; i <= 2 * n; i++)
//     {
//         dp[i] = dp[i - 1] + 1;

//         if(pos[a[i]] == 0)
//         {
//             pos[a[i]] = i;
//         }
//         else
//         {
//             int p = pos[a[i]];
//             long long len = i - p + 1;
//             dp[i] = max(dp[i], dp[p - 1] + len * len);
//         }
//     }

//     cout << dp[2 * n] << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(2 * n + 1);
    for(int i = 1; i <= 2 * n ; i++)
    {
        cin >> a[i];
    }
    vector<int> dp(2 * n + 1);
    dp[0] = 0;
    map<int, int> st;
    map<int, int> pos;

    for(int i = 1; i <= 2 * n ; i++)
    {
        if(st[a[i]])
        {
            dp[i] = max(dp[i - 1] + 1,(i -  pos[a[i]] + 1) *(i -  pos[a[i]] + 1) + dp[pos[a[i]] - 1] );
        }
        else{
            dp[i] = 1 + dp[i - 1];
        }
        st[a[i]]++;
        if(st[a[i]] == 1)
        {
            pos[a[i]] = i;
        }
    }
    cout << dp[2 * n] << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
