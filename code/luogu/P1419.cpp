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
int n, s, t;
double a[maxn], sum[maxn];
bool check(int mid)
{
    for (int i = 1; i <= n;i++)
        sum[i] = sum[i - 1] + a[i] - mid;
    deque<int> q;
    
}
void solve()
{
    cin >> n >> s >> t;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    double l = *min_element(a + 1, a + n + 1), r = *max_element(a + 1, a + n + 1);
    while (r - l > eps)
    {
        double mid = l + (r - l) / 2;
        if (check(mid))
            l = mid;
        else
            r = mid;
    }
    printf("%.3lf\n", l);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}