#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
using ld = long double;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
#define lowbit(x) ((x) & (-x))
double PI = acos(-1.0);
#define eps 1e-7
const int maxn = 1e6 + 5;
const int mod = 998244353;
const int N = 1011;
bool Prime(int x)
{
    if (x == 1)
        return false;
    if ((x & 1) == 0 && x != 2)
        return true;
    for (int i = 3; i < x; i++)
    {
        int k = x / i;
        if (k * i == x)
            return true;
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), s(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    int ans = maxn;
    for (int i = 1; i <= n; i++)
    {
        if (Prime(a[i]))
        {
            cout << 0 << endl;
            return;
        }
        for (int j = i-1; j >=0&&j>=i-4; j--)
        {
            if (Prime(s[i] - s[j]))
                ans = min(ans, i - j - 1);
        }
    }
    if (ans != maxn)
        cout << ans << endl;
    else
        cout << -1 << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout.precision(18);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}