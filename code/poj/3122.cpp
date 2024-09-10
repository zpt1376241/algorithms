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
double area[maxn];
int n, m;
bool check(double mid) 
{
    int sum = 0;
    for (int i = 1; i <= n;i++)
        sum += (int)(area[i] / mid);
    if(sum>=m)
        return true;
    else
        return false;
}
void solve() 
{
    cin >> n >> m;
    m++;
    double maxx = -1;
    for (int i = 1; i <= n;i++)
    {
        int r;
        cin >> r;
        area[i] = PI * r * r;
        maxx = max(maxx, area[i]);
    }
    double l = 0, r = maxx;
    while(r-l>eps)
    {
        double mid = l + (r - l) / 2;
        if(check(mid))
            l = mid;
        else
            r = mid;
    }
    printf("%.4lf\n", l);
}
signed main()
{
    ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    //cout.tie(nullptr);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}