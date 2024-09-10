#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const int mod = 998244353;
void solve()
{
    int m, s, c;
    cin >> m >> s >> c;
    vector<int> a(c), b(c);
    int ans = 0;
    for (int i = 0; i < c; i++)
        cin >> a[i];
    if (m >= c)
    {
        cout << c << endl;
        return;
    }

    sort(a.begin(), a.end());
    ans = *(a.end()-1) - *a.begin()+1;
    for (int i = 1; i < s; i++)
        b[i] = a[i] - a[i - 1]  - 1;
    sort(b.begin(), b.end(), greater<int>());
    for (int i = 0; i < m-1; i++)
        ans -=b[i];
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // int T = 1;
    //  cin >> T;
    // while (T--)
    //{
    solve();
    //}

    return 0;
}