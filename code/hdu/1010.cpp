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

char mat[10][10];
bool vis[10][10];
int flag;
int n, m, t;
int a, b, c, d;
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool check(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m;
}
void dfs(int x, int y, int time)
{
    if (flag)
        return;
    if (mat[x][y] == 'D')
    {
        if (time == t)
            flag = 1;
        return;
    }
    int tmp = t - time - abs(c - x) - abs(d - y);
    if (tmp < 0)
        return;
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dir[i][0], yy = y + dir[i][1];
        if (check(xx, yy) && mat[xx][yy] != 'X' && !vis[xx][yy])
        {
            vis[xx][yy] = true;
            dfs(xx, yy, time + 1);
            vis[xx][yy] = false;
        }
    }
}
void solve()
{
    while (cin >> n >> m >> t)
    {
        if (n == 0 && m == 0 && t == 0)
            break;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] == 'S')
                    a = i, b = j;
                if (mat[i][j] == 'D')
                    c = i, d = j;
            }
        memset(vis, 0, sizeof vis);
        int tmp = t - abs(c - a) - abs(d - b);
        if (tmp & 1)
        {
            puts("NO");
            continue;
        }
        flag = 0;
        vis[a][b] = true;
        dfs(a, b, 0);
        if (flag)
            puts("YES");
        else
            puts("NO");
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
        solve();
    return 0;
}