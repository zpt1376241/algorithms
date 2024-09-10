#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
#define eps 1e-7
double PI = acos(-1.0);
const int maxn = 1e6 + 5;
const int mod = 998244353;
void solve()
{
    int n, m;
    cin >> n >> m;
    int k = 0, t = 0;   // t²ãÊý
    for (int i = 0, sum = 0; sum < n;i++)
    {
        sum += pow(2, i);
        t++;
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