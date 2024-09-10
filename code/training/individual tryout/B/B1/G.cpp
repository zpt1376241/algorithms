#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const ll mod = 998244353;
int s[maxn];
int q[maxn];
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> s[i];
    int a = 0, b = 1;
    for (int i = 1; i <= n; ++i)
    {
        while (a <= b && q[a] + k <= i)
            a++;
        while (a <= b && s[q[b]] < s[i])
            b--;
        q[++b] = i;
        if (i >= k)
            cout << s[q[a]] << endl;
    }
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