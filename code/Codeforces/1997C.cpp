#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e6 + 5;
const int mod = 998244353;
double PI = acos(-1.0);
#define eps 1e-7
void solve()
{
    stack<int> st;
    string s;
    int ans = 0, n;
    cin >> n >> s;
    s = " " + s;
    for (int i = 1; i <= s.length(); i++)
    {
        if (i & 1)
        {
            if (st.empty())
                st.push(i);
            else
            {
                ans += i - st.top();
                st.pop();
            }
        }
        else
        {
            if (s[i] == '(')
                st.push(i);
            else
            {
                ans += i - st.top();
                st.pop();
            }
        }
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}