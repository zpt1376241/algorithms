#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const int mod = 998244353;

int bk[110];
int num[110];
int vis[110];
int n;
void db()
{
    for (int i = 2; i * i <= 100; i++)
        if (!bk[i])
            for (int j = i * i; j <= 100; j += i)
                bk[j] = 1;
}
void dfs(int cur)
{
    if (cur == n && !bk[num[n - 1] + num[0]])
    {
        for (int i = 0; i < n; i++)
        {
            cout << num[i];
            if (i < n - 1)
                cout << " ";
        }
        cout << endl;
    }
    else
        for (int i = 2; i <= n; i++)
        {
            if (!vis[i] && !bk[i + num[cur - 1]])
            {
                num[cur] = i;
                vis[i] = 1;
                dfs(cur + 1);
                vis[i] = 0;
            }
        }
}
signed main()
{
    db();
    int cas = 0;
    num[0] = 1;
    int ft = 0;
    while (cin >> n)
    {
        if (ft)
            cout << endl;
        printf("Case %lld:\n", ++cas);
        dfs(1);
        ft = 1;
    }
}