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
        if (flag) // ũ������
        {
            flag = !flag;
            cnt1 = 0, cnt2 = 0;
            int t = p;
            if (a.first <= p) // �����һ��
            {
                ans++;
                break;
            }
            if (a.second > a.first + q) // �Ǳ����
            {
                cnt2 = a.second - (a.first + q); // �����˵���
                t -= cnt2;                       // ʣ���������
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
                b.first += cnt1; // �����Ǻ�������
                b.second += cnt2;
                a.first -= cnt1;
                a.second -= cnt2;
            }
            else // �� >= ��
            {
                cnt1 = a.first + q - a.second;
                if (cnt1 > p)
                    cnt1 = p;
                t -= cnt1; // ʣ���������
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
                b.first += cnt1; // �����Ǻ�������
                b.second += cnt2;
                a.first -= cnt1;
                a.second -= cnt2;
            }
            lt2 = cnt2;
            lt1 = cnt1;
        }
        else // �Ұ�
        {
            flag = !flag;
            cnt1 = 0, cnt2 = 0;
            int t = p;
            if (b.second <= b.first + q) // ����Ƕ�
            {
                ans++;
                //continue;
            }
            else if (b.first != 0 && b.second > b.first + q) // �Ǳ����
            {
                cnt2 = b.second - (b.first + q);
                t -= cnt2;
                if (cnt2 > p)
                {
                    cout << -1 << endl;
                    return;
                }
                ans++;
                b.second -= cnt2; // �����ǵ������仯
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