#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 105;
const ll mod = 998244353;
char pic[maxn][maxn];
int m,n,idx[maxn][maxn];
void dfs(int r, int c, int id)
{
    if(r<0||r>=m||c<0||c>=n)    return;
    if(idx[r][c]>0||pic[r][c]!='@') return;
    idx[r][c] = id;
    for (int dr = -1; dr <= 1; dr++)
        for (int dc = -1; dc <= 1; dc++)
            if (dr != 0 || dc != 0)  dfs(r + dr, c + dc, id);
}
void solve()
{
    while (scanf("%d%d", &m, &n) == 2 && m && n)
    {
        for (int i = 0; i < m; i++)
            scanf("%s", pic[i]);
        memset(idx, 0, sizeof(idx));
        int cnt = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (idx[i][j] == 0 && pic[i][j] == '@')
                    dfs(i, j, ++cnt);
        printf("%d\n", cnt);
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //int T = 1;
    // cin >> T;
    //while (T--)
    //{
    solve();
    //}

    return 0;
}