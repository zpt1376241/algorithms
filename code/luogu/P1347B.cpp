#include <bits/stdc++.h>
using namespace std;

const int N = 30;

vector<int> g[N]; // �ڽӱ�
int in[N];        // ���
int n, m;
char u, v, op;
int res;
vector<int> order; // ����˳��

// ����0���޷��ж�˳�� 1�������ж�˳�� 2:����ì��
int bfs()
{
    bool noorder = false;
    queue<int> q;
    order.resize(0);
    int iin[N];
    for (int i = 0; i < n; i++)
        iin[i] = in[i]; // �����������

    for (int i = 0; i < n; i++)
    {
        if (iin[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        noorder = true; // ͬʱ�ж�������0�Ľڵ㣬�޷��ж�˳��
    while (q.size())
    {
        int u = q.front();
        q.pop();
        order.push_back(u); // ��¼˳��
        int cnt = 0;        // uָ��Ľڵ����ȼ�Ϊ0�ĸ���
        for (int v : g[u])
        {
            iin[v]--; // ��xָ��Ľڵ����--
            if (iin[v] == 0)
            {
                cnt++;
                if (cnt > 1)
                    noorder = true; // ͬʱ�ж�������0�Ľڵ㣬�޷��ж�˳��
                q.push(v);
            }
        }
    }

    if (order.size() != n)
        return 2; // �ȿ��Ƿ����ì��
    if (noorder)
        return 0; // �ٿ���û��˳��
    else
        return 1; // �ҵ�˳��
}

int main()
{
    cin >> n >> m;
    int i;
    for (i = 1; i <= m; i++)
    {
        cin >> u >> op >> v;
        if (u == v) // ����ì�ܣ��Լ�С���Լ����Ի�
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