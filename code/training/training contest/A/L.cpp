#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
using ld = long double;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
#define lowbit(x) ((x) & (-x))
double PI = acos(-1.0);
#define eps 1e-7
const int maxn = 1e6 + 5;
const int mod = 998244353;
const int N = 1011;
void solve()
{
    vector<string> a;
    vector<string> b;
    vector<string> ans;
    map<string, int> bb;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n;i++)
    {
        string s;
        cin >> s;
        a.push_back(s);
    }
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        b.push_back(s);
    }
    for (int i = 0; i < min(n, m);i++)
    {
        string s1 = a[i];
        string s2 = b[i];
        if(!bb[s1])
            ans.push_back(s1);
        bb[s1]++;
        if (!bb[s2])
            ans.push_back(s2);
        bb[s2]++;
    }
    for (int i = min(n, m); i < max(n, m);i++)
    {
        if (max(n, m)==n)
        {
            string s1 = a[i];
            if (!bb[s1])
                ans.push_back(s1);
            bb[s1]++;
        }
        else
        {
            string s1 = b[i];
            if (!bb[s1])
                ans.push_back(s1);
            bb[s1]++;
        }
    }
    for (int i = 0; i < ans.size();i++)
    {
        cout << ans[i] << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout.precision(18);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}