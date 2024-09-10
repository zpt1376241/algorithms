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
    double r1, r2, s1, s2;
    cin >> r1 >> r2 >> s1 >> s2;
    if(r1==1&&r2==1)
    {
        cout << "SAME" << endl;
        return;
    }
    else if(r1==1)
    {
        cout << "TAOYUAN" << endl;
        return;
    }
    else if(r2==1)
    {
        cout << "JAKARTA" << endl;
        return;
    }
    s1 *= 100, s2 *= 100;
    double k1 = s1 * (r2 - 1), k2 = s2 * (r2 - 1);
    if(k1==k2)
        cout << "SAME" << endl;
    else if(k1>k2)
        cout << "TAOYUAN" << endl;
    else if(k1<k2)
        cout << "JAKARTA" << endl;
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