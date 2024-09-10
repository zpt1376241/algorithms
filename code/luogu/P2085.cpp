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
    int n, m, a, b, c, t;
    cin >> n >> m;
    priority_queue<int, vector<int>, less<int> > p;
    cin >> a >> b >> c;
    for (int i=1; i <=m ;i++)
        p.push(a * i * i + b * i + c);
    while(--n)
    {
        cin >> a >> b >> c;
        for (int i = 1; i <= m;i++)
        {
            t = a * i * i + b * i + c;
            if(t<p.top())
            {
                p.push(t);
                p.pop();
            }
            else
                break;
        }
    }
    vector<int> ans(m + 1);
    for (int i = m; i >= 1;i--)
    {
        ans[i] = p.top();
        p.pop();
    }
    for (int i = 1; i <= m;i++)
        cout << ans[i] << ' ';
    cout << endl;
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