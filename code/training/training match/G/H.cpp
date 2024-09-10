// #pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define lowbit(x) ((x) & (-x))
const int maxn = 1e6 + 5;
const int mod = 998244353;
int div(vector<int> &A, int b, int ans)
{
    vector<int> C;
    int r = 0;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        r = r * 10 + A[i];
        C.push_back(r / b);
        r %= b;
    }
    reverse(C.begin(), C.end());
    while (C.size() > 1 && C.back() == 0)
        C.pop_back();
    if(A.size()==1&&A[0]==0)
        return ans ;
    return div(C,6,++ans);
}
void solve()
{
    string s;
    vector<int> A;
    cin >> s;
    for (int i = 0; i < s.size();i++)
        A.push_back(s[i] - '0');
    cout<<div(A,6,0)<<endl;
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