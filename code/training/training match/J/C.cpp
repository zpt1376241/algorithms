#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

int s;

bool ok(double mid)
{
    int ans = 0;
    double r = mid;
    for (int i = 1; i <= r; i++)
    {
        ans += (int)sqrt(r * r - i * i);
    }
    if (ans * 4 >= s)
    {
        return true;
    }
    return false;
}

void solve()
{
    cin >> s;
    s++;
    double l = 0, r = 1e5;
    double ans;

    while ((r - l) > 1e-11)
    {
        double mid = (l + r) / 2;
        if (ok(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    printf("%.10Lf\n", l);
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