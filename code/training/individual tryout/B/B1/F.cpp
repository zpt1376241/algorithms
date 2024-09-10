#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const ll mod = 998244353;
void solve()
{
    int n;
    cin >> n;
    vector<int> s;
    set<int> a;
    for (int i = 1; i <= n;i++)
    {
        int t;
        cin >> t;
        if(!a.count(t))
        {
            a.insert(t);
            s.push_back(t);
        }
    }
    for (int i = 0; i < s.size()-1;i++)
        cout << s[i] << ' ';
    cout << s[s.size() - 1];
    cout << endl;
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