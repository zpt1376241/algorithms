#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
struct cri
{
    int a, b, v;
    bool operator>(const cri &x) const
    {
        return v > x.v;
    }
} p[N];

int s[N * 2], h[N * 2];
int n, m;

void init()
{
    for (int i = 1; i <= n; i++)
    {
        s[i] = i;
        h[i] = 0;
        s[i + n] = i + n;
        h[i + n] = 0;
    }
}

int find(int x)
{
    if (s[x] != x)
        s[x] = find(s[x]);
    return s[x];
}

void merge(int a, int b)
{
    a = find(a);
    b = find(b);
    if (h[a] == h[b])
    {
        h[a]++;
        s[b] = a;
    }
    else
    {
        if (h[a] < h[b])
            s[a] = b;
        else
            s[b] = a;
    }
}

bool same(int a, int b)
{
    return find(a) == find(b);
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> p[i].a >> p[i].b >> p[i].v;

    sort(p + 1, p + m + 1, greater<cri>());

    init(); // 初始化并查集

    for (int i = 1; i <= m; i++)
    {
        if (same(p[i].a, p[i].b))
        {
            cout << p[i].v << endl;
            return 0;
        }
        merge(p[i].a, p[i].b + n); // 合并同类关系
        merge(p[i].b, p[i].a + n); // 合并敌对关系
    }

    cout << "0" << endl;
    return 0;
}
