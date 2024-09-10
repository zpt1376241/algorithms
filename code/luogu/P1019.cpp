#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e5 + 5;
const ll mod = 998244353;
void solve();
int n, m, ans;
string s[50], str;
int times[50];
int f(string a, string b)
{
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] == b[0])
        {
            int l = i;
            for (int j = 0; j < (int)b.size(); j++)
            {
                if (a[l] == b[j])
                    l++;
                else
                    break;
            }
            if (l == (int)a.size())
                return l - i;
        }
    }
    return 0;
}
void dfs(int p, string x)
{
    ans = max(ans, (int)x.size() - p);
    for (int i = 1; i <= n; i++)
    {
        int d = 0;
        if (times[i] == 2)
            continue;
        d = f(x, s[i]);
        if (!d)
            continue;
        times[i]++;
        dfs(p + d, x + s[i]);
        times[i]--;
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    cin >> str;
    dfs(0, str);
    cout << ans;

    return 0;
}