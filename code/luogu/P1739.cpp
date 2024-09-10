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
    char ch;
    stack<char> st;
    while(cin>>ch&&ch!='@')
    {
        if (ch == '(')
            st.push(ch);
        else if(ch==')')
        {
            if(st.size()==0)
            {
                cout << "NO" << endl;
                return; 
            }
            st.pop();
        }        
    }
    if(st.size()!=0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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