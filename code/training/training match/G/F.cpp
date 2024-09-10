// #pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define lowbit(x) ((x) & (-x))
const int maxn = 1e6 + 5;
const int mod = 998244353;
struct team
{
    string na;
    double a, b, c, d, e;
    double k;
} s[7];
bool cmp(team &a,team b)
{
    return a.k > b.k;
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 6;i++)
    {
        cin >> s[i].na >> s[i].a >> s[i].b >> s[i].c >> s[i].d >> s[i].e;
        s[i].k = 0.56 * s[i].a + 0.24 * s[i].b + 0.14 * s[i].c + 0.06 * s[i].d + 0.3 * s[i].e;
    }
    sort(s + 1, s + 8, cmp);

    int ans = n / 6;
    n %= 6;
    for (int i = 0; i < n;i++)
    {
        if (s[i + 1].na == "Taiwan")
            ans++;
    }
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
    {
        solve();
    }

    return 0;
}