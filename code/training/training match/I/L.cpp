#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const ll mod = 1e9 + 7;
void solve()
{
    int n, m, ans = 1;
    cin >> n >> m;
    if (m > n + 9)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = n; i <= m; i++)
    {
        int t = i;
        while (t)
        {
            int k = t % 10;
            t /= 10;
            ans *= k;
            ans %= mod;
            if (ans == 0)
            {
                cout << ans << endl;
                return;
            }
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}