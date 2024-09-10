#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
using ld = long double;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
double PI = acos(-1.0);
#define eps 1e-7
const int maxn = 1e6 + 5;
const int mod = 998244353;
void solve()
{
    int n, m, k = maxn;
    cin >> n >> m;
    vector<int> s(n + 1);
    int sum = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        sum += s[i];
        if (sum >= n * m && flag)
        {
            k = i;
            flag = !flag;
        }
    }
    if (s[0] >= n * m)
    {
        cout << "impossible" << endl;
        return;
    }
    sum = 0;
    int ans = 0, t = maxn;
    for (int i = 0; i < min(k, n); i++)
    {
        sum += s[i];
        if (sum < m)
        {
            ans = i;
            break;
        }
        else if (sum/m<t)
        {
            ans = i;
            t = sum / m;
        }
        sum -= m;
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout.precision(18);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}