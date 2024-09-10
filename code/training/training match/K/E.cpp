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
string s;
int a, b;
void cout_ch(char x, int num)
{
    for (int i = 1; i <= num; i++)
        putchar(x);
}
void solve()
{
    cin >> a >> b;
    cin >> s;
    int u, l, r, d;
    u = l = r = d = 0;

    for (int i = 1; i <= s.length(); i++)
    {
        switch (s[i - 1])
        {
        case 'U':
            u++;
            break;
        case 'R':
            r++;
            break;
        case 'D':
            d++;
            break;
        case 'L':
            l++;
            break;
        }
    }
    int tx = r - l;
    int ty = u - d;
    if (a == 0 && b == 0)
        cout << "Impossible" << endl;
    else if (a == 0 || b == 0)
    {
        if (b == 0)
        {
            if (u == 0 && d == 0)
            {
                if (a < 0)
                {
                    if (tx <= a)
                    {
                        cout << "Impossible" << endl;
                    }
                    else
                    {
                        cout_ch('R', r);
                        cout_ch('L', l);
                        cout << endl;
                    }
                }
                else if (a > 0)
                {
                    if (tx >= a)
                    {
                        cout << "Impossible" << endl;
                    }
                    else
                    {
                        cout_ch('L', l);
                        cout_ch('R', r);
                        cout << endl;
                    }
                }
            }
            else if (u == d)
            {
                if (tx == a)
                    cout << "Impossible" << endl;
                else
                {
                    cout_ch('U', u), cout_ch('L', l), cout_ch('R', r), cout_ch('D', d);
                    cout << endl;
                }
            }
            else
            {
                cout_ch('U', u), cout_ch('D', d), cout_ch('R', r), cout_ch('L', l);
                cout << endl;
            }
        }
        if (a == 0)
        {
            if (l == 0 && r == 0)
            {
                if (b < 0)
                {
                    if (ty <= b)
                    {
                        cout << "Impossible" << endl;
                    }
                    else
                    {
                        cout_ch('U', u);
                        cout_ch('D', d);
                        cout << endl;
                    }
                }
                else if (b > 0)
                {
                    if (ty >= b)
                        cout << "Impossible" << endl;
                    else
                    {
                        cout_ch('D', d);
                        cout_ch('U', u);
                        cout << endl;
                    }
                }
            }
            else if (l == r)
            {
                if (ty == b)
                    cout << "Impossible" << endl;
                else
                {
                    cout_ch('L', l), cout_ch('U', u), cout_ch('D', d), cout_ch('R', r);
                    cout << endl;
                }
            }
            else
            {
                cout_ch('L', l), cout_ch('R', r), cout_ch('U', u), cout_ch('D', d);
                cout << endl;
            }
        }
    }
    else
    {
        if (a == tx && b == ty)
        {
            cout << "Impossible" << endl;
        }
        else
        {
            if (tx != a)
            {
                cout_ch('L', l), cout_ch('R', r), cout_ch('U', u), cout_ch('D', d);
                cout << endl;
            }
            else if (tx == a)
            {
                cout_ch('U', u), cout_ch('D', d), cout_ch('L', l), cout_ch('R', r);
                cout << endl;
            }
        }
    }
}
signed main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}