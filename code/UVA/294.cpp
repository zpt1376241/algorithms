#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e6 + 5;
const int mod = 998244353;
typedef long long LL;
int isprime[maxn], prime[maxn], pn = 0, factor[maxn], pf = 0;
int n, L, U;
void getPrime()
{
    fill(isprime, isprime + maxn, 1);
    for (LL i = 2; i < maxn; ++i)
    {
        if (isprime[i])
            prime[pn++] = i;
        for (int j = 0; j < pn && i * prime[j] < maxn; ++j)
        {
            isprime[i * prime[j]] = 0;
            if (i % prime[j] == 0)
                break;
        }
    }
}
int cnt(int x)
{
    pf = 0;
    for (int i = 0; i < pn; ++i)
    {
        int t = 0;
        while (x % prime[i] == 0)
        {
            x /= prime[i];
            ++t;
        }
        if (t != 0)
            factor[pf++] = t;
        if (x == 1)
            break;
    }
    if (x > 1)
    {
        factor[pf++] = 1;
    }
    int ans = 1;
    for (int i = 0; i < pf; ++i)
    {
        ans *= (factor[i] + 1);
    }
    return ans;
}
void solve()
{
    getPrime();
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d", &L, &U);
        int ans = 0, divid = 0;
        for (int i = L; i <= U; ++i)
        {
            int t = cnt(i);
            if (t > divid)
            {
                ans = i;
                divid = t;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", L, U, ans, divid);
    }
}
signed main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    //cout.tie(nullptr);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}
