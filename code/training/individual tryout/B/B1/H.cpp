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
    vector<int> a(maxn);
    deque<int> q;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        while (q.size() && a[i] <= a[q.back()])
            q.pop_back(); 
        while (q.size() && i - q.front() >= m)
            q.pop_front();
        q.push_back(i);
        if (i >= m)
            cout << a[q.front()] << endl;
    }
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