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
void solve();
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    // while (T--)
    //{
    //  solve();
    //}
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> s(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if(s[i]>=m)
            cnt++;
    }
    if(cnt>=k)  
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        cnt = 0;
    }
    sort(s.begin(), s.end());
    cout << m - *(s.end() - k) << endl;

    return 0;
}