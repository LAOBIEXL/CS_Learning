// #include<bits/stdc++.h>
// using namespace std;

// const int N = 5e4 + 10;

// int fa[3 * N];

// int find(int x)
// {
//     return fa[x] == x ? x : fa[x] = find(fa[x]);
// }

// void un(int a, int b)
// {
//     fa[find(a)] = find(b);
// }


// int main()
// {
//     int n, k;
//     cin >> n >> k;

//     for(int i = 0; i <= 3 * n ; i++)
//     {
//         fa[i] = i;
//     }
    
    

    


//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n, m;
//         cin >> n >> m;

//         vector<int> have(26);
//         string s;

//         for(int i = 0; i < n; i++)
//         {
//             cin >> s;
//             have[s[0] - 'a'] = 1;
//         }

//         bool ok = true;

//         for(int i = 0; i < m; i++)
//         {
//             cin >> s;

//             for(int j = 0; j < s.size(); j++)
//             {
//                 if(have[s[j] - 'A'] == 0)
//                 {
//                     ok = false;
//                 }
//             }
//         }

//         if(ok)
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

// using ll = long long;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int a, b;
//         cin >> a >> b;
//         vector<ll> arr(a);
//         vector<ll> brr(b);

//         for(int i = 0; i < a; i++)
//         {
//             cin >> arr[i];
//         }

//         for(int j = 0; j < b; j++)
//         {
//             cin >> brr[j];
//         }

//         ll cnt1 = 0;
//         ll cnt2 = 0;
//         for(int i = 0; i < a - 1; i++)
//         {
//             cnt1 += arr[i] - arr[i + 1] + 1;
//         }
//         cnt1 += arr[a - 1];

//         for(int i = 0; i < b - 1; i++)
//         {

//             cnt2 += brr[i] - brr[i + 1] + 1;
//         }
//         cnt2 += brr[b - 1];

//         //cout << cnt1 << " " << cnt2 << endl;

//         if(cnt1 >= cnt2)
//         {
//             cout << 1 << endl;
//         }
//         else
//         {
//             cout << 2 << endl;
//         }



//     }



//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> dep(n + 1);

//         for(int i = 2; i <= n; i++)
//         {
//             int p;
//             cin >> p;
//             dep[i] = dep[p] + 1;
//         }

//         int m;
//         cin >> m;
//         vector<int> a(m);

//         for(int i = 0; i < m; i++)
//         {
//             cin >> a[i];
//         }

//         int keep = a[0];

//         for(int i = 1; i < m; i++)
//         {
//             if(dep[a[i]] < dep[keep])
//             {
//                 keep = a[i];
//             }
//         }

//         cout << m - 1;

//         for(int i = 0; i < m; i++)
//         {
//             if(a[i] != keep)
//             {
//                 cout << " " << a[i];
//             }
//         }

//         cout << endl;
//     }

//     return 0;
// }

// // #include<bits/stdc++.h>
// // using namespace std;

// // struct node{
// //     int parent = 0;
// //     int id = 1;
// //     int cnt;
// //     int flag = 0;
// // };

// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while(t--)
// //     {
// //         int n;
// //         cin >> n;
// //         vector<node> a(n + 1);
// //         vector<vector<int>> gh(n + 1);

// //         for(int i = 2; i <= n;i ++)
// //         {
// //             cin >> a[i].parent;
// //             a[i].id = i;

// //             gh[i].push_back(a[i].parent);
// //             gh[a[i].parent].push_back(i);
// //         }

// //         int m;
// //         cin >> m;
// //         for(int i = 0; i < m; i++)
// //         {
// //             int tmp;
// //             cin >> tmp;
// //             a[tmp].flag = 1;
// //         }

// //         function<void<ll>> dfs = [&](ll d) -> void{

// //         };

// //         vector<int> vis(n + 1);
// //         queue<int> q;
// //         vector<int> ansd;
// //         q.push(1);
// //         vis[1] = 1;
// //         int ans = 0;
// //         while(!q.empty())
// //         {
// //             int k = q.front();
// //             q.pop();

// //             if(a[k].flag)
// //             {
// //                 if(a[k].cnt)
// //                 {
// //                      ans += a[k].cnt;
// //                 }
// //             }
// //             else
// //             {
// //                 if(a[k].cnt)
// //                 {
// //                     ans += a[k].cnt - 1;
// //                 }
// //             }
// //             for(auto e : gh[k])
// //                {
// //                     if(!vis[e] && a[e].cnt)
// //                     {
// //                         q.push(e);

// //                         vis[e] = 1;
// //                     }
// //                }
// //         }
// //         cout << ans << endl;
// //     }


// //     return 0;
// // }

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll S;
        int q;
        cin >> S >> q;

        vector<ll> d;

        for(ll i = 1; i * i <= S; i++)
        {
            if(S % i == 0)
            {
                d.push_back(i);

                if(i * i != S)
                {
                    d.push_back(S / i);
                }
            }
        }

        sort(d.begin(), d.end());

        int cnt = d.size();
        vector<ll> pre(cnt);

        ll last = 0;
        ll sum = 0;

        for(int i = 0; i < cnt; i++)
        {
            sum += (d[i] - last) * (S / d[i]);
            pre[i] = sum;
            last = d[i];
        }

        while(q--)
        {
            ll x, y;
            cin >> x >> y;

            ll limit = S / y;
            int p = upper_bound(d.begin(), d.end(), limit) - d.begin() - 1;
            ll w = d[p];

            if(w >= x)
            {
                cout << x * y << endl;
            }
            else
            {
                int id = lower_bound(d.begin(), d.end(), x) - d.begin();

                ll fx;

                if(id == 0)
                {
                    fx = x * (S / d[0]);
                }
                else
                {
                    fx = pre[id - 1];
                    fx += (x - d[id - 1]) * (S / d[id]);
                }

                ll ans = w * y + fx - pre[p];
                cout << ans << endl;
            }
        }
    }

    return 0;
}
