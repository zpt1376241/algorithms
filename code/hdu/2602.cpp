#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1011;
const int mod = 998244353;
int dp[maxn][maxn];
int w[maxn], c[maxn];
void solve()
{
    memset(dp, 0, sizeof dp);
    int n, C;
    cin >> n >> C;
    for (int i = 1; i <= n;i++)
        cin >> w[i];
    for (int i = 1; i <= n;i++)
        cin >> c[i];
    for (int i = 1; i <= n;i++)
    {
        for (int j = 0; j <= C;j++)
        {
            if(c[i]>j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - c[i]] + w[i]);
        }
    }
    cout << dp[n][C] << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}