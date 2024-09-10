#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
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
    int n, a, b, sum1 = 0, sum2 = 0;
    cin >> n >> a >> b;
    vector<int> s(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        sum1 += s[i];
    }
    sort(s.begin() + 1, s.end(), greater<int>());
    for (int i = 1; i <= a + b; i++)
        sum2 += s[i];
    cout << (long double)sum2 / sum1 * 100.0 << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout.precision(20);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}