// #pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define lowbit(x) ((x) & (-x))
const int maxn = 1e6 + 5;
const int mod = 998244353;
int n, a[50][50];
bool vis[50][50];
int d[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
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
        for (int i = 0; i < 4; i++)
        {
            int nx = tx + d[i][0], ny = ty + d[i][1];
            if (nx >= 0 && nx <= n + 1 && ny >= 0 && ny <= n + 1 && !vis[nx][ny] && a[nx][ny] == 0)
            {
                vis[nx][ny] = 1;
                q.push({nx, ny});
            }
        }
    }
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    bfs(0, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (!vis[i][j] && a[i][j] == 0)
                cout << 2 << ' ';
            else
                cout << a[i][j] << ' ';
        }
        cout << endl;
    }
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