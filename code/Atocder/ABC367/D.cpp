#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
using ld = long double;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
#define lowbit(x) ((x) & (-x))
double PI = acos(-1.0);
#define eps 1e-7
const int maxn = 1e6 + 5;
const int mod = 998244353;
const int N = maxn;
int p[N], buc[N];
int n, k, a[N];
void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n; i++)
        p[i] = p[i - 1] + a[i - 1];
    int tot = 0, ans = 0;
    for (int i = 1; i <= n; i++)
        tot += a[i];
    for (int i = 1; i <= n; i++)
    {
        ans += buc[p[i] % k];
        ans += buc[((p[i] - tot) % k + k) % k];
        buc[p[i] % k]++;
    }
    printf("%lld\n", ans);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout.precision(18);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}