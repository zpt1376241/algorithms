#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define lowbit(x) ((x) & (-x))
const int maxn = 1e6 + 5;
const int mod = 998244353;
char f(char m)
{
    if (m == 'R')
        return 'P';
    if (m == 'P')
        return 'S';
    return 'R';
}
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<char> T(n);
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        char m = f(s[i]);
        if (i == 0 || m != T[i - 1])
        {
            T[i] = m;
            ans++;
        }
        else
        {
            T[i] = (m == 'P') ? 'R' : (m == 'R' ? 'S' : 'P');
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