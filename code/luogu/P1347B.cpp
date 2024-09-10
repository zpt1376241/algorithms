#include <bits/stdc++.h>
using namespace std;

const int N = 30;

vector<int> g[N]; // 邻接表
int in[N];        // 入度
int n, m;
char u, v, op;
int res;
vector<int> order; // 保存顺序

// 返回0：无法判断顺序 1：可以判断顺序 2:出现矛盾
int bfs()
{
    bool noorder = false;
    queue<int> q;
    order.resize(0);
    int iin[N];
    for (int i = 0; i < n; i++)
        iin[i] = in[i]; // 拷贝入度数组

    for (int i = 0; i < n; i++)
    {
        if (iin[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        noorder = true; // 同时有多个入度是0的节点，无法判断顺序
    while (q.size())
    {
        int u = q.front();
        q.pop();
        order.push_back(u); // 记录顺序
        int cnt = 0;        // u指向的节点的入度减为0的个数
        for (int v : g[u])
        {
            iin[v]--; // 把x指向的节点入度--
            if (iin[v] == 0)
            {
                cnt++;
                if (cnt > 1)
                    noorder = true; // 同时有多个入度是0的节点，无法判断顺序
                q.push(v);
            }
        }
    }

    if (order.size() != n)
        return 2; // 先看是否存在矛盾
    if (noorder)
        return 0; // 再考虑没有顺序
    else
        return 1; // 找到顺序
}

int main()
{
    cin >> n >> m;
    int i;
    for (i = 1; i <= m; i++)
    {
        cin >> u >> op >> v;
        if (u == v) // 出现矛盾，自己小于自己，自环
        {
            cout << "Inconsistency found after " << i << " relations.";
            return 0;
        }
        g[u - 'A'].push_back(v - 'A');
        in[v - 'A']++;

        res = bfs();

        if (res == 1)
        {
            cout << "Sorted sequence determined after " << i << " relations: ";
            for (int v : order)
                cout << (char)(v + 'A');
            cout << ".";
            return 0;
        }
        if (res == 2)
        {
            cout << "Inconsistency found after " << i << " relations.";
            return 0;
        }
    }
    if (res == 0)
        cout << "Sorted sequence cannot be determined.";

    return 0;
}