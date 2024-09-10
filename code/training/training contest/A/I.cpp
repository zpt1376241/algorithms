#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
using ld = long double;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
#define lowbit(x) ((x) & (-x))
double PI = acos(-1.0);
#define eps 1e-7
const int maxn = 1e6 + 5;
const int mod = 998244353;
const int N = 1011;
void solve()
{
    int n;
    string s;
    cin >> s;
    s = " " + s;
    bool flag[4] = {};
    for (int i = 1; i <= n;i++)
    {
        if(!flag[1]&&s[i]>='A'&&s[i]<='Z')
            flag[1] = true;
        if(!flag[2]&&s[i]>='a'&&s[i]<='z')
            flag[2] = true;
        if(!flag[3]&&s[i]>='0'&&s[i]<='9')
            flag[3] = true;
    }
    int ans = 0;
    for (int i = 1; i <= n;i++)
    {
        
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout.precision(18);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}