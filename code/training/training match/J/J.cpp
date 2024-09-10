#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e6 + 5;
const int mod = 998244353;
void solve()
{
    int n;
    cin >> n;
    vector<PII> s(n + 1);
    vector<int> ans(n + 1);
    for (int i = 1; i <= n;i++)
    {
        cin >> s[i].first;
        int t;
        cin >> t;
        s[i].second = s[i].first + t;
    }
    for (int i = 1; i <= n;i++)
    {
        for (int j = 1; j <=n ; j++)
        {
            if(s[j].first<=s[i].first&&s[j].second>=s[i].second&&j!=i)
                ans[i] = ans[j] + 1;
        }
    }
    for (int i = 1; i <= n;i++)
        cout << ans[i] << ' ';
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