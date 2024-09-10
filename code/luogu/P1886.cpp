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

    vector<int> a(n+1);
    deque<int> q;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        while (!q.empty() && a[q.back()] > a[i])
            q.pop_back();
        q.push_back(i);
        if (i >= m)
        {
            while (!q.empty() && q.front() <= i - m)
                q.pop_front();
            cout << a[q.front()] << ' ';
        }
    }

    cout << endl;
    
    q.clear();

    for (int i = 1; i <= n; i++)
    {
        while (!q.empty() && a[q.back()] < a[i])
            q.pop_back();
        q.push_back(i);
        if (i >= m)
        {
            while (!q.empty() && q.front() <= i - m)
                q.pop_front();
            cout << a[q.front()] << ' ';
        }
    }

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