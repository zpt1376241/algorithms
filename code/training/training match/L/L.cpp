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
    string s;
    string a, b;
    cin >> s;
    bool flag = false;
    stack<char> st;
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push('(');
            a += "(";
        }
        else if (s[i] == ')')
        {
            st.pop();
            a += ")";
            if (st.empty())
            {
                flag = true;
                break;
            }
        }
    }
    i++;
    for (; i < s.length(); i++)
        b += s[i];
    if (flag && a != b)
    {
        string ans;
        for (int i = 1; i <= s.length() / 2 - 2; i++)
        {
            ans += "()";
        }
        ans += "(())";
        cout << ans << endl;
    }
    else
        puts("no");
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