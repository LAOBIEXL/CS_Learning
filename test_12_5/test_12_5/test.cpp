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
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int n, k;
//        cin >> n >> k;
//        string a;
//        cin >> a;
//        int sz = a.size();
//        int count = 0;
//        for (int i = 0; i < sz; i++)
//        {
//            if (a[i] == '1')
//            {
//                for (int j = i + 1; j <= i + k && j < sz; j++)
//                {
//                    if (a[j] == '0')
//                        a[j] = '2';
//                }
//            }
//        }
//        for (int i = 0; i < sz; i++)
//        {
//            if (a[i] == '0')
//            {
//                count++;
//            }
//        }
//        cout << count << endl;
//    }
//
//
//    return 0;
//}
1
200000
200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200000 200...

#include<iostream>
#include<cstring>
#include<cmath>
#include<string>
using namespace std;
const int N = 2e5 + 10;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        ll count1 = 0;
        ll count2 = 0;
        for (int i = 0; i < n; i++)
        {
            ll t;
            cin >> t;
            if (t >= 1) {
                count1++;
                count2 += t - 1;
            }
        }
        if (count2 >= n - 1)
            cout << count1 << endl;
        else
        {
            cout << count1 - (n - 1 - count2) << endl;
        }
    }

    return 0;
}

10000
2 720306059937471051
830814221 899891864
896791467 701322941
10 637959959692954774
379710886 553662200 822904972 337544160 259191173 781670363 712327465 598927850 81855096 317399427
8475899 393947469 320745768 646374439 674392330 550225518 674507041 801233279 539599238 575547258
14 458336474195340201
11085641 208450112 400667872 592324753 229176773 462189359 129584595 757874709 711876666 2008813 908823753 854701562 433792367 18294072
957473790 206628801 605141042 323620721 881902066 81973063.

#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;



int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        vector<long long> tmp;
        vector<long long> tmp2;
        long long count1 = 0;
        long long count2 = 0;
        int k, n;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            //k = 2 的情况单独处理;
            if (k >= 3 && t >= 1 && t <= k)
            {
                tmp.push_back(t);//将t放入待配对区；
            }
            else if (t == 2)
            {
                tmp.push_back(t);
            }

        }
        sort(tmp.begin(), tmp.end());
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            //计算数组中那些可能完成操作的元素：
            long long z = k;
            if (z % 2 == 0) z--;
            long long scope = (z + 1) / 2 - 1;//满足条件；
            if (t >= 1 && t <= scope)
            {
                tmp2.push_back(t);
            }
        }
        sort(tmp2.begin(), tmp2.end());
        for (int i = tmp.size() - 1; i >= 0; i--)
        {
            for (int j = 0 + count1; j < tmp2.size(); j++)
            {
                long long w = 0;
                for (w = k; w >= 1; w--)
                {
                    if (w % (tmp2[j] + 1) != 0)
                        break;
                }
                long long cope = w / (tmp2[j] + 1);//计算满足的范围下线：
                long long p = w - cope * (tmp2[j] + 1);
                if (tmp[i] <= cope && tmp2[j] <= p)
                {
                    count1++;
                    break;
                }
                else if (tmp[i] <= cope - 1)
                {
                    count1++;
                    break;
                }
            }
        }
        cout << count1 << endl;

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
//const int N = 1e5 + 10;
//ll a[N], b[N];
//ll f1[N], f2[N];
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int n;
//        cin >> n;
//        ll k = 0;
//        for (int i = 1; i <= n; i++) cin >> a[i];
//        for (int i = 1; i <= n; i++) cin >> b[i];
//        for (int i = 1; i <= n; i++)
//        {
//            f1[i] = max(f1[i - 1] - a[i], b[i] - f2[i - 1]);
//            f2[i] = min(f2[i - 1] - a[i], b[i] - f1[i - 1]);
//        }
//        cout << f1[n] << endl;
//    }
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
