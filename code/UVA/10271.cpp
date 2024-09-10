#include <bits/stdc++.h>
using namespace std;
#define LL long long
const int INF = 1 << 30;
int m, n, a[5005];
int dp[5005][1010];
int solve()
{
    m += 8;
    for (int i = 0; i < n; ++i)
    {
        dp[i][0] = 0;
        for (int j = 1; j <= m; ++j)
            dp[i][j] = INF;
    }
    for (int i = 2; i < n; ++i)
    {
        for (int j = 1; j <= m; ++j)
            if (i >= 3 * j - 1)
                dp[i][j] = min(dp[i - 1][j], dp[i - 2][j - 1] + (a[i] - a[i - 1]) * (a[i] - a[i - 1]));
    }
    return dp[n - 1][m];
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &m, &n);
        for (int i = n - 1; i >= 0; --i)
            scanf("%d", a + i);
        printf("%d\n", solve());
    }
    return 0;
}