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
    int n, k;
    cin >> n >> k;
    if(k==0)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i <= n;i++)
    {
        if(i<k)
        {
            cout << i + 1;
        }
        else if(i==k)
        {
            cout << 1;
        }
        else
        {
            cout << i;
        }
        if(i!=n)
            cout << ' ';
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