#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1050;
const int mod = 998244353;
int s[maxn];
void init()
{
    for (int i = 1; i <= maxn;i++)
        s[i] = i;    
}
int find(int x)
{
    return x == s[x] ? x : find(s[x]);
}
void merge(int x,int y)
{
    x = find(x);
    y = find(y);
    if(x!=y)
        s[x] = s[y];
}
void solve()
{
    int n, m;
    cin >> n >> m;
    init();
    for (int i = 1; i <= m;i++)
    {
        int x, y;
        cin >> x >> y;
        merge(x, y);
    }
    int ans = 0;
    for (int i = 1; i <= n;i++)
    {
        if(s[i]==i)
            ans++;
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}