#include <bits/stdc++.h>
using namespace std;
#define int long long
int ten(int x) { return x == 0 ? 1 : ten(x - 1) * 10; }
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
        int t = 9 * ten(x-1);
        if (n <= t)
        {
            string s= to_string(ten(x-1)+n-1);
            s.resize(i,'0');
            for (int j = x; j < (int)s.size();j++)
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
    //int T = 1;
    // cin >> T;
    // while (T--)
    //{
    solve();
    //}

    return 0;
}