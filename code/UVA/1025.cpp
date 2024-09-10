#include<bits/stdc++.h>
using namespace std;
const int maxn = 50 + 5, INF = 1000000000;
int n, T, M1, M2, d, C;
int t[maxn], has_train[205][maxn][2];
int dp[205][maxn];
void init()
{
    for (int i = 1; i < n; ++i)
        dp[T][i] = INF;
    dp[T][n] = 0;
}
int main()
{
    while (~scanf("%d", &n), n)
    {
        memset(has_train, 0, sizeof(has_train));
        scanf("%d", &T);
        for (int i = 1; i < n; ++i)
            scanf("%d", &t[i]);
        scanf("%d", &M1);
        for (int i = 0; i < M1; ++i)
        {
            scanf("%d", &d);
            for (int j = 1; j < n; ++j)
            {
                if (d <= T)
                    has_train[d][j][0] = 1;
                d += t[j];
            }
        }
        scanf("%d", &M2);
        for (int i = 0; i < M2; ++i)
        {
            scanf("%d", &d);
            for (int j = n - 1; j >= 1; --j)
            {
                if (d <= T)
                    has_train[d][j + 1][1] = 1;
                d += t[j];
            }
        }
        init();
        for (int i = T - 1; i >= 0; --i)
            for (int j = 1; j <= n; ++j)
            {
                dp[i][j] = dp[i + 1][j] + 1;
                if (j < n && has_train[i][j][0] && i + t[j] <= T)
                    dp[i][j] = min(dp[i][j], dp[i + t[j]][j + 1]);
                if (j > 1 && has_train[i][j][1] && i + t[j - 1] <= T)
                    dp[i][j] = min(dp[i][j], dp[i + t[j - 1]][j - 1]);
            }
        printf("Case Number %d: ", ++C);
        if (dp[0][1] >= INF)
            printf("impossible\n");
        else
            printf("%d\n", dp[0][1]);
    }
    return 0;
}
