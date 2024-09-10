#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const ll mod = 998244353;
ll m = 9223372036854775807;
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    n--;
    for (int i = 1;; i++)
    {
        int x = (i + 1) / 2;
        int t = 9 * pow(10, x - 1);
        if (n <= t)
        {
            string s= to_string(pow(10,x-1)+n-1);
            s.resize(i,'0');
            for (int j = x; j < s.size();j++)
                s[j] = s[i - j - 1];
            cout << s << endl;
            return;
        }
        else
        {
            n -= t;
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
    // while (T--)
    //{
    solve();
    //}

    return 0;
}
