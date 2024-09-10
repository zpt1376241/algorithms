#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e6 + 5;
const int mod = 998244353;
double PI = acos(-1.0);
#define eps 1e-7
int n, m;
double p;
long double f(long double k)
{
    long double s = 0;
    s = (k * n + m) / (1 - pow(1.0 - p, k));
    return s;
}
void solve()
{
    cin >> n >> m >> p;
    p *= (1e-4);
    double l = 1, r = inf;
    double mid1, mid2;
    while(l<r)
    {
        double k = (r - l) / 3.0;
        mid1 = l + k, mid2 = r - k;
        if (f(mid1) > f(mid2))
            l = mid1 + 1;
        else
            r = mid2 - 1;
    }
    printf("%.10Lf\n", l);
}
signed main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}