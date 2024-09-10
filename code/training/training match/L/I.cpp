#include <bits/stdc++.h>
using namespace std;
//#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 2e6 + 5;
const int mod = 998244353;
double PI = acos(-1.0);
#define eps 1e-7
set<int> st;
bool vis[maxn];
void solve()
{
    int n, m;
    cin >> n;
    vector<int> s(n + 1);
    for (int i = 1; i <= maxn; i++)
        st.insert(i);
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        st.erase(s[i]);
        vis[s[i]] = true;
    }
    cin >> m;
    while (m--)
    {
        int t;
        cin >> t;
        cout<<*st.lower_bound(t)<<" ";
        vis[*st.lower_bound(t)] = true;
        
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