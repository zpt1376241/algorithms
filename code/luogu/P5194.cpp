#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 5;
int n, m, ans = 0;
int a[N], sum[N];
void dfs(int cur, int res)
{
    if (sum[cur] + res <= ans)
        return;
    ans = max(ans, res);
    for (int i = cur; i; i--)
        if (res + a[i] <= m)
            dfs(i - 1, res + a[i]);
}
signed main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > m)
        {
            n = i - 1;
            break;
        }
        sum[i] = sum[i - 1] + a[i];
    }
    dfs(n, 0);
    cout << ans << endl;
}