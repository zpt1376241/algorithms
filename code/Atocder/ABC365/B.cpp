#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define lowbit(x) ((x) & (-x))
const int maxn = 1e6 + 5;
const int mod = 998244353;
bool cmp(PII &a,PII &b)
{
    return a.first > b.first;
}
void solve()
{
    int n;
    cin >> n;
    vector<PII> s(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].first;
        s[i].second = i + 1;
    }
    sort(s.begin(), s.end(), cmp);
    cout << s[1].second << endl;
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