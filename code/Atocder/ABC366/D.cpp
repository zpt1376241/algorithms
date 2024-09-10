#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e6 + 5;
const int mod = 998244353;
double PI = acos(-1.0);
#define eps 1e-7
const int N = 110;
ll n, a[N][N][N], q;
void solve()
{
    ll i, j, k;
    scanf("%lld", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            for (k = 1; k <= n; k++)
            {
                scanf("%lld", &a[i][j][k]);
                a[i][j][k] += a[i][j][k - 1];
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            for (k = 1; k <= n; k++)
            {
                a[i][j][k] += a[i][j - 1][k];
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            for (k = 1; k <= n; k++)
            {
                a[i][j][k] += a[i - 1][j][k];
            }
        }
    }
    scanf("%lld", &q);
    while (q--)
    {
        ll x1, x2, y1, y2, z1, z2;
        scanf("%lld%lld%lld%lld%lld%lld", &x1, &x2, &y1, &y2, &z1, &z2);
        ll ans = a[x2][y2][z2];
        ans -= a[x1 - 1][y2][z2];
        ans -= a[x2][y1 - 1][z2];
        ans -= a[x2][y2][z1 - 1];
        ans += a[x1 - 1][y1 - 1][z2];
        ans += a[x1 - 1][y2][z1 - 1];
        ans += a[x2][y1 - 1][z1 - 1];
        ans -= a[x1 - 1][y1 - 1][z1 - 1];
        printf("%lld\n", ans);
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