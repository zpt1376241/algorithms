#include <bits/stdc++.h>
using namespace std;
int n, m;
int ans[105][105];
int main()
{
    memset(ans, 0, sizeof(ans));
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            for (int x = 0; x <= n; x++)
            {
                for (int y = 0; y <= m; y++)
                {
                    if (x == i && y == j)
                        continue;
                    int dx = x - i, dy = y - j;
                    int x1 = i - dy, y1 = j + dx, x2 = x - dy, y2 = y + dx;
                    if (x1 >= 0 && y1 >= 0 && x1 <= n && y1 <= m && x2 >= 0 && y2 >= 0 && x2 <= n && y2 <= m)
                        ans[i][j]++;
                }
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}