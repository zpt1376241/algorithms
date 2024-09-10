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
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(b>=c)
    {
        c += 24;
        a += 24;
    }
    if(a>=b&&a<=c)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
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