#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e6 + 5;
const int mod = 998244353;
int h(int n)
{
    int res = 0, m;
    m = sqrt(n);
    for (int i = 1; i <= m; i++)
        res += n / i;
    return (res << 1) - m * m;
}
void solve()
{
    int t, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << h(n) << endl;
    }
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
