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
//const int N = 11;
//int pi[4] = { -1,0 , 1, 0 };
//int pj[4] = { 0, 1, 0, -1 };
//
//
//int main()
//{
//    int c1, c2;
//    int f1, f2;
//    set<PII> mp;
//    for (int i = 0; i <= 10; i++) {
//        mp.insert({ i, 0 });
//        mp.insert({ i,11 });
//    }
//    for (int j = 0; j <= 10; j++) {
//        mp.insert({ 0, j });
//        mp.insert({ 11,j });
//    }
//   
//    for (int i = 1; i <= 10; i++)
//    {
//        for (int j = 1; j <= 10; j++)
//        {
//            char ch;
//            cin >> ch;
//            if (ch == '*')
//            {
//                mp.insert({ i, j });
//            }
//            else if (ch == 'C')
//            {
//                c1 = i; c2 = j;
//            }
//            else if (ch == 'F')
//            {
//                f1 = i; f2 = j;
//            }
//        }
//    }
//    int ret = 0;
//    int p1 = 0;
//    int p2 = 0;
//    while (c1 != f1 || c2 != f2 )
//    {
//        if (!mp.count({ c1 + pi[p1], c2 + pj[p1] }))
//        {
//            c1 += pi[p1]; c2 += pj[p1];
//        }
//        else p1 = (p1 + 1) % 4;
//        
//        if (!mp.count({ f1 + pi[p2], f2 + pj[p2] }))
//        {
//            f1 += pi[p2]; f2 += pj[p2];
//        }
//        else p2 = (p2 + 1) % 4;
//
//        ret++;
//        if (ret >= 1000)
//        {
//            cout << 0 << endl;
//            return 0;
//        }
//    }
//      
//
//    cout << ret << endl;
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
//int pi[4] = { 0, 1, 0, -1 };
//int pj[4] = { 1, 0, -1, 0 };
//set<PII> mp;
//
//ll find_way(int p1, int p2, int pos, ll cnt)
//{
//    cout << "ne" << endl;
//    if (mp.count({ p1 - 1, p2  }) && mp.count({p1 +1, p2 }) && mp.count({p1, p2+1}) && mp.count({p1, p2-1}))
//        return cnt;
//    else
//    {
//        while (!mp.count({ p1 + pi[pos], p2 + pj[pos] }))
//        {
//            cnt++;
//            p1 += pi[pos]; p2 += pj[pos];
//            mp.insert({ p1, p2 });
//        }
//        ll re = cnt;
//        if (!mp.count({ p1 + pi[(pos + 2) % 4], p2 + pj[(pos + 2) % 4] }))
//        {
//            re = max(re, find_way(p1, p2, (pos + 1) % 4, cnt));
//        }
//        if (!mp.count({ p1 + pi[(pos + 2) % 4], p2 + pj[(pos + 2) % 4] }))
//        {
//            re = max(re, find_way(p1, p2, (pos + 2) % 4, cnt));
//        }
//        if (!mp.count({ p1 + pi[(pos + 3) % 4], p2 + pj[(pos + 3) % 4] }))
//        {
//            re = max(re, find_way(p1, p2, (pos + 3) % 4, cnt));
//        }
//        return re;
//    }
//}
//
//int main()
//{
//    
//    int n, b;
//    cin >> n >> b;
//    for (int i = 0; i < b; i++)
//    {
//        char ch;
//        int a;
//        cin >> ch >> a;
//        int tmp = ch - 64;
//        mp.insert({ a, tmp });
//    }
//    for (int i = 0; i <= n; i++) {
//        mp.insert({ i, 0 });
//        mp.insert({ i, n + 1 });
//    }
//    for (int j = 0; j <= n; j++) {
//        mp.insert({ 0, j });
//        mp.insert({ n + 1, j });
//    }
//    int p1 = 0, p2 = 0;
//    ll ret1 = find_way(p1, p2, 0,0);
//    ll ret2 = find_way(p1, p2, 1,0);
//    ll ret = max(ret1, ret2);
//
//    cout << ret << endl;
//    
//
//    return 0;
//}
//
//
//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <set>
//#include <map>
//#include <unordered_map>
//#include <unordered_set>
//#include <algorithm>
//#include <cmath>
//#include <queue>
//#include <deque>
//#include <stack>
//#include <iomanip>
//#include <chrono>
//#include <random>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int, int> PII;
//
//// 定义四个方向的偏移量
//int pi[4] = { 0, 1, 0, -1 };
//int pj[4] = { 1, 0, -1, 0 };
//set<PII> mp;
//
//// 递归函数，计算从(p1, p2)按照方向pos出发的最长移动步数
//ll find_way(int p1, int p2, int pos, ll cnt) {
//    // 检查当前位置是否四周都被障碍点包围
//    if (mp.count({ p1 - 1, p2 }) && mp.count({ p1 + 1, p2 }) && mp.count({ p1, p2 + 1 }) && mp.count({ p1, p2 - 1 })) {
//        return cnt;
//    }
//    else {
//        // 沿指定方向移动，直到遇到障碍点
//        while (!mp.count({ p1 + pi[pos], p2 + pj[pos] })) {
//            cnt++;
//            p1 += pi[pos];
//            p2 += pj[pos];
//        }
//        ll re = cnt;
//        // 尝试向其他三个方向递归搜索
//        if (!mp.count({ p1 + pi[(pos + 1) % 4], p2 + pj[(pos + 1) % 4] })) {
//            re = max(re, find_way(p1, p2, (pos + 1) % 4, cnt));
//        }
//        if (!mp.count({ p1 + pi[(pos + 2) % 4], p2 + pj[(pos + 2) % 4] })) {
//            re = max(re, find_way(p1, p2, (pos + 2) % 4, cnt));
//        }
//        if (!mp.count({ p1 + pi[(pos + 3) % 4], p2 + pj[(pos + 3) % 4] })) {
//            re = max(re, find_way(p1, p2, (pos + 3) % 4, cnt));
//        }
//        return re;
//    }
//}
//
//int main() {
//    int n, b;
//    cin >> n >> b;
//    for (int i = 0; i < b; i++) {
//        char ch;
//        int a;
//        cin >> ch >> a;
//        int tmp = ch - 64;
//        mp.insert({ a, tmp });
//    }
//    // 将棋盘边界点插入障碍点集合
//    for (int i = 0; i <= n; i++) {
//        mp.insert({ i, 0 });
//        mp.insert({ i, n + 1 });
//    }
//    for (int j = 0; j <= n; j++) {
//        mp.insert({ 0, j });
//        mp.insert({ n + 1, j });
//    }
//    int p1 = 0, p2 = 0;
//    ll ret1 = find_way(p1, p2, 0, 0);
//    ll ret2 = find_way(p1, p2, 1, 0);
//    ll ret = max(ret1, ret2);
//
//    cout << ret << endl;
//
//    return 0;
//}
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
const int N = 1e6;
int arr[N];

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> arr[i];
        int left = 1; int right = 1;
        unordered_set<int > mp;
        int ret = 0;
        while (right <= n)
        {
            while (mp.count(arr[right]))
            {
                mp.erase(arr[left]);
                left++;
            }
            mp.insert(arr[right]);
            ret = max(ret, right - left + 1);
            right++;//这个一定不要忘；
            
        }
        cout << ret << endl;
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
