#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const int mod = 1e4;
void solve()
{
    int ans = 0, t;
    stack<int> st;
    char ch;
    cin >> ans;
    st.push(ans);
    while(cin>>ch>>t)
    {
        if(ch=='*')
        {
            t = st.top() * t % mod;
            st.pop();
            st.push(t);
        }
        else if(ch=='+')
        {
            st.push(t%mod);
        }
    }
    ans = 0;
    while(st.size())
    {
        ans += st.top();
        ans %= mod;
        st.pop();
    }
    cout << ans << endl;
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