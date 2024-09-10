#include <bits/stdc++.h>
using namespace std;
const int maxn = 101;
int n, m, cnt;
int topo[maxn], in[maxn];
void bfs()
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
        if (!in[i])
            q.push(i);

    while (!q.empty())
    {
        int a = q.front();
        q.pop();
        topo[++cnt] = a;
        for (int i = h[a]; i; i = ed[i].ne)
        {
            int b = ed[i].to;
            if (--in[b] == 0)
                q.push(b);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        add(a, b);
        in[b]++;
    }
    bfs();

    if (cnt < n)
        puts("ÓÐ»·");

    for (int i = 1; i <= cnt; i++)
        cout << topo[i];
    cout << endl;
}