// #include<bits/stdc++.h>
// using namespace std;
// const int INF = 0x3f3f3f3f;

// struct edge
// {
//     int to;
//     int w;
// };

// int main()
// {
    
//     int n, m;
//     cin >> n >> m;
//     vector<vector<edge>> graph(n + 1);

//     for(int i = 0;i <  m; i++)
//     {
//         int x, y, w;
//         cin >> x >> y >> w;
//         graph[x].push_back({y, w});
//     }

//     vector<int> dist(n + 1, INF);
//     vector<bool> done(n + 1, false);
    
//     dist[1] = 0;   
    
//     for(int i = 1; i <= n; i++)
//     {
//         int t = -1;
//         for(int j = 1; j <= n; j++)
//         {
//             if(!done[j] && (t == -1 || dist[j] < dist[t]))
//             {
//                 t = j;
//             }
//         }

//         //已经搞完所有点，或者剩下的点都是INF无法到达；
//         if(t == -1 || dist[t] == INF)
//         {
//             break;
//         }

//         done[t] = true;

//         for(auto [to, w] : graph[t])
//         {
//             int newDist = dist[t] + w;
//             if(newDist < dist[to])
//             {
//                 dist[to] = newDist;
//             }
//         }
//     }
//     if(dist[n] == INF)
//         cout << -1 << "\n";
//     else{
//         cout << dist[n] << "\n ";
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// const int INF = 0x3f3f3f3f;

// struct edge
// {
//     int to;
//     int w;
// };


// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<edge>> graph(n + 1);
//     for(int i = 0; i < m; i++)
//     {
//         int x, y, w;
//         cin >> x >> y >> w;
//         graph[x].push_back({y, w});
//     }
//     vector<int> dist(n + 1, INF);
//     vector<int> done(n + 1, false);
//     priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> heap;
//     //使用pair的排序函数，以第一个位置的值进行排序
//     dist[1] = 0;
//     heap.push({0, 1});
//     while(!heap.empty())
//     {
//         auto [dis, id] = heap.top();
//         heap.pop();
//         if(done[id]) continue;
//         done[id] = true;
//         for(auto [to, w] : graph[id])
//         {
//             int new_dist = dis + w;
//             if(dist[to] > new_dist)
//             {
//                 dist[to] = new_dist;
//                 heap.push({new_dist, to});
//             }
//         }
//     }
//     if(dist[n] == INF) cout << -1 << endl;
//     else
//     {
//         cout << dist[n] << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;

struct edge
{
    int to;
    int w;
};


int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<edge>> graph(n + 1);
    for(int i = 0; i < m; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        graph[x].push_back({y, w});
    }
    vector<int> dist(n + 1, INF);
    vector<int> done(n + 1, false);
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> heap;
    //使用pair的排序函数，以第一个位置的值进行排序
    dist[1] = 0;
    heap.push({0, 1});
    while(!heap.empty())
    {
        auto [dis, id] = heap.top();
        heap.pop();
        if(done[id]) continue;
        done[id] = true;
        for(auto [to, w] : graph[id])
        {
            int new_dist = dis + w;
            if(dist[to] > new_dist)
            {
                dist[to] = new_dist;
                heap.push({new_dist, to});
            }
        }
    }
    if(dist[n] == INF) cout << -1 << endl;
    else
    {
        cout << dist[n] << endl;
    }

    return 0;
}