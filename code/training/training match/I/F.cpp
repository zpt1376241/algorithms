#include <bits/stdc++.h>
#define int long long
using namespace std;
void slove()
{
    int x, y, z;
    cin >> x >> y >> z;
    int k = x + y - z;
    if (k <= 0 || k <= x || k <= z)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        cout << k << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        slove();
    return 0;
}