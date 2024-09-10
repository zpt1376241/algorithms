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

//"----------------------     code     --------------------------"
void solve()
{
    int p, x, k;
    cin >> p >> x >> k;
    int cnt = 0;
    for (int i = 1; i <= x; i++)
    {
        int mu = i;
        int fen = p;
        if (p % i == 0)
        {
            cnt++;
            // cout << i<<" --- ";
            continue;
        }
        else if (p > i)
        {
            fen = p - (p / i * i);
        }
        int g = gcd(fen, mu);
        fen = fen / g;
        mu = mu / g;

        if (mu == k)
        {
            cnt++;
            // cout << i << "--";
            continue;
        }
        else if (gcd(mu, k) == 1)
        {
            // cout << gcd(mu, k) << endl;
            continue;
        }
        else if (gcd(mu, k) == mu or gcd(mu, k) == k)
        {
            cnt++;
            //	cout << i << "--";
            continue;
        }
        else
        {
            int c = mu;
            while (1)
            {
                c /= gcd(c, k);
                if (gcd(c, k) == c or gcd(c, k) == k)
                {
                    cnt++;
                    // cout << i<<"++";
                    break;
                }
                if (gcd(c, k) == 1)
                    break;
            }
        }
    }
    cout << cnt;
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