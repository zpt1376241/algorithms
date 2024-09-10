#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 400010;
const int mo = 1e9 + 7;
int dp[60][60];
int a[60];
int cnt, tmp, ans;
int k, l;
int main()
{
    int n, m, T, cas;
    while (scanf("%d", &l) != EOF && l)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        a[0] = 0;
        a[n + 1] = l;
        m = n + 1;
        for (int i = 0; i < m; i++)
            dp[i][i + 1] = 0;
        memset(dp, 0, sizeof(dp));
        for (int p = 2; p <= m; p++)
        {
            for (int i = 0; i <= m + 1 - p; i++)
            {
                int j = i + p;
                int mi = mo;
                for (int k = i + 1; k < j; k++)
                {
                    tmp = dp[i][k] + dp[k][j] + a[j] - a[i];
                    if (tmp < mi)
                        mi = tmp;
                }
                if (mi != mo)
                    dp[i][j] = mi;
            }
        }
        printf("The minimum cutting is %d.\n", dp[0][m]);
    }
    return 0;
}