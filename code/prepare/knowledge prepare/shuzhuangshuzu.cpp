#include <bits/stdc++.h>
using namespace std;
#define lowbit(x) ((x) & (-x))
const int N = 1011;
int tree[N];
void update(int x,int d)    //单点修改: 修改元素a[x], a[x]=a[x]+d
{
    for (int i = x; i <= N;i+=lowbit(i))
        tree[i] += d;
}
int sum(int x)        // 前缀和: sum=a[1]+a[2]+...+a[x]
{
    int res = 0;
    for (int i = x; i;i-=lowbit(i))
        res += tree[i];
    return res;
}
int ask(int l, int r)       //区间查询
{
    return sum(r) - sum(l - 1);
}
void solve()
{
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