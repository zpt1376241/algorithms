#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 2e6 + 5;
const ll mod = 998244353;
int a[maxn];
void solve()
{
    int n, m;
    cin >> n >> m;
    deque<int> s;
    cout << 0 << endl;
    for (int i = 1; i < n;i++)
    {
        scanf("%d", &a[i]);
        while(!s.empty()&&a[s.back()]>a[i])
            s.pop_back();
        s.push_back(i);
        if(i-s.front()>=m)
            s.pop_front();
        printf("%d\n", a[s.front()]);
    }
    cin >> a[n];
}
signed main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}