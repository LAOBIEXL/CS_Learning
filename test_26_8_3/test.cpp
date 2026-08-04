// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int m , n;
//     cin >> m >> n;

//     vector<int> a(m);
//     vector<int> b(n);

//     for(int i = 0; i < m; i++)
//     {
//         cin >> a[i];
//     }
//     for(int i = 0; i < n; i++)
//     {
//         cin >> b[i];
//     }

//     vector<int> tmp(m + n);//辅助数组；
//     int cur = 0, cur1 = 0, cur2 = 0;

//     while(cur1 < m && cur2 < n)
//     {
//         if(a[cur1] <= b[cur2]) tmp[cur++] = a[cur1++];
//         else tmp[cur++] = b[cur2++];
//     }
//     //某一个指针到头之后，就把另一个序列直接完整转移；
//     while(cur1 < m) tmp[cur++] = a[cur1++];
//     while(cur2 < n) tmp[cur++] = b[cur2++];


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// vector<int> tmp;
// vector<int> a;

// void merge(int left, int right)
// {
//     if(left >= right)
//     {
//         return;
//     }
//     int mid = (left + right) >> 1;
//     merge(left, mid);
//     merge(mid+1, right);
//     int cur = left;
//     int cur1 = left;
//     int cur2 = mid + 1;
//     while(cur1 <= mid && cur2 <= right)
//     {
//         if(a[cur1] <= a[cur2]) tmp[cur++] = a[cur1++];
//         else tmp[cur++] = a[cur2++];
//     }
//     while(cur1 <= mid) tmp[cur++] = a[cur1++];
//     while(cur2 <= right) tmp[cur++] = a[cur2++];

//     for(int i = left; i <= right; i++)
//     {
//         a[i] = tmp[i];
//     }
// }

// int main()
// {
//    int n;
//    cin >> n;
//    tmp.resize(n + 1);
//    a.resize(n + 1);
//    for(int i = 1; i <= n; i++)
//    {
//     cin >> a[i];
//    }

//    merge(1, n);

//    for(int i =1; i <= n; i++)
//    {
//     cout << a[i] <<" ";
//    }
//    cout << endl;



//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int k_nums = 0;
//     int cnt = 0;
//     for(int i = 0; i < s.size(); i++)
//     {
//         if(s[i] == 'o')
//         {
//             cnt++;
//         }
//         if(s[i] == 'x')
//         {
//             cnt++;
//             cout << cnt << endl;
//             k_nums++;
//         }
//     }
//     if(k_nums < n)
//     {
//         int q = n - k_nums;
//         while(q--)
//         {
//             cout << cnt << endl;
//         }
//     }



//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// using pii = pair<int, int>;

// vector<pii> edges;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     edges.resize(m);
//     for(auto& [u, v] : edges)
//     {
//         cin >> u >> v;
//     }
//     int cnt = 0;
//     int a = edges[0].first;
//     int b = edges[0].second;
//     int c1 = 0, c2 = 0, d1 = 0, d2 = 0;
//     int cnta = 0;
//     int cntb = 0;
//     for(auto[u, v] : edges)
//     {
//         if(u != a && v != a )
//         {
//             c1 = u;
//             c2 = v;
//         }
//         else{
//             cnta++;
//         }
//         if(u != b && v != b)
//         {
//             d1 = u;
//             d2 = v;
//         }
//         else{
//             cntb++;
//         }
//     }
//     int flag1 = 1;
//     int flag2 = 1;
//     int flag3 = 1;
//     int flag4 = 1;
//     if(cnta == m)
//     {
//         cnt += n - 1;
//         flag1 = 0;
//         flag2 = 0;
//         //cout << " a" << endl;
//     }
//     if(cntb ==m )
//     {
//         cnt += n - 1;
//         flag3 = 0;
//         flag4 = 0;
//         // << " b" << endl;
//     }


//     for(auto [u, v] : edges)
//     {
//         if(u != a && v != a)
//         {
//             if(u != c1 && v != c1)
//             {
//                 flag1 = 0;
//             }
//             if(u != c2 && v != c2)
//             {
//                 flag2 = 0;
//             }
//         }
//         if(u != b && v != b)
//         {
//             if(u != d1 && v!= d1)
//             {
//                 flag3 = 0;
//             }
//             if(u != d2 && v != d2)
//             {
//                 flag4 = 0;
//             }
//         }
//     }
//     auto valid = [&](int a, int b)
//     {
//         int flag = 1;
//         for(auto [u, v] : edges)
//         {
//             if(u != a && u != b && v != a && v != b) flag = 0;
//         }
//         return flag;
//     };
//     //cout << "cnt" << cnt << endl;
//     cout << (cnt + flag1 + flag2 + flag3 + flag4 - valid(a, b)) << endl;




//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// using pii = pair<int, int>;

// vector<pii> edges;

// int main()
// {
//     int n ,k;
//     cin >> n >> k;
//     string s;
//     cin >> s;
//     int p = 0;
//     vector<int> pos(n + 1);
//     for(int i = 0;i < s.size(); i++)
//     {
//        if(s[i] == 'o')
//        {
//         pos[++p] = i + 1;
//        }
//     }
//     double l = 0.0;
//     double r = 1.0;
//     int time =30;

//     auto check = [&](double mid) -> bool
//     {
//         double min_left = 0x3f3f3f3f;
//         for(int j = k; j <= p; j++)
//         {
//             int i = j - k + 1;
//             double left = (i - 1) - mid * (pos[i] - 1);
//             min_left = min(left, min_left);
//             double right = j - mid*(pos[j]);
//             if(right >= min_left)
//             {
//                 return true;
//             }
//         }
//         return false;
//     };

//     while(time--)
//     {
//         double mid = (l + r) / 2;
//         if(check(mid))
//         {
//             l = mid;
//         }
//         else{
//             r = mid;
//         }
//     }
//     cout << fixed << setprecision(10) << l << endl;


//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
const int N = 1e6 + 10;
array<int, N> id;
vector<int> a;
const int M = 2e5 + 10;
array<int, M> fa;
array<int, M> sz;
array<long long, M> weight;
vector<pii> edges;

void init()
{
    for(int i = 0; i < M; i++)
    {
        fa[i] = i;
        sz[i] = 1;
    }
}

int find(int x)
{
    return x == fa[x] ? x : fa[x] = find(fa[x]);
}

void unite(int a, int b, long long w)
{
    int xx = find(a);
    int yy = find(b);
    if(xx == yy) return;
    if(sz[xx] < sz[yy])
    {
        swap(xx, yy);
    }
    weight[xx] += (weight[yy] + w);
    sz[xx] += sz[yy];
    fa[yy] = xx;
}

int GCD(int a, int b)
{
    while(b != 0)
    {
        int d = a % b;
        a = b;
        b = d;
    }
    return a;
}

int main()
{
    init();
    int n;
    cin >> n;
    a.resize(n +1);
    int maxi = 0;
    for(int i = 1; i <= n; i++)
    {
     cin >> a[i];
     //cout << "n" << n << endl;
     id[a[i]] = i;
     maxi = max(a[i], maxi);
    }
    //cout << "maxi" << maxi << endl;
    for(int i = maxi; i >= 1;  i--)
    {
        vector<int> ret;
        int d = i;
        int beishu = d;
        while(d <= maxi)
        {
            if(id[d]) ret.push_back(id[d]);
            d += beishu;
        }
            for(int j = 0;j + 1 < ret.size();j++)
            {
                unite(ret[j], ret[j + 1], i);
            }
    }
    long long maxret = 0;
    // for(int i = 0; i < M ; i++)
    // {
    //     if(weight[i] > 0)
    //     {
    //         cout << " i : " << i << "w" << weight[i] << endl;
    //     }
    // }
    for(int i = 0; i < M; i++)
    {
        if(i <= n && fa[i] == i)
        {
            maxret = max(maxret, weight[i]);
        }
    }
    cout << maxret << endl;






    return 0;
}
