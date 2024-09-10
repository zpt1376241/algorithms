#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int s[N*3], h[N*3];
int n, m;

void init()
{
    for (int i = 1; i <= n; i++)
    {
        s[i] = i, h[i] = 0;
        s[i + n] = i + n, h[i + n] = 0;
        s[i + 2 * n] = i + 2 * n, h[i + 2 * n] = 0;
    }
}

int find(int x)
{
    if (s[x] != x)
        s[x] = find(s[x]);
    return s[x];
}

void merge(int x, int y)
{
    x = find(x);
    y = find(y);
    if (h[x] == h[y])
    {
        h[x]++;
        s[y] = x;
    }
    else
    {
        if (h[x] < h[y])
            s[x] = y;
        else
            s[y] = x;
    }
}

bool same(int x, int y)
{
    return find(x) == find(y);
}

int main()
{
    cin >> n >> m;

    init();

    int ans = 0;
    
    for (int i = 1; i <= m; i++)
    {
        int op, x, y;
        cin >> op >> x >> y;
        if (x > n || y > n)
        {
            ans++;
            continue;
        }
        if (op == 2 && x == y)
        {
            ans++;
            continue;
        }
        if (op == 1)
        {
            if (same(x, y + n) || same(x, y + 2 * n))
            {
                ans++;
                continue;
            }
            merge(x, y);
            merge(x + n, y + n);
            merge(x + 2 * n, y + 2 * n);
        }
        else
        {
            if (same(x, y) || same(x, y + 2 * n))
            {
                ans++;
                continue;
            }
            merge(x, y + n);
            merge(x + n, y + 2 * n);
            merge(x + 2 * n, y);
        }
    }
    cout << ans << endl;
}