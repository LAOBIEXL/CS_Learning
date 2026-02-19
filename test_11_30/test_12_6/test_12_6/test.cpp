#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<algorithm>
//#include<cmath>
//#include<queue>
//#include <deque>
//#include <stack>
//#include<iomanip>
//#include <chrono>
//#include<random>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int, int> PII;
//using namespace std;
//const int N = 0;
//
//
//int main()
//{
//    int n; int m;
//    cin >> n >> m;
//    unordered_map<int, int> mp;
//    vector<int> a(n);
//    for (int i = 0; i < n; i++) cin >> a[i];
//    int left = 0;
//    int kind = 0;
//    int right = 0;
//    int pos = 0;
//    int ret = n;//将结果初始化为最大值；
//    while (right < n)
//    {
//        if (mp[a[right]] == 0) kind++;
//        mp[a[right]]++;
//
//        while (kind == m)//循环出窗口与判断，并且循环更新结果；
//        {
//            /*ret = min(ret, right - left + 1);
//            pos = left;*/
//            //上面这种方式不可以，因为如果存在多组解需要输出最小的解的情况；
//            if (right - left + 1 < ret)
//            {
//                pos = left;
//                ret = right - left + 1; //说白了只有严格小于时再交换；
//            }
//
//            if (mp[a[left]] == 1) kind--;
//            mp[a[left++]]--;
//        }
//
//        right++;
//    }
//    cout << pos+1 << " " << pos + ret  << endl;
//
//
//    return 0;
//}



//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<algorithm>
//#include<cmath>
//#include<queue>
//#include <deque>
//#include <stack>
//#include<iomanip>
//#include <chrono>
//#include<random>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int, int> PII;
//using namespace std;
//const int N = 0;
//
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--);
//
//
//
//    return 0;
//}
//
//
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<algorithm>
//#include<cmath>
//#include<queue>
//#include <deque>
//#include <stack>
//#include<iomanip>
//#include <chrono>
//#include<random>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int, int> PII;
//using namespace std;
//const int N = 0;
//
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        set<int> mp;
//        int n;
//        cin >> n;
//        for (int i = 1; i <= n; i++)
//        {
//            int t;
//            cin >> t;
//            mp.insert(t);
//        }
//        int kind = mp.size();
//        cout << *(mp.lower_bound(kind)) << endl;
//    }
//
//
//
//    return 0;
//}

//
//
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<algorithm>
//#include<cmath>
//#include<queue>
//#include <deque>
//#include <stack>
//#include<iomanip>
//#include <chrono>
//#include<random>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int, int> PII;
//using namespace std;
//const int N = 4e5 + 10;
//ll a[N];
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        ll t = 2;
//        ll sum = 0;
//       
//        int n;
//        int l, r;
//        cin >> n >> l >> r;
//        ll be = 1 << ( r-l + 1);
//        for (int i = 1; i <= n; i++)
//        {
//           
//            if (i >= l && i < r)
//            {
//                a[i] = t;
//                t = t * 2;
//                sum += a[i];
//
//            }
//            else if (i == r)
//            {
//                a[i] = sum;
//               
//            }
//            else
//            {
//                a[i] = be;
//                be <<= 1;
//               
//            }
//            cout << a[i] <<  " ";
//        }
//        cout << endl;
//    }
//
//
//
//    return 0;
//}


//
//
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<algorithm>
//#include<cmath>
//#include<queue>
//#include <deque>
//#include <stack>
//#include<iomanip>
//#include <chrono>
//#include<random>
//using namespace std;
//typedef long long ll;
//typedef pair<int, int> PII;
//using namespace std;
//const int N = 0;
//
//
//int main()
//{
//    int kind = 0;
//    map<char,int> mp;
//    string a;
//    cin >> a;
//    int sz = a.size();
//    int ret = sz;
//    for (int left = 0, right = 0; right < sz; right++)
//    {
//        if (mp[a[right]] == 0) kind++;
//        mp[a[right]]++;
//        while (kind == 26)
//        {
//            ret = min(ret, right - left + 1);
//            if (mp[a[left]] == 1) kind--;
//            mp[a[left]]--;//第一不要忘了left++;
//            //第二不要忘了判断种类变化；
//            //第三不要忘了改变map中的值；
//            left++;
//        }
//    }
//    cout << ret << endl;
//    
//
//
//    return 0;
//}
//

