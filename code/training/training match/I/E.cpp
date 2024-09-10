#include <bits/stdc++.h>
#define int long long
using namespace std;
void slove()
{
    string s;
    int l, k;
    cin >> l >> k >> s;
    int ans = 0;
    for (int i = 0; i < l;)
    {
        if (s[i] == '1')
        {
            ans++;
            i += k;
            //cout << "i: " << i << endl;
        }
        else
        {
            i++;
            //cout << "i: " << i << endl;
        }
    }
    cout << ans << endl;
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