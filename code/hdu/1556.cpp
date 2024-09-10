#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e5 + 5;
const int mod = 998244353;
double PI = acos(-1.0);
#define eps 1e-7
int a[maxn], d[maxn];
void solve()
{
    int n;
    while (~scanf("%lld", &n) && n)
    {
        memset(a, 0, sizeof a);
        memset(d, 0, sizeof d);
        for (int i = 1; i <= n; i++)
        {
            int l, r;
            scanf("%lld %lld", &l, &r);
            d[l]++;
            d[r + 1]--;
        }
        for (int i = 1; i <= n; i++)
        {
            a[i] = a[i - 1] + d[i];
            if (i != n)
                printf("%lld ", a[i]);
            else
                printf("%lld", a[i]);
        }
        printf("\n");
    }
}
signed main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}