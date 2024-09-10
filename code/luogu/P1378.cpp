#include <bits/stdc++.h>
using namespace std;
double PI = acos(-1.0);
const int N = 501;
int n;
double x1, y11, x2, y2;
double x[N], y[N], r[N];
bool vis[N];
double ans;
double cal(int i)
{
    r[i]=min(min(fabs(x[i] - x1), fabs(x[i] - x2)),min(fabs(y[i] - y11), fabs(y[i] - y2)));
    for (int j = 1; j <= n;j++)
    {
        if(vis[j]&&j!=i)
        {
            double d = sqrt(fabs(x[i] - x[j]) * fabs(x[i] - x[j]) + fabs(y[i] - y[j]) * fabs(y[i] - y[j]));
            r[i] = min(r[i], max(d - r[j], 0.0));
        }
    }
    return r[i];
}
void dfs(int u, double sum)
{
    if (u > n)
    {
        ans = max(ans, sum);
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            double r = cal(i);
            vis[i] = true;
            dfs(u + 1, sum + PI * r * r);
            vis[i] = false;
        }
    }
}
int main()
{
    cin >> n;
    cin >> x1 >> y11 >> x2 >> y2;
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i];
    dfs(1, 0);
    double x = fabs(x1 - x2), y = fabs(y11 - y2);
    cout << (int)(x*y-ans + 0.5) << endl;
}