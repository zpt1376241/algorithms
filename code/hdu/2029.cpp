#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const int mod = 998244353;
void solve()
{
    string s;
    cin >> s;
    for (int i = 0,j=s.size()-1; i <= s.size()/2;i++,j--)
    {
        if(s[i]!=s[j])
        {
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}