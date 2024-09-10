#include <iostream>
#include <string.h>
using namespace std;
const int maxn = 110;
int n, m, G[maxn][maxn], book[maxn], topo[maxn], t;

bool dfs(int u)
{
    book[u] = -1; // 做标记
    for (int v = 1; v <= n; v++)
    {
        if (G[u][v])
        {
            if (book[v] < 0)
            {                 // 如果之前访问过则说明有环.
                return false; // 有环
            }
            else if (!book[v])
            { // 如果没有被访问过就进行dfs访问.
                dfs(v);
            }
        }
    }
    book[u] = 1;   // 标记已经访问过.
    topo[t--] = u; // 存入序列
    return true;   // 此节点及其子节点无环
}
bool TopoSort()
{
    t = n;
    memset(book, 0, sizeof(book));
    for (int i = 1; i <= n; i++)
    {
        if (!book[i])
        { // 如果没有被访问过
            if (!dfs(i))
            {
                return false; // 如果有环
            }
        }
    }
    return true;
}
int main()
{
    int u, v;
    while (cin >> n >> m && n)
    {
        // 数据初始化
        memset(G, 0, sizeof(G));
        // memset(book,0,sizeof(book));
        memset(topo, 0, sizeof(topo));
        t = n;
        for (int i = 1; i <= m; i++)
        {
            cin >> u >> v;
            G[u][v] = 1;
        }
        if (TopoSort())
        {
            for (int i = 1; i < n; i++)
            {
                cout << topo[i] << " ";
            }
            cout << topo[n] << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
