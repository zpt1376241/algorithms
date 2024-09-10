#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define lowbit(x) ((x) & (-x))
const int maxn = 1e6 + 5;
const int mod = 998244353;
int n, c;
int s[maxn];
bool check(int d)
{
    int cnt = 1, p = 0;
    for (int i = 1; i < n;i++)
    {
        if(s[i]-s[p]>=d)
        {
            cnt++;
            p = i;
        }
    }
    if(cnt>=c)
        return true;
    else
        return false;
}
void solve()
{
    cin >> n >> c;
    for (int i = 0; i < n;i++)
        cin >> s[i];
    sort(s, s+n);
    int l = 0, r = s[n - 1];
    while (l<r)
    {
        int mid = l + r >> 1;
        if(check(mid))
            l = mid + 1;
        else
            r = mid;
    }
    cout << l-1 << endl;
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