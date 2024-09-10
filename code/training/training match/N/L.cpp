#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
#define eps 1e-7
double PI = acos(-1.0);
const int maxn = 1e6 + 5;
const int mod = 998244353;
void solve()
{
    int n;
    cin >> n;
    vector<int> x(n + 1), y(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i];
    sort(x.begin() + 1, x.end());
    sort(y.begin() + 1, y.end());
    if (n & 1)
        cout << x[n / 2 + 1] << ' ' << y[n / 2 + 1] << endl;
    else
        cout << x[n / 2] << ' ' << y[n / 2] << endl;
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