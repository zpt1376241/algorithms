#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const ll mod = 998244353;
void solve()
{
    int ans = 0, n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n;)
    {
        if (s[i] == 0 && s[i + 1] == 1)
        {
            ans++;
            i += 2;
        }
        else if (s[i] == 1 && s[i + 1] == 0)
        {
            ans++;
            i += 2;
        }
        else
        {
            i++;
        }
    }
    cout << ans << endl;
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