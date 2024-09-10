#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const ll mod = 998244353;
void solve()
{
    int n;
    cin >> n;
    vector<int> s(n + 1), sum(n + 1), jian(n + 1), ss(n + 1);
    for (int i = 1; i <= n;i++)
        cin >> s[i];
    sum[n] = s[n] + s[1];
    jian[n] = s[n] - s[1];
    for (int i = 1; i <= n-1;i++)
    {
        sum[i] = s[i] + s[i + 1];
        jian[i] = s[i] - s[i + 1];
        ss[i]=sum[i] - jian[i];
    }
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