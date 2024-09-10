#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const int mod = 998244353;
int len;
string pre, in;
void dfs(int b1, int e1, int b2, int e2)
{
    if (b1 > e1)
        return;
    int k = b2;
    while (in[k] != pre[b1])
        k++;
    int res = k - b2;
    dfs(b1 + 1, b1 + res, b2, b2 + res - 1);
    dfs(b1 + res + 1, e1, k + 1, e2);
    printf("%c", pre[b1]);
}
void solve()
{
    while (cin >> pre)
    {
        cin >> in;
        len = pre.size();
        dfs(0, len - 1, 0, len - 1);
        printf("\n");
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //int T = 1;
    // cin >> T;
    //while (T--)
    //{
    solve();
    //}

    return 0;
}