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
    int n, op, k;
    set<int> s;
    map<int, int> mp;
    cin >> n;
    while(n--)
    {
        cin >> op;
        if(op==1)
        {
            cin >> k;
            mp[k]++;
            if(!s.count(k))
                s.insert(k);
        }
        else if(op==2)
        {
            cin >> k;
            if(mp[k]==1)
                s.erase(k);
            mp[k]--;
        }
        else if(op==3)
            cout << s.size() << endl;
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