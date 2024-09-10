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
int a[N], ans[N];
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i1 = 1; i1 <= a[1]; i1++)
        for (int i2 = 0; i2 <= a[2]; i2++)
            for (int i3 = 0; i3 <= a[3]; i3++)
                for (int i4 = 0; i4 <= a[4]; i4++)
                    for (int i5 = 0; i5 <= a[5]; i5++)
                        for (int i6 = 0; i6 <= a[6]; i6++)
                            for (int i7 = 0; i7 <= a[7]; i7++)
                                for (int i8 = 0; i8 <= a[8]; i8++)
                                    if ((i1 + i2 + i3 + i4 + i5 + i6 + i7 + i8) % k == 0)
                                    {
                                        ans[1] = i1;
                                        ans[2] = i2;
                                        ans[3] = i3;
                                        ans[4] = i4;
                                        ans[5] = i5;
                                        ans[6] = i6;
                                        ans[7] = i7;
                                        ans[8] = i8;
                                        bool flag = true;
                                        for (int i = 1; i <= n; i++)
                                        {
                                            if (ans[i] == 0)
                                            {
                                                flag = false;
                                                break;
                                            }
                                        }
                                        if (flag)
                                        {
                                            for (int i = 1; i <= n; i++)
                                                cout << ans[i] << ' ';
                                            cout << endl;
                                        }
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