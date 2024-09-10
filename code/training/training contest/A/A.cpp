#include <bits/stdc++.h>
#include <queue>
#include <unordered_map>
using namespace std;
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl '\n'
#define INF (1 << 29)
const int N = 1e6 + 5;
#define int long long
#define yes "Yes"
#define no "No"
typedef long long ll;
typedef double db;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
const int mod = 1e5 + 3ll;
inline long long read()
{
    long long w = 1;
    long long q = 0;
    char ch = ' ';
    while (ch != '-' && (ch < '0' || ch > '9'))
        ch = getchar();
    if (ch == '-')
        w = -1, ch = getchar();
    while (ch >= '0' && ch <= '9')
        q = q * 10 + ch - '0', ch = getchar();
    return w * q;
}
ll ebs(ll x, ll y)
{
    if (y == 0)
        return 1;
    else
    {
        ll dp = ebs(x, y / 2);
        if (y % 2 == 0)
        {
            return ((dp % mod) * (dp % mod)) % mod;
        }
        else
        {
            return ((dp % mod) * (dp % mod) * (x % mod)) % mod;
        }
    }
}
ll gcd(ll a, ll b)
{ // 最大公约数
    while (b ^= a ^= b ^= a %= b)
        ;
    return a;
}
ll lcm(ll a, ll b)
{ // 最小公倍数
    return a / gcd(a, b) * b;
}
// "----------------------     code     --------------------------"
set<string> mp1, mp2, mp3;
vector<string> a, b, ans;
void solve()
{
    int cnt1 = 0, cnt2 = 0;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        if (!mp1.count(t))
        {
            mp1.insert(t);
            ++cnt1;
            a.push_back(t);
        }
    }

    for (int i = 0; i < m; i++)
    {
        string t;
        cin >> t;
        if (!mp2.count(t))
        {
            mp2.insert(t);
            ++cnt2;
            b.push_back(t);
        }
    }

    for (int i = 1, k = 0, l = 0; i <= cnt1 + cnt2; i++)
    {
        if (i %2 == 1)
        {
            if (!mp3.count(a[k]))
            {
                ans.push_back(a[k]);
                mp3.insert(a[k]);
                k++;
            }
        }
        else if(i%2==0)
        {
            if (!mp3.count(b[l]))
            {
                ans.push_back(b[l]);
                mp3.insert(b[l]);
                l++;
            }
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}
signed main()
{
    IOS;
    int tcase = 1;
    // cin>>tcase;
    while (tcase--)
    {
        solve();
    }
    return 0;
}