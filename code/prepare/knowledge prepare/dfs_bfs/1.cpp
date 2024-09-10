#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
const int N = 1010;

char mp[N][N];
int vis[N][N];
int d[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int flag;
// dfs

void dfs(int x, int y)
{
    vis[x][y] = 1;
    if (mp[x][y + 1] == '#' && mp[x][y - 1] == '#' && mp[x - 1][y] == '#' && mp[x + 1][y] == '#')
        flag = 1;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + d[i][0], ny = y + d[i][1];
        if (vis[nx][ny] == 0 && mp[nx][ny] == '#')
            dfs(nx, ny);
    }
}

// bfs
void bfs(int x, int y)
{
    queue<PII> q;
    q.push({x, y});
    vis[x][y] = 1;
    while (q.size())
    {
        PII t = q.front();
        q.pop();
        int tx = t.first, ty = t.second;
        if (mp[tx][ty + 1] == '#' && mp[tx][ty - 1] == '#' && mp[tx + 1][ty] == '#' && mp[tx - 1][ty] == '#')
            flag = 1;
        for (int i = 0; i < 4; i++)
        {
            int nx = tx + d[i][0], ny = ty + d[i][1];
            if (vis[nx][ny] == 0 && mp[nx][ny] == '#')
            {
                vis[nx][ny] = 1;
                q.push({nx, ny});
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> mp[i];
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (mp[i][j] == '#' && vis[i][j] == 0)
            {
                flag = 0;
                bfs(i, j); // dfs(i, j);
                if (flag == 0)
                    ans++;
            }
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}