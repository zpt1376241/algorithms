#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define lowbit(x) ((x) & (-x))
const int maxn = 1e6 + 5;
const int mod = 998244353;
void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    char s[55][55];
    for (int i = 1; i <= n;i++)
        for (int j = 1; j <= m;j++)
            cin >> s[i][j];
    string ch;
    cin >> ch;
    for (int i = 0; i < ch.size();i++)
    {
        if(ch[i]=='U'&&s[x-1][y]=='.')
            x--;
        else if(ch[i]=='D'&&s[x+1][y]=='.')
            x++;
        else if(ch[i]=='R'&&s[x][y+1]=='.')
            y++;
        else if(ch[i]=='L'&&s[x][y-1]=='.')
            y--;
    }
    cout << x << ' ' << y << endl;
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