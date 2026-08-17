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

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{   
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        vector<ll> arr(a);
        vector<ll> brr(b);

        for(int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        for(int j = 0; j < b; j++)
        {
            cin >> brr[j];
        }

        ll cnt1 = 0;
        ll cnt2 = 0;
        for(int i = 0; i < a - 1; i++)
        {
            cnt1 += arr[i] - arr[i + 1] + 1;
        }
        cnt1 += arr[a - 1];

        for(int i = 0; i < b - 1; i++)
        {
         
            cnt2 += brr[i] - brr[i + 1] + 1;
        }
        cnt2 += brr[b - 1];

        //cout << cnt1 << " " << cnt2 << endl;

        if(cnt1 >= cnt2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }



    }



    return 0;
}