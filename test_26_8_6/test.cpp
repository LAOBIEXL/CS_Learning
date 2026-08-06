// #include<bits/stdc++.h>
// using namespace std;
// #define dbg(x) cerr << #x << "==" << (x) << endl;
// #define dbgg cerr << "------------------------" << endl;

// int main()
// {
//     int T;
//     cin >> T;
//     while(T--)
//     {
//         int n, m , k;
//         cin >> n >> m >> k;
//         vector<vector<int>> edges(n + 1);
//         for(int i = 0; i < m; i++)
//         {
//             int u, v;
//             cin >>u >> v;
//             edges[u].push_back(v);
//             edges[v].push_back(u);
//         }
//         vector<int> status(n + 1);
//         queue<int> q;
//         for(int i = 0; i < k; i++)
//         {
//             int s;
//             cin >> s;
//             status[s] = -1;
//             q.push(s);
//         }
//         vector<int> ret;
//         while(!q.empty())
//         {
//             int t = q.front();
//             dbg(t);
//             dbgg;

//             q.pop();
//             for(auto e : edges[t])
//             {
//                 if(status[e] == -1)
//                 {
//                     continue;
//                 }
//                 else if(status[e] == 0)
//                 {
//                     ret.push_back(e);
//                     status[e] ++;
//                 }
//                 else if(status[e] == 1)
//                 {
//                     q.push(e);
//                     status[e]++;
//                 }
//             }
//         }
//         cout << ret.size() << endl;
//         for(auto e : ret)
//         {
//             cout << e << " ";
//         }
//         cout << endl;


//     }


//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
// int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};


// int main()
// {
//     int n , m;
//     cin >> n >> m;
//     vector<vector<int>> dist(n + 1, vector<int>(m + 1, -1)); //初始化为-1，表示没有访问过；
//     int x, y;
//     cin >> x >> y;
//     dist[x][y] = 0;
//     queue<pair<int,int>> q;
//     q.push({x,y});
//     while(!q.empty())
//     {
//         auto [x, y] = q.front();
//         q.pop();
//         for(int d =0 ; d < 8; d++)
//         {
//             int xx = x + dx[d];
//             int yy = y + dy[d];
//             if(xx < 1 || xx > n || yy < 1 || yy > m) continue;
//             if(dist[xx][yy] != -1) continue;
//             dist[xx][yy] = dist[x][y] + 1;
//             q.push({xx,yy});
//         }
//     }
//     for(int i = 1; i <= n ; i++)
//     {
//         for(int j = 1; j <= m;j++)
//         {
//             cout << dist[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int dx[4] = {1, -1, 0, 0};
// int dy[4] = {0, 0, 1, -1};

// int main()
// {
//     int n , m;
//     cin >> n >> m;
//     vector<vector<char>> a(n + 1, vector<char>(m + 1));
//     vector<pair<int,int>> source;
//     vector<vector<int>> owner(n + 1, vector<int>(m + 1, -1));
//     for(int i = 1;i <= n; i++)
//     {
//         for(int j = 1;j <= m;j++)
//         {
//             cin >> a[i][j];
//             if(a[i][j] == '1')
//             {
//                 source.push_back({i, j});
//             }
//         }
//     }
//     queue<pair<int, int>> q;
//     vector<vector<int>> dist(n + 1, vector<int>(m + 1, -1));
//     for(int id = 0; id < source.size(); id++) //标记源点id，用来统计归属；
//     {
//         auto [u, v] = source[id];
//         dist[u][v] = 0;
//         owner[u][v] = id;
//         q.push({u, v});
//     }

//     while(!q.empty())
//     {
//         auto [x, y] = q.front();
//         q.pop();
//         for(int d = 0; d < 4; d++)
//         {
//             int xx = x + dx[d];
//             int yy = y + dy[d];
//             if(xx < 1 || xx > n || yy < 1 || yy > m) continue;
//             if(dist[xx][yy] != -1) continue;
//             dist[xx][yy] = dist[x][y] + 1;
//             owner[xx][yy] = owner[x][y];
//             q.push({xx, yy});
//         }
//     }
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= m;j ++)
//         {
//             cout << dist[i][j] << " ";
//         }
//         cout << endl;
//     }



//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main()
{
    int n , m;
    cin >> n >> m;
    vector<string> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    deque<pair<int,int>> q;
    vector<vector<int>> dist(n , vector<int>(m, INF));//初始化为最大，因为01bfs需要多次比较
    dist[x1][y1] = 0;
    q.push_back({x1, y1});
    map<pair<int, int>, int> done;
    while(!q.empty())
    {
        auto [u, v] = q.front();
        q.pop_front();
        if(done.count({u, v})) continue;
        done[{u, v}] = 1;
        for(int d = 0; d < 4; d++)
        {
            int xx = u + dx[d];
            int yy = v + dy[d];
            if(xx < 0 || xx >= n || yy < 0 || yy >= m) continue;
            int w = 1;
            if(a[xx][yy] == a[u][v])
            {
                w = 0;
            }
            int new_dist = dist[u][v] + w;
            if(new_dist < dist[xx][yy])
            {
                dist[xx][yy] = new_dist;
                if(w == 0)
                {
                    q.push_front({xx,yy});
                }
                else{
                    q.push_back({xx, yy});
                }
            }

        }
    }



    return 0;
}
