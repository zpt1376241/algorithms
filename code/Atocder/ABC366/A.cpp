#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e6 + 5;
const int mod = 998244353;
double PI = acos(-1.0);
#define eps 1e-7
void solve()
{
    int N, a, b;
    cin >> N >> a >> b;
    int t = N - a - b;
    int x = max(a, b), y = min(a, b);
    if(x>y+t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}