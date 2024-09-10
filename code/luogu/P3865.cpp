#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, m;
int a[N], dp_max[N][25], dp_min[N][25];
int LOG2[N];
inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
        x = x * 10 + ch - '0', ch = getchar();
    return x * f;
}
void write(int x)
{
    if (x < 0)
        putchar('-'), x = -x;
    if (x > 9)
        write(x / 10);
    putchar(x % 10 + '0');
    return;
}
void st_init()
{
    LOG2[0] = -1;
    for (int i = 1; i <= N; i++)
        LOG2[i] = LOG2[i >> 1] + 1;
    for (int i = 1; i <= n; i++)
    {
        dp_min[i][0] = a[i];
        dp_max[i][0] = a[i];
    }
    // int p = (int)log((double)n) / log(2.0);
    int p = LOG2[n];
    for (int k = 1; k <= p; k++)
    {
        for (int s = 1; s + (1 << k) - 1 <= n; s++)
        {
            dp_max[s][k] = max(dp_max[s][k - 1], dp_max[s + (1 << (k - 1))][k - 1]);
            dp_min[s][k] = min(dp_min[s][k - 1], dp_min[s + (1 << (k - 1))][k - 1]);
        }
    }
}
int st_query(int l, int r)
{
    int k = LOG2[r - l + 1];
    int x = max(dp_max[l][k], dp_max[r - (1 << k) + 1][k]);
    //int y = min(dp_min[l][k], dp_min[r - (1 << k) + 1][k]);
    return x;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        a[i]=read();
    st_init();
    for (int i = 1; i <= m; i++)
    {
        int l, r;
        l = read();
        r = read();
        int ans = st_query(l, r);
        write(ans);
        puts("");
    }
    return 0;
}