#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
using ld = long double;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
double PI = acos(-1.0);
#define eps 1e-6
const int maxn = 1e6 + 5;
const int mod = 998244353;
void solve()
{
    double a[5], b[5], len[10], v[5][5];
    for (int i = 1; i <= 4; i++)
        cin >> a[i] >> b[i];
    len[1] = ((a[1] - a[2]) * (a[1] - a[2]) + (b[1] - b[2]) * (b[1] - b[2]));
    len[2] = ((a[2] - a[3]) * (a[2] - a[3]) + (b[2] - b[3]) * (b[2] - b[3]));
    len[3] = ((a[3] - a[4]) * (a[3] - a[4]) + (b[3] - b[4]) * (b[3] - b[4]));
    len[4] = ((a[4] - a[1]) * (a[4] - a[1]) + (b[4] - b[1]) * (b[4] - b[1]));
    v[1][1] = a[2] - a[1];
    v[1][2] = b[2] - b[1];
    v[2][1] = a[3] - a[2];
    v[2][2] = b[3] - b[2];
    v[3][1] = a[4] - a[3];
    v[3][2] = b[4] - b[3];
    v[4][1] = a[1] - a[4];
    v[4][2] = b[1] - b[4];
    if (fabs((v[1][1] / v[2][1]) - (v[1][2] / v[2][2])) < eps || fabs((v[2][1] / v[3][1]) - (v[2][2] / v[3][2])) < eps || fabs((v[3][1] / v[4][1]) - (v[3][2] / v[4][2])) < eps || fabs((v[4][1] / v[1][1]) - (v[4][2] / v[1][2])) < eps)
    {
        cout << "none" << endl;
        return;
    }
    if (v[1][1] * v[2][1] + v[1][2] * v[2][2] == 0 && v[2][1] * v[3][1] + v[2][2] * v[3][2] == 0 && v[3][1] * v[4][1] + v[3][2] * v[4][2] == 0)
    {
        if (len[1] == len[2] && len[2] == len[3] && len[3] == len[4] && len[4] == len[1])
        {
            cout << "square" << endl;
            return;
        }
        cout << "rectangle" << endl;
        return;
    }
    else if (len[1] == len[2] && len[2] == len[3] && len[3] == len[4])
    {
        cout << "rhombus" << endl;
        return;
    }
    else if (fabs((v[1][1] / v[3][1]) - (v[1][2] / v[3][2])) < eps && fabs((v[2][1] / v[4][1]) - (v[2][2] / v[4][2])) < eps)
    {
        cout << "parallelogram" << endl;
        return;
    }
    else if (fabs((v[1][1] / v[3][1]) - (v[1][2] / v[3][2])) < eps || fabs((v[2][1] / v[4][1]) - (v[2][2] / v[4][2])) < eps)
    {
        cout << "trapezium" << endl;
        return;
    }
    else
    {
        sort(len + 1, len + 5);
        if (len[1] == len[2] && len[3] == len[4])
        {
            cout << "kite" << endl;
            return;
        }
        else
        {
            cout << "none" << endl;
        }
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // cout << fixed;
    // cout.precision(18);
    int T = 1;
    //cin >> T;
    while (T--)
        solve();
    return 0;
}