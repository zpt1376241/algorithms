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
const int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const int maxn = 2e8 + 5;
const int mod = 998244353;
const int N = 1011;
int l, r, m;

int fast_Pow(int a, int n, int mod)
{
    int ans = 1 % mod;
    a %= mod;
    while (n)
    {
        if (n & 1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        n >>= 1;
    }
    return ans;
}
int f(int x)
{
    return fast_Pow(2, (x - 1) / 2, m);
}
void solve()
{
    int ans = 0;
    cin >> l >> r >> m;

    if (l % 2 == 0)
    {
        ans = (ans + f(l) % m) % m;
        l++;
    }
    if (r % 2 == 1)
    {
        ans = (ans + f(r) % m) % m;
        r--;
    }

    int n = (r - l + 1) / 2;
    if (n > 0)
    {
        int k = f(l);
        ans = ans + (k * (fast_Pow(2, n, m) - 1) % m) * 2 % m;
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}