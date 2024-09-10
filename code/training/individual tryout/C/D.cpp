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
    int l, n, m;
    cin >> l >> n >> m;
    vector<int> s, p;
    s.push_back(0);
    for (int i = 1; i <= n;i++)
    {
        int t;
        cin >> t;
        s.push_back(t);
    }
    s.push_back(l);
    for (int i = 1; i < s.size();i++)
        p.push_back(s[i] - s[i - 1]);
    
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