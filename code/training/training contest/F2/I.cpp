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
const int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const int maxn = 1e6 + 5;
const int mod = 998244353;
const int N = 1011;
int a, b;
int x[7] = {0, 1, 0, 0, 4, 0, 0};
int y[7] = {0, 0, 2, 3, 0, 5, 6};
void solve()
{
    cin >> a >> b;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            for (int k = 1; k <= 6; k++)
            {
                if (x[i] + x[j] + x[k] == a && y[i] + y[j] + y[k] == b)
                {
                    cout << "Yes" << endl;
                    return;
                }
            }
        }
    }
    cout << "No" << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // cout << fixed;
    // cout.precision(18);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}