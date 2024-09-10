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
    int n, m, ans = 0;
    cin >> n >> m;
    set<int> s;
    queue<int> q;
    while (m--)
    {
        int t;
        cin >> t;
        if (s.count(t))
            continue;
        s.insert(t);
        q.push(t);
        if (q.size() > n)
        {
            s.erase(q.front());
            q.pop();
        }
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