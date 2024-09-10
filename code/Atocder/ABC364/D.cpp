#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define lowbit(x) ((x) & (-x))
const int maxn = 1e6 + 5;
const int mod = 998244353;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    sort(s.begin(), s.end());
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        if (a <= s[0])
        {
            cout << s[b - 1] - a << endl;
            continue;
        }
        if (a >= s[n - 1])
        {
            cout << a - s[n - b] << endl;
            continue;
        }
        if (a > s[0] && a < s[n - 1])
        {
            int j;
            for (j = 0; j < n; j++)
            {
                if (s[j] >= a && s[j + 1] <= a)
                    break;
            }
            int len1 = 0, len2 = 0, cnt = 0;
            for (int k = j, p = j + 1;;)
            {
                len1 = a - s[k];
                len2 = s[p] - a;
                cnt++;
                if (cnt == b)
                {
                    cout << min(len1, len2) << endl;
                    continue;
                }
                if (len1 > len2 && cnt < b&&p<n)
                {
                    p++;
                    continue;
                }
                if(len1<len2&&cnt<b&&k>1)
                {
                    k--;
                    continue;
                }
                if(len1==len1)
                {
                    
                }
            }
        }
    }
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