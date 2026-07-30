#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;

//离散化：
int pos;
unordered_map<int, int> id; //获取离散id;
vector<int> disc; //用于存储需要离散化数据的数组；


int fa[2 * N];


int find(int x)
{
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}
void unite(int a, int b)
{
    fa[find(a)] = find(b);
}

using pii = pair<int, int>;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        disc.clear();
        id.clear();
        pos = 0;
        int n;

        int op;
        cin >> n ;
        vector<pii> pair;
        vector<pii> pair2;

        for(int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            disc.push_back(b);
            disc.push_back(a);

            cin >> op;
            if(op == 1)
            {
                pair2.push_back({a, b});
            }
            else if(op == 0)
            {
                pair.push_back({a, b});
            }
        }
        int cnt = 0;
        sort(disc.begin(), disc.end());
        disc.erase(unique(disc.begin(), disc.end()),disc.end());
        for(auto e: disc)
        {
            id.insert({e, ++pos});
        }

        for(int i = 0; i < id.size() + 1; i++)
        {
            fa[i] = i;
        }

        for(auto e : pair2)
        {
            unite(id[e.first], id[e.second]);
        }

        int flag = 1;
        for(auto e : pair)
        {
            int a = id[e.first];
            int b = id[e.second];
            if(find(a) == find(b))
            {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }

    }

    return 0;
}
