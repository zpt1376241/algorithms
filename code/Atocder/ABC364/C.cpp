#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define lowbit(x) ((x) & (-x))
const int maxn = 1e6 + 5;
const int mod = 998244353;
bool cmp1(PII a, PII b)
{
    return a.first > b.first;
}
bool cmp2(PII a, PII b)
{
    return a.second > b.second;
}
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<PII> s(n + 1);
    for (int i = 1; i <= n;i++)
        cin >> s[i].first;
    for (int i = 1; i <= n;i++)
        cin >> s[i].second;
    int ans = 0, sum = 0;
    sort(s.begin()+1, s.end(), cmp1);
    for (int i = 1; i <= n;i++)
    {
        sum += s[i].first;
        ans++;
        if(sum>x)
            break;
    }
    int t=0;
    sum = 0;
    sort(s.begin()+1, s.end(), cmp2);
    for (int i = 1; i <= n;i++)
    {
        sum += s[i].second;
        t++;
        if(sum>y)
            break;
    }
    ans = min(ans, t);
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