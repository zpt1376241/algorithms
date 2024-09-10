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
const int N = 1e6;
int n, m;
int n2;
int go[N][20];
int res[N];
struct peo
{
    int id, l, r;
    bool operator<(const peo a) { return l < a.l; }
} p[N * 2];
void init()
{
    int nxt = 1;
    for (int i = 1; i <= n2; i++)
    {
        while (nxt <= n2 && p[nxt].l <= p[i].r)
            nxt++;
        go[i][0] = nxt - 1;
    }
    for (int i = 1; (1 << i) <= n; i++)
        for (int s = 1; s <= n2; s++)
            go[s][i] = go[go[s][i - 1]][i - 1];
}
void getans(int x)
{
    int len = p[x].l + m, cur = x, ans = 1;
    for (int i = log2(N); i >= 0; i--)
    {
        int pos = go[cur][i];
        if(pos&&p[pos].r<len)
        {
            ans += 1 << i;
            cur = pos;
        }
    }
    res[p[x].id] = ans + 1;
}
void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        p[i].id = i;
        cin >> p[i].l >> p[i].r;
        if (p[i].r < p[i].l)
            p[i].r += m;
    }
    sort(p + 1, p + n + 1);
    n2 = n;
    for (int i = 1; i <= n; i++)
    {
        n2++;
        p[n2] = p[i];
        p[n2].l = p[i].l + m;
        p[n2].r = p[i].r + m;
    }
    init();
    for (int i = 1; i <= n;i++)
        getans(i);
    for (int i = 1; i <= n;i++)
        cout << res[i] << ' ';
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