#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
const int N = 105;
const double INF = 10000000000000;
struct Point
{
    int x, y;
} p[N];
int n;
double f[N][N];
double dist(const Point &a, const Point &b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
int main()
{
    while (scanf("%d", &n) == 1)
    {
        for (int i = 0; i < n; i++)
            scanf("%d%d", &p[i].x, &p[i].y);
        for (int i = 0; i < n; i++)
            for (int j = i; j < n; j++)
                f[i][j] = f[j][i] = 0;
        f[0][0] = 0;
        for (int i = 1; i < n; i++)
        {
            f[i][i - 1] = INF;
            f[i][0] = dist(p[i], p[0]);
            for (int j = 0; j < i - 1; j++)
            {
                f[i][j] = f[i - 1][j] + dist(p[i], p[i - 1]);
                f[i][i - 1] = min(f[i][i - 1], f[i - 1][j] + dist(p[i], p[j]));
            }
        }
        printf("%.2lf\n", f[n - 1][n - 2] + dist(p[n - 1], p[n - 2]));
    }
    return 0;
}