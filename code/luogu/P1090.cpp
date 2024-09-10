#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e6 + 5;
const ll mod = 998244353;
void solve()
{
    int n, ans = 0;
    priority_queue<int, vector<int>, greater<int>> p;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        p.push(t);
    }
    while (p.size() != 1)
    {
        int a = p.top();
        p.pop();                        
        int b = p.top();
        p.pop();
        ans += a + b;
        p.push(a + b);
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