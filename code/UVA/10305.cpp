#include <iostream>
#include <string.h>
using namespace std;
const int maxn = 110;
int n, m, G[maxn][maxn], book[maxn], topo[maxn], t;

bool dfs(int u)
{
    book[u] = -1; // �����
    for (int v = 1; v <= n; v++)
    {
        if (G[u][v])
        {
            if (book[v] < 0)
            {                 // ���֮ǰ���ʹ���˵���л�.
                return false; // �л�
            }
            else if (!book[v])
            { // ���û�б����ʹ��ͽ���dfs����.
                dfs(v);
            }
        }
    }
    book[u] = 1;   // ����Ѿ����ʹ�.
    topo[t--] = u; // ��������
    return true;   // �˽ڵ㼰���ӽڵ��޻�
}
bool TopoSort()
{
    t = n;
    memset(book, 0, sizeof(book));
    for (int i = 1; i <= n; i++)
    {
        if (!book[i])
        { // ���û�б����ʹ�
            if (!dfs(i))
            {
                return false; // ����л�
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
        // ���ݳ�ʼ��
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
