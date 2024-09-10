#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e2 + 5;
long long k, M, a[MAXN], Max;
bool vis[MAXN]; 
bool check(long long m)
{
    memset(vis, 0, sizeof(vis));
    long long sum = a[k - 1], group = 1; 
    for (int i = k - 2; i >= 0; i--)
    {
        if (a[i] > m)
            return false;    
        if (i + 1 > M - group)
        {
            sum += a[i];
            if (sum > m)
            {
                vis[i] = true;
                sum = a[i];
                group++;
                if (group > M)
                    return false;
            }
        }
        else if (i + 1 == M - group) 
        {
            for (int j = i; j >= 0; j--)
            {
                if (a[j] > m)
                    return false;
                vis[j] = true;
            }
            return true;
        }
    }
    return true;
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        Max = 0;
        scanf("%lld%lld", &k, &M);
        for (int i = 0; i < k; i++)
        {
            scanf("%lld", &a[i]);
            Max += a[i];
        }
        long long l = 0, r = Max, m = l + (r - l) / 2;
        while (l < r)
        {
            if (check(m) == false)
                l = m + 1;
            else
                r = m;
            m = l + (r - l) / 2;
        }
        check(m);
        for (int i = 0; i < k; i++)
        {
            printf("%lld", a[i]);
            if (i != k - 1)
                printf(" ");
            if (vis[i])
                printf("/ ");
        }
        printf("\n");
    }
    return 0;
}