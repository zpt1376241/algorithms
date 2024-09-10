#include <bits/stdc++.h>
using namespace std;
#define INF 0x7fffffff
const int N = 1005;
int m, n;
bool vis[N][N];
int mp[N][N], coin[N][N], ans = INF;
int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
void dfs(int x, int y, int now, bool magic)
{
    if (coin[x][y] <= now || now >= ans)
        return;
    coin[x][y] = now;
    if (x == n && y == n)
    {
        ans = min(ans, now);
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int tx = x + d[i][0], ty = y + d[i][1];
        if (tx < 1 || tx > n || ty < 1 || ty > n)
            continue;
        if (!vis[tx][ty])
        {
            vis[tx][ty] = !vis[tx][ty];
            if (mp[tx][ty])
            {
                if (mp[x][y] == mp[tx][ty])
                    dfs(tx, ty, now, true);
                else
                    dfs(tx, ty, now + 1, true);
            }
            else if(magic)
            {
                mp[tx][ty] = mp[x][y];
                dfs(tx, ty, now + 2, false);
                mp[tx][ty] = 0;
            }
            vis[tx][ty] = !vis[tx][ty];
        }
    }
}
int main()
{
    cin >> n >> m;
    memset(mp, 0, sizeof mp);
    memset(coin, 0x3f, sizeof coin);
    for (int i = 1; i <= m; i++)
    {
        int x, y, v;
        cin >> x >> y >> v;
        mp[x][y] = v + 1;
    }
    vis[1][1] = !vis[1][1];
    dfs(1, 1, 0, true);
    cout << (ans == INF ? -1 : ans) << endl;
}