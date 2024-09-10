#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int N = 1e6 + 5;
const int mod = 998244353;
int w[N], c[N], m[N];
int new_w[N], new_c[N];
int dp[N];
void solve()
{
    int n, C;
    cin >> n >> C;
    for (int i = 1; i <= n;i++)
        cin >> w[i] >> c[i] >> m[i];

    int new_n = 0;
    for (int i = 1; i <= n;i++)
    {
        for (int j = 1; j <= m[i];j<<=1)
        {
            m[i] -= j;
            new_w[++new_n] = w[i] * j;
            new_c[new_n] = c[i] * j;
        }
        if(m[i])
        {
            new_w[++new_n] = w[i] * m[i];
            new_c[new_n] = c[i] * m[i];
        }
    }

    for (int i = 1; i <= new_n;i++)
    {
        for (int j = C; j >= new_c[i];j--)
        {
            dp[j] = max(dp[j], dp[j - new_c[i]] + new_w[i]);
        }
    }
    cout << dp[C] << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}