// #pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define lowbit(x) ((x) & (-x))
const int maxn = 1e6 + 5;
const int mod = 998244353;
void solve()
{
    int n;
    cin >> n;
    vector<string> s(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 1; i <= n -2; i++)
    {
        if (s[i] == "sweet" && s[i + 1] == "sweet")
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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