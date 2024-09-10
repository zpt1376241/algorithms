#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e4;
int a[maxn], vis[maxn], n, aim, maxd;
bool check(int res, int cnt, int pos)
{
    if (res == maxd)
    {
        cnt++;
        if (cnt == aim)
            return true;
        pos = n;
        while (vis[pos])
            pos--;
        vis[pos] = 1;
        if (check(a[pos], cnt, pos))
            return true;
        else
        {
            vis[pos] = 0;
            return false;
        }
    }
    for (int i = pos - 1; i; i--)
    {
        if (vis[i] || res + a[i] > maxd || (i != pos - 1 && a[i] == a[i + 1] && !vis[i + 1]))
            continue;
        vis[i] = 1;
        if (check(res + a[i], cnt, i))
            return true;
        vis[i] = 0;
    }
    return false;
}
int main()
{
    while (~scanf("%d", &n) && n)
    {
        int sum = 0, st = 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
            if (st < a[i])
                st = a[i];
        }
        int ans = sum;
        sort(a + 1, a + 1 + n);
        memset(vis, 0, sizeof(vis));
        vis[n] = 1;
        for (maxd = st; maxd <= sum / 2; maxd++)
        {
            if (sum % maxd)
                continue;
            aim = sum / maxd;
            if (check(a[n], 0, n))
            {
                ans = maxd;
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
