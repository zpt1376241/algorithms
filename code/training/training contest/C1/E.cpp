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
const int maxn = 1e6 + 5;
const int mod = 998244353;
const int N = 1011;
void solve()
{
    PII a, b;
    int x, y, p, q;
    int ans = 0;
    cin >> x >> y >> p >> q;
    bool flag = true;
    a.first = x;
    a.second = y;
    int cnt1 = 0, cnt2 = 0, lt2=0, rt2=0, lt1=0, rt1=0;
    while (b.first != x)
    {
        if (flag) // 农夫在左岸
        {
            flag = !flag;
            cnt1 = 0, cnt2 = 0;
            int t = p;
            if (a.first <= p) // 左岸最后一次
            {
                ans++;
                break;
            }
            if (a.second > a.first + q) // 狼比羊多
            {
                cnt2 = a.second - (a.first + q); // 至少运的狼
                t -= cnt2;                       // 剩余可运数量
                if (cnt2 > p)
                {
                    cout << -1 << endl;
                    return;
                }
                if (t > 0)
                {
                    if (a.first - cnt1 > t / 2)
                        cnt1 += t / 2;
                    else
                        cnt1 += (a.first - cnt1);
                    if (a.second - cnt2 > (t - t / 2))
                        cnt2 += t - t / 2;
                    else
                        cnt2 += (a.second - cnt2);
                }
                ans++;
                b.first += cnt1; // 两岸狼和羊数量
                b.second += cnt2;
                a.first -= cnt1;
                a.second -= cnt2;
            }
            else // 羊 >= 狼
            {
                cnt1 = a.first + q - a.second;
                if (cnt1 > p)
                    cnt1 = p;
                t -= cnt1; // 剩余可运数量
                if (t > 0)
                {
                    if (a.second - cnt2 > (t - t / 2))
                        cnt2 += (t - t / 2);
                    else
                        cnt2 += (a.second - cnt2);
                    if (a.first - cnt1 > (t / 2))
                        cnt1 += t / 2;
                    else
                        cnt1 += (a.first - cnt1);
                }
                ans++;
                b.first += cnt1; // 两岸狼和羊数量
                b.second += cnt2;
                a.first -= cnt1;
                a.second -= cnt2;
            }
            lt2 = cnt2;
            lt1 = cnt1;
        }
        else // 右岸
        {
            flag = !flag;
            cnt1 = 0, cnt2 = 0;
            int t = p;
            if (b.second <= b.first + q) // 羊比狼多
            {
                ans++;
                //continue;
            }
            else if (b.first != 0 && b.second > b.first + q) // 狼比羊多
            {
                cnt2 = b.second - (b.first + q);
                t -= cnt2;
                if (cnt2 > p)
                {
                    cout << -1 << endl;
                    return;
                }
                ans++;
                b.second -= cnt2; // 两岸狼的数量变化
                a.second += cnt2;
            }
            else
            {
                ans++;
            }
            rt2 = cnt2;
            rt1 = cnt1;
            if(rt2==lt2&&rt1==lt1)
            {
                cout << -1 << endl;
                return;
            }
        }
        //cout << a.first << " " << a.second << " " << b.first << ' ' << b.second <<" "<< cnt1 << " " << cnt2 << endl;
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //cout << fixed;
    //cout.precision(18);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}