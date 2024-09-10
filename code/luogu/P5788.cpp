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
    vector<int> a(n + 1), ans(n + 1);
    stack<int> st;
    for (int i = 1; i <= n;i++)
        cin >> a[i];
    for (int i = n; i >= 1;i--)
    {
        while(!st.empty()&&a[st.top()]<=a[i])
            st.pop();
        if(st.empty())
            ans[i] = 0;
        else
            ans[i] = st.top();
        st.push(i);
    }
    for (int i = 1; i <= n;i++)
        cout << ans[i] << " ";
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