//
// Created by 21443 on 2025/12/6.
//
//#include <bits/stdc++.h>
//using namespace std;
//
//using ll = long long;
//constexpr int BIG_NUM = 536870912;

// bool exam(const vector<int>& v, int l, int r, int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j <= r; j++) {
//             if (i == l && j == r) {
//                 int xor_val = 0;
//                 for (int k = i; k <= j; k++) {
//                     xor_val ^= v[k];
//                 }
//                 if (xor_val != 0) {
//                     return false;
//                 }
//             } else {
//                 int xor_val = 0;
//                 for (int k = i; k <= j; k++) {
//                     xor_val ^= v[k];
//                 }
//                 if (xor_val == 0) {
//                     return false;
//                 }
//             }
//         }
//     }
//     return true;
// }
//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<algorithm>
//#include<cmath>
//#include<queue>
//#include <deque>
//#include <stack>
//#include<iomanip>
//#include <chrono>
//#include<random>
//using namespace std;
//
//void solve() {
//    int n, l, r;
//    cin >> n >> l >> r;
//    vector<int> a(n + 1);
//    vector<int> cur_xor(n + 1);
//    map<int, bool>is_OK;
//    a[1] = 1;
//    cur_xor[0] = 0;
//    cur_xor[1] = 1;
//    int base = 2;
//    for (int i = 2; i <= r - 1; i++) {
//        a[i] = cur_xor[i - 1] ^ i;
//        cur_xor[i] = i;
//    }
//    a[r] = cur_xor[r - 1] ^ cur_xor[l - 1];
//    cur_xor[r] = cur_xor[r - 1] ^ a[r];
//    for (int i = r + 1; i <= n; i++) {
//        a[i] = cur_xor[i - 1] ^ i;
//        cur_xor[i] = i;
//    }
//    for (int i = 1; i <= n; i++) {
//        cout << a[i] << " ";
//    }
//    //cout << (exam(a, l, r, n)?"YES":"NO") << " ";
//    cout << endl;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int t;
//    cin >> t;
//    while (t--) {
//        solve();
//    }
//
//    return 0;
//}

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<cmath>
#include<queue>
#include <deque>
#include <stack>
#include<iomanip>
#include <chrono>
#include<random>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;
using namespace std;
const int N = 0;


int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> f(n + 1);
        vector<int> a(n + 1);
        f[0] = 0;
        f[1] = 1;
        a[1] = 1;
        a[1] = 1;
        for (int i = 2; i <= r - 1; i++)
        {
            f[i] = i;
            a[i] = i ^ f[i - 1];
        }
        //f(l,r) = f[r] ^ f[l-1] = 0;
        //f[r] = f[l-1] = a[r] ^ f[r-1];
        a[r] = f[l - 1] ^ f[r - 1];
        f[r] = a[r] ^ f[r - 1];
        for (int i = r + 1; i <= n; i++)
        {
            //依旧需要满足
            //f[i] = i; f[i] = i = a[i] ^ f[i-1] a[i] = f[i-1] ^ i;
            a[i] = f[i - 1] ^ i;
            f[i] = i;
        }
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
    }



    return 0;
}


//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<algorithm>
//#include<cmath>
//#include<queue>
//#include <deque>
//#include <stack>
//#include<iomanip>
//#include <chrono>
//#include<random>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int, int> PII;
//using namespace std;
//const int N = 0;
//
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--);
//
//
//
//    return 0;
//}



//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<algorithm>
//#include<cmath>
//#include<queue>
//#include <deque>
//#include <stack>
//#include<iomanip>
//#include <chrono>
//#include<random>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int, int> PII;
//using namespace std;
//const int N = 0;
//
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--);
//
//
//
//    return 0;
//}


/*
0.注意vector的size是size_t不能直接减去一个数，要类型转换
1.深呼吸，不要紧张，慢慢读题，读明白题，题目往往比你想的简单。
2.暴力枚举:枚举什么，是否可以使用一些技巧加快枚举速度（预处理、前缀和、数据结构、数论分块）。
3.贪心:需要排序或使用数据结构（pq）吗，这么贪心一定最优吗。
4.二分：满足单调性吗，怎么二分，如何确定二分函数返回值是什么。
5.位运算：按位贪心，还是与位运算本身的性质有关。
6.数学题：和最大公因数、质因子、取模是否有关。
7.dp：怎么设计状态，状态转移方程是什么，初态是什么，使用循环还是记搜转移。
8.搜索：dfs 还是 bfs ，搜索的时候状态是什么，需要记忆化吗。
9.树上问题：是树形dp、树上贪心、或者是在树上搜索。
10.图论：依靠什么样的关系建图，是求环统计结果还是最短路。
11.组合数学：有几种值，每种值如何被组成，容斥关系是什么。
12.交互题：log(n)次如何二分，2*n 次如何通过 n 次求出一些值，再根据剩余次数求答案。
13.如果以上几种都不是，多半是有一个 point 你没有注意到，记住正难则反.                                                                                                      
                                               ::^^^^^:  :^!7???????7!~^:
                                        :^~!!!~~^^^^^^~^ ~!~^::::::^^~!7??7!^
                                    :~!7!~^:                              :~777~:
                                  ~??~:                                       :~!7~:
                               :7J!:                     ^???7~:                  ^~^^
                             ^?J~          :~!!?~::^~~~~~~!~!7J5J~                   ^:~:
                           :?J^          :77~  ~!!?~^^::::      ^JY~                   :7!
                          !Y~          :JGY7:  ^~!~               ^YY:                   ~J^       :^:^
                        :J7           7?^~J7~: ^:^^:                !P7             :~:   :J7     ~7  ~?
                       ^J^           J!    7 :   ~~7?^^^^~~~~~~^^^^^:^55:            :7!    J7   77    ?7
                      ^J:          :5~    ?!!:  ^~7~!!~^^^^::::::::::  7P~             !J:   ?~^J~     :P
                     :!           :5~   ^!5~!:                          ^P!             ^Y~   YJ:       P
                    ^~    :~!     5!:!?7!^                               :P!              Y! JY        :Y
                   ~?    :J:^Y   JGJJ~:                                    5!              YJB         J7~~^^::::
                  ^J    :J^  ~J ~P~:                                        5~              GY        :~^^^^^^^:~:
                  ?:  :~!:    ^^?J7~                                        :5:             ^Y                 7?
                ::   ^!^        :!?~                                         ^Y              77              ^J?
               ::     :~~~     !7~                                            !~     ^!7:     ?            :?Y^
               ~:        :::  ?~                                                    :Y :Y~    :~ ^      :~?Y!
              ~:           7~~5           ^                     7!!~~~~^^:          !^  :J:^^:   ^~~!!7??7J?
             :!             ?5^       ::^7JJ!^                  J !~   :^^~~^    :!~       :77 ::         !G
             7^                    ^~~~7J! ^?                  ~J:^?57!~^:      !Y7:      ^!^  ~~:       ~P:
             J                ::  :  ^!!: ::!5^                YBGB#&&&&&&#P7:    :: ::  ~!    !!:7^ :  ~J:
             Y                ~:   ~YP5GB#&#BG5?:             :Y^!7!7?Y5J75B@@P?:     7!:?     ?~ :Y!:!J!
             Y~  ~            !!^7P&@@BG5?77?Y7~JJ~ ~~:       7~J!     ^YJ  ^Y@B       !~      Y    P~ :7J7:
             ~5  J~           ~J7#@@5^7?     :?5 ^?J?5GY7!~~~~ JY        5J   YJ              !?    ^G    ~?:
              JJ:J?^           Y@@B~  G:       J5   ^~?!^~!!~  YY        ~G  ^P:              Y:     JY   ^!
               ?JY?J~     ^    :G#    B^       ^G              ^G!       J? :P~          J:  ?!       G^^!~
                :~~ 7J^   ?!!^   ?J^  7P^      ??               ^5J~:::^7! ~Y^          ?P  !7        75
                   : ^?J7^5!:!??7!?P5~ ~5?~^^^!!                  ^!!!~~^^77^^:        755!~7         :G:
                   7    ^!77   :~#Y~~:   ^~~~^                         !?77!~:       :Y5 5?~!:         5!
                  77     ^       ^5!           ^~~~~^^^    ^^~~~~~^      ~?         7P7 ~7  Y?         7?
                  Y7     J~        !J?~:     7J7~^::::~?77?~::::^~7J! :~J5:      ^?Y7       5!         ~?
                  ?Y:  : !5:         ^!?JJ??PJ          GG          YBGBY: ::^!7??~        ^?  :::::: :7~
                   ::  ^^^~:^  ^^~~~~~~~!77?G!         ~BG~         7P!~^~!~~~~!~~!!!!~~~^^::^^~~~~~^::^
                                             7!^::::^!?J:^J?!^::::^!7
                                               ^^~~~~^      ^~~~~^^
*/
