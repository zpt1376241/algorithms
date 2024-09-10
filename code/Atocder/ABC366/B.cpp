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
char s[101][101];
void solve()
{
    int n, m = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        m = max((int)strlen(s[i]), m);
    }
    for (int i = 0; i < m; i++)
    {
        bool flag = false;
        for (int j = 1; j <= n; j++)
        {
            if (s[j][i] != '\0' && !flag)
                flag = true;
            else if (s[j][i] == '\0' && flag)
                s[j][i] = '*';
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = n; j >= 1; j--)
            if(s[j][i])
                cout << s[j][i];
        cout << endl;
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
        solve();
    return 0;
}