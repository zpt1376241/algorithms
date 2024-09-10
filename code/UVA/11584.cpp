#include<bits/stdc++.h>
using namespace std;
const int maxn = 1000 + 5, INF = 1e9;
int T, l, tmp;
int dp[maxn];
char s[maxn];
bool judge(int x, int y)
{
    for (int i = x, j = y; i < j; ++i, --j)
        if (s[i] != s[j])
            return false;
    return true;
}
int main()
{
    scanf("%d", &T);
    for (int C = 0; C < T; ++C)
    {
        scanf("%s", s + 1);
        l = strlen(s + 1);
        dp[0] = 0;
        for (int i = 1; i <= l; ++i)
        {
            tmp = INF;
            for (int j = 0; j < i; ++j)
                if (judge(j + 1, i))
                    tmp = min(tmp, dp[j] + 1);
            dp[i] = tmp;
        }
        printf("%d\n", dp[l]);
    }
    return 0;
}
