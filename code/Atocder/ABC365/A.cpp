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
    if (n % 4 != 0)
    {
        cout << 365 << endl;
        return;
    }
    if (n % 4 == 0 && n % 100 != 0)
    {
        cout << 366 << endl;
        return;
    }
    if(n%100==0&&n%400!=0)
    {
        cout << 365 << endl;
        return;
    }
    if(n%400==0)
    {
        cout << 366 << endl;
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