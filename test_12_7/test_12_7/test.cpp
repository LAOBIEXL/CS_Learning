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
//string path;
//int n;
//
//void dfs()
//{
//    if (path.size() >= n)
//    {
//        cout << path << endl;
//        return;
//    }
//    path += 'N';
//    dfs();
//    path.pop_back();
//
//    path += 'Y';
//    dfs();
//    path.pop_back();
//}
//
//int main()
//{
//    cin >> n;
//    dfs();
//
//
//
//    return 0;
//}
//
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
//int n, m;
//vector<int> a;
//
//void dfs(int begin)
//{
//    if (a.size() == m)
//    {
//        for (auto e : a) cout << e << " ";
//        cout << endl;
//        return;
//    }
//    for (int i = begin; i <= n; i++)
//    {
//        a.push_back(i);
//        dfs(i + 1);
//        a.pop_back();
//    }
//}
//
//int main()
//{
//    cin >> n >> m;
//    
//    dfs(1);
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
//int n, k;
//unordered_set<int> mp;
//vector<int> ret;
//
//void dfs()
//{
//    if (ret.size() == k)
//    {
//        for (auto e : ret)
//        {
//            cout << e << " " << " ";
//        }
//        cout << endl;
//        return;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (mp.count(i)) continue;
//        ret.push_back(i);
//        mp.insert(i);
//        dfs();
//        ret.pop_back();
//        mp.erase(i);
//    }
//}
//
//int main()
//{
//    cin >> n >> k;
//
//    dfs();
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
//int n;
//vector<int> ret;
//unordered_set<int> mp;
//
//void dfs()
//{
//    if (ret.size() == n)
//    {
//        for (auto e : ret) cout <<setw(5)<< e << " ";
//        cout << endl;
//        return;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (mp.count(i)) continue;
//        ret.push_back(i);
//        mp.insert(i);
//        dfs();
//        ret.pop_back();
//        mp.erase(i);
//    }
//
//}
//
//
//int main()
//{
//    cin >> n;
//    dfs();
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
//const int N = 2e5 + 10;;
//ll b[N];
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int k, n;
//        cin >> k >> n;
//        for (int i = 1; i <= n; i++) cin >> b[i];
//        ll power = b[1];
//        int pos2 = 1;//列的下标
//        if (n == 1)
//        {
//            cout << k * b[1] << endl;
//            continue;
//        }
//        for (int i = 2; i <= k; i++)
//        {
//
//            if (power >= b[pos2 + 1])
//            {
//                power += b[pos2 + 1];
//                pos2++;
//                if (pos2 == n)
//                {
//                    power += (k - i) * b[n];
//                    break;
//                }
//            }
//            else
//            {
//                power += b[pos2];
//            }
//        }
//        cout << power << endl;
//    }
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
//    //向上取整技巧：
//    int a = 4;
//    int b = 13;
//    int c = (b + a - 1) / a;
//    cout << c << endl;
//    //或者；
//    int d = ceil(double(b) / a);
//    cout << d << endl;
//    
//    
//
//
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
//const int N = 1e5 + 10;
//string a[N];
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int n;
//        cin >> n;
//        ll sum = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            priority_queue<int> heap;
//            unordered_map<int, int> posmp;
//            cin >> a[i];
//            string tmp = a[i];
//            int maxi = 0;
//            for (int i = tmp.size() - 1; i >= 0; i--)
//            {
//                heap.push(tmp[i] - '0');
//                if (!posmp.count(tmp[i])) posmp[tmp[i]] = i;
//            }
//            int pos = 0;
//            while (heap.size() >= 1 && posmp['0' + heap.top()] == pos)
//            {
//                heap.pop();
//                pos++;
//            }
//            if (heap.size() == 1 + pos)
//            {
//                ll t = 0;
//                for (int i = 0; i < tmp.size(); i++)
//                {
//                    t = t * 10 + (tmp[i] - '0');
//                }
//                sum += t;
//                continue;
//            }
//            if (heap.size() != 0)
//            {
//                maxi = heap.top();
//                while (tmp[pos] == maxi + '0') pos++;
//                if (pos < tmp.size())
//                {
//                    swap(tmp[posmp[maxi + '0']], tmp[pos]);
//                }
//            }
//            ll t = 0;
//            for (int i = 0; i < tmp.size(); i++)
//            {
//                t = t * 10 + (tmp[i] - '0');
//            }
//            sum += t;
//
//        }
//        cout << sum << endl;
//    }
//
//
//
//    return 0;
//}
//字符顺序操作
//样例不读完整；

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
//const int N = 2e5 + 10;
//int a[N];
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int n;
//        cin >> n;
//        for (int i = 1; i <= n; i++)
//        {
//            cin >> a[i];
//        }
//        vector<int> count2(n + 1);
//        int maxi = 0;
//        for (int y = 1; y <= n; y++)//判断大于i时候；
//        {
//            maxi = max(maxi, a[y]);
//            if (maxi == a[y])
//            {
//                int p2 = y;
//                for (int k = 1; k <= p2; k++)
//                {
//                    count2[k]++;
//                }
//            }
//            else
//            {
//                count2[y]++;
//            }
//        }
//        for (int j = 1; j <= n; j++)
//        {
//            int count = 0;
//            int i = j;
//            for (int y = 1; y < i; y++)
//            {
//                int ma = 0;
//                for (int z = y; z <= i; z++)
//                {
//
//                    ma = max(a[z], ma);
//                }
//                if (ma == a[y]) count++;
//            }
//
//
//            cout << count + count2[i] << " ";
//        }
//        cout << endl;
//
//    }
//
//
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
//const int N = 2e5 + 10;
//int a[N];
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int n;
//        cin >> n;
//        for (int i = 1; i <= n; i++)
//        {
//            cin >> a[i];
//        }
//        for (int j = 1; j <= n; j++)
//        {
//            int count = 0;
//            int i = j;
//            for (int y = 1; y < i; y++)
//            {
//                int ma = 0;
//                for (int z = y; z <= i; z++)
//                {
//
//                    ma = max(a[z], ma);
//                }
//                if (ma == a[y]) count++;
//            }
//            int maxi = 0;
//            for (int y = i; y <= n; y++)//判断大于i时候；
//            {
//                maxi = max(maxi, a[y]);
//                if (maxi == a[y])
//                {
//                    count++;
//                }
//            }
//            cout << count << " ";
//        }
//        cout << endl;
//
//    }
//
//
//
//    return 0;
//}
//


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
