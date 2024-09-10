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
    int n, m;
    cin >> n >> m;
    queue<int> q;
    for (int i = 1; i <= n;i++)
        q.push(i);
    while(q.size()!=1)
    {
        for (int i = 1; i < m;i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() <<' ';
        q.pop();
    }
    cout << q.front();
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