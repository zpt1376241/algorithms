#include <iostream>
#include <cstring>
using namespace std;

const int INF = 0xfffffff;
int c, s, q;
int a[120][120];

int min(int x, int y)
{
    return x > y ? y : x;
}
int max(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    int i, j, k, t = 0;
    while (cin >> c >> s >> q)
    {
        if (c == 0 && s == 0 && q == 0)
            break;
        if (t)
            cout << endl;
        int x, y, z;
        for (i = 0; i < 120; i++)
            for (j = 0; j < 120; j++)
                a[i][j] = INF;
        for (i = 0; i < s; i++)
        {
            cin >> x >> y >> z;
            a[x][y] = a[y][x] = z;
        }
        for (k = 1; k <= c; k++)
        {
            for (i = 1; i <= c; i++)
                for (j = 1; j <= c; j++)
                    a[i][j] = min(a[i][j], max(a[i][k], a[k][j]));
        }
        cout << "Case #" << ++t << endl;
        for (i = 0; i < q; i++)
        {
            cin >> x >> y;
            if (a[x][y] == INF)
                cout << "no path" << endl;
            else
                cout << a[x][y] << endl;
        }
    }
    return 0;
}