//poj1270
#include <bits/stdc++.h>
using namespace std;
const int maxn = 101;
int n, a[maxn], in[maxn];
int topo[maxn];
bool vis[maxn], dir[maxn][maxn]; // dir[i][j]=true表示i、j是先后关系
void dfs(int z, int cnt)
{
    topo[cnt] = z;
    if (cnt == n)
    {
        for (int i = 1; i <= n; i++)
            cout << topo[i];
        cout << endl;
        return;
    }

    vis[z] = true;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[a[i]] && dir[z][a[i]])
            in[a[i]]--;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!in[a[i]] && !vis[a[i]])
            dfs(a[i], cnt + 1);
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (!vis[a[i]] && dir[z][a[i]])
            in[a[i]]++;
    }
    vis[z] = false;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        int st, ed;
        if (flag)
        {
            flag = !flag;
            cin >> st;
            continue;
        }
        if (!flag)
        {
            flag = !flag;
            cin >> ed;
            dir[st][ed] = 1;
            in[ed]++;
            continue;
        }
    }

    for (int i = 1; i <= n; i++)
        if (!in[a[i]])
            dfs(a[i], 1);
}
