#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e6 + 5;
const int mod = 998244353;
double PI = acos(-1.0);
#define eps 1e-7
int vis[maxn];
vector<int> mp[maxn];
int mb;
int countt = 0;
int cnt = 0;
void init()
{
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < maxn; i++)
    {
        mp[i].clear();
    }
    cnt = 0;
    return;
}
void dfs(vector<int> s)
{
    int point = s[s.size() - 1];
    if (point == mb)
    {
        cnt++;
        int j;
        for (j = 0; j < s.size() - 1; j++)
        {
            cout << s[j] << " ";
        }
        cout << s[j];
        cout << endl;
    }
    for (int t = 0; t < mp[point].size(); t++)
    {
        if (vis[mp[point][t]] == 1)
            continue;
        s.push_back(mp[point][t]);
        vis[mp[point][t]] = 1;
        dfs(s);
        vis[mp[point][t]] = 0;
        s.erase(s.end() - 1);
    }
}
bool bfs()
{
    memset(vis, 0, sizeof(vis));
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while (!q.empty())
    {
        int t = q.front();
        q.pop();
        vector<int>::iterator it = mp[t].begin();
        while (it != mp[t].end())
        {
            if (!vis[*it])
            {
                vis[*it] = 1;
                if (*it == mb)
                    return true;
                q.push(*it);
            }
            it++;
        }
    }
    return false;
}
signed main()
{
    int a, b;
    while (cin >> mb)
    {
        vector<int> s;
        s.push_back(1);
        init();
        while (scanf("%d%d", &a, &b) && (a != 0 || b != 0))
        {
            mp[a].push_back(b);
            mp[b].push_back(a);
        }
        for (int i = 0; i < maxn; i++)
        {
            sort(mp[i].begin(), mp[i].end());
        }
        printf("CASE %d:\n", ++countt);
        if (bfs())
        {
            memset(vis, 0, sizeof(vis));
            vis[1] = 1;
            dfs(s);
            printf("There are %d routes from the firestation to streetcorner %d.\n", cnt, mb);
        }
        else
            printf("There are 0 routes from the firestation to streetcorner %d.\n", mb);
    }
}
