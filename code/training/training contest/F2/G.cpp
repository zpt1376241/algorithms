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
int n, ans;
unordered_map<int, vector<int> > mp;
void init()
{
    mp.clear();
    ans = 0;
}
void solve()
{
    init();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        mp[i - t].push_back(t);
    }
    for (auto &p : mp)
    {
        auto &vec = p.second;
        sort(vec.begin(), vec.end(), greater<int>() );
        for (auto i = 0; i < vec.size() - 1; i += 2)
        {
            int t = vec[i] + vec[i + 1];
            if (t > 0)
                ans += t;
            else
                break;
        }
    }
    cout << ans << endl;
}
// 1 2 3 4 5 6 7 8 9
// 3 -5 5 6 7 -1 9 1 2
// 2 -7 2 2 2 -7 2 -7 -7
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