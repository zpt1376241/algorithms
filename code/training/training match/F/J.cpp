#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        LL ans = 0;
        int cnt0 = 0;
        cin >> n >> m;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
                cnt0++;
            else
                v.push_back(x);
        }
        if (m == n)
        {
            cout << "Richman" << endl;
            continue;
        }
        else if (cnt0 > m)
        {
            cout << "Impossible" << endl;
            continue;
        }
        else
        {
            m -= cnt0;
            int i;
            for (i = 0; i < m; i++)
            {
                ans += v[i];
            }
            ans += *min_element(v.begin() + i, v.end()) - 1;
            cout << ans << endl;
        }
    }
    return 0;
}