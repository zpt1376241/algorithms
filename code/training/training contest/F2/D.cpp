#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long ull;
using ld = long double;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
#define lowbit(x) ((x) & (-x))
double PI = acos(-1.0);
#define eps 1e-7
const int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const int maxn = 1e6 + 5;
const int mod = 998244353;
const int N = 1011;
int n;
vector<PII> a, b;
bool check(int x)
{
    vector<int> v1, v2;
    for (int i = 1; i <= n; i++)
    {
        if (a[i].first >= x)
            v1.push_back(a[i].first + a[i].second - x);
    }
    for (int i = 1; i <= n; i++)
    {
        if (b[i].first < x)
            v2.push_back(b[i].second);
    }
    if (v1.size() < v2.size())
        return false;
    for (int i = 0; i < v2.size(); i++)
    {
        if (v1[i] < v2[i])
            return false;
    }
    return true;
}
void solve()
{
    cin >> n;
    a.resize(n + 1);
    b.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int v, w;
        cin >> v >> w;
        a[i] = b[i] = PII(v, w);
    }

    sort(a.begin() + 1, a.end(), [](PII &a, PII &b)
         { return a.first + a.second > b.first + b.second; });
    sort(b.begin() + 1, b.end(), [](PII &a, PII &b)
         { return a.second > b.second; });

    int l = min_element(a.begin() + 1, a.end())->first;
    int r = max_element(a.begin() + 1, a.end())->first;

    // int l = a[1].first, r = a[1].first;

    // for (int i = 2; i <= n; i++)
    // {
    //     l = min(l, a[i].first);
    //     r = max(r, a[i].first);
    // }
    while (l < r)
    {
        int mid = (l + r + 1) >> 1;
        if (check(mid))
            l = mid;
        else
            r = mid - 1;
    }
    cout << l << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // cout << fixed;
    // cout.precision(18);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}