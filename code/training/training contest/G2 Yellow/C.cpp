#include <bits/stdc++.h>
using namespace std;
#define int long long
// #define int __int128
typedef unsigned long long ull;
using ld = long double;
inline int read();
inline void write(int);
#define inf 0x3f3f3f3f         // 0x7fffffff 2147483647
#define INF 0x3f3f3f3f3f3f3f3f // 0x7fffffffffffffff 9223372036854775807
#define lowbit(x) ((x) & (-x))
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define PII pair<int, int>
#define fi first
#define se second
#define mem(x, y) memset(x, y, sizeof(x))
#define endl '\n'
const double PI = acos(-1.0);
#define eps 1e-7
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define debug(x) cerr << #x << ": " << x << endl;
const int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const int maxn = 1e6 + 5;
const int mod = 998244353;
const int N = 1011;
void solve()
{
    vector<int> ans;
    vector<int> v(10);
    for (int i = 0; i <= 9;i++)
        cin >> v[i];
    for (int i = 1; i <= 9;i++)
    {
        if(v[i])
            ans.push_back(i);
        v[i]--;
    }
    for (int i = 0; i <= 9;i++)
    {
        if(v[i])
        {
            
        }
    }
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

inline int read()
{
    register int x = 0, f = 1;
    register char ch = getchar();
    while (!isdigit(ch))
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (isdigit(ch))
    {
        x = (x << 1) + (x << 3) + (ch ^ '0');
        ch = getchar();
    }
    return x * f;
}

inline void write(int x)
{
    if (x < 0)
        putchar('-'), x = -x;
    if (x > 9)
        write(x / 10);
    putchar(x % 10 + '0');
    return;
}
