#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e6 + 5;
const int mod = 998244353;
const int P = 998244353;
void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    s = " " + s;

    vector<bool> pre(1 << m);
    for (int i = 0; i < (1 << m); i++)
    {
        vector<int> t(m + 1);
        for (int j = 0; j < m; j++)
            if (i >> j & 1)
                t[j + 1] = 1;
        bool flag = false;
        for (int l = 1, r = m; l <= r; l++, r--)
            if (t[l] != t[r])
            {
                flag = true;
                break;
            }
        pre[i] = flag;
    }

    auto check = [&](int now, int px)
    {
        int l = now - m + 1, r = now;
        for (int i = 0; i < m; i++)
        {
            int opt = px >> i & 1;
            if (opt && s[l + i] == 'B')
                return false;
            if (!opt && s[l + i] == 'A')
                return false;
        }
        return true;
    };

    vector<vector<long long>> f(n + 1, vector<long long>(1 << m));
    for (int i = 0; i < (1 << m); i++)
        if (pre[i] && check(m, i))
            f[m][i] = 1;
    const int mask = (1 << (m)) - 1;
    for (int i = m + 1; i <= n; i++)
    {
        for (int j = 0; j < (1 << m); j++)
        {
            if (!pre[j] || !check(i, j))
                continue;
            int px = (j << 1) & mask;
            if (s[i - m] == 'A')
            {
                px = px | 1;
                if (pre[px])
                    f[i][j] = (f[i][j] + f[i - 1][px]) % P;
            }
            else if (s[i - m] == 'B')
            {
                if (pre[px])
                    f[i][j] = (f[i][j] + f[i - 1][px]) % P;
            }
            else
            {
                if (pre[px])
                    f[i][j] = (f[i][j] + f[i - 1][px]) % P;
                px = px | 1;
                if (pre[px])
                    f[i][j] = (f[i][j] + f[i - 1][px]) % P;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < (1 << m); i++)
        if (pre[i])
            ans = (ans + f[n][i]) % P;
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
        solve();

    return 0;
}