#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e6 + 5;
const int mod = 998244353;
int t[55];
struct Node
{
    int num; 
    int time;
    bool operator<(Node n)
    {
        return num < n.num || (num == n.num && time < n.time);
    }
} dp[maxn];
void solve()
{
    int C, n, T, i, j;
    cin >> C;
    int Case = 0;
    while (Case++ < C)
    {
        cin >> n >> T;
        for (i = 0; i < n; i++)
        {
            cin >> t[i];
        }
        T--;
        memset(dp, 0, sizeof(dp));
        for (i = 0; i < n; i++)
        {
            for (j = T; j >= t[i]; j--)
            {
                Node temp;
                temp.num = dp[j - t[i]].num + 1;
                temp.time = dp[j - t[i]].time + t[i];
                if (dp[j] < temp)
                    dp[j] = temp;
            }
        }
        cout << "Case " << Case << ": " << dp[T].num + 1 << ' ' << dp[T].time + 678 << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}