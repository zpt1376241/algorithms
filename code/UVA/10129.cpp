#include <stdio.h>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
const int maxn = 100;
int G[maxn][maxn], vis[maxn], in[maxn], out[maxn], T, n;
void dfs(int u) // ��dfs�ж��Ƿ�Ϊ��ͨͼ
{
    vis[u] = 1;
    for (int i = 0; i < 26; i++)
    {
        if (!vis[i] && G[u][i])
        {
            dfs(i);
        }
    }
}
int main()
{
    string s;
    scanf("%d", &T);
    while (T--)
    {
        memset(vis, 1, sizeof(vis)); // ע�� �� vis�ĳ�ʼ����� 1��
        memset(G, 0, sizeof(G));
        memset(in, 0, sizeof(in));
        memset(out, 0, sizeof(out));
        scanf("%d", &n);
        while (n--)
        {
            cin >> s;
            int r = s[0] - 'a';
            int t = s[s.length() - 1] - 'a';
            G[r][t] = 1;
            in[t]++;
            out[r]++;
            vis[r] = vis[t] = 0; // ȡ����� �� ��dfsʱ�ٽ������ĵ���Ϊ1
        }
        int p = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, flag = 0;
        for (int i = 0; i < 26; i++)
        {
            if (in[i] == out[i]) // ���� = ��� �����м�
            {
                continue;
            }
            if (in[i] == out[i] + 1) // ��ʼ��
            {
                cnt1++;
            }
            else if (out[i] == in[i] + 1)
            {
                cnt2++;
            }
            else
            {
                cnt3++; // ������
            }
        }
        if (cnt3 > 0)
        {
            printf("The door cannot be opened.\n");
            continue;
        }
        if (cnt1 == 1 && cnt2 == 1 || cnt1 == 0 && cnt2 == 0) // ���ҽ���������Ķ���Ϊ����
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        dfs(p);
        for (int i = 0; i < 26; i++) // ѭ��һ�� �� �����vis[i]=0���ʾ������ͨͼ
        {
            if (!vis[i])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            printf("Ordering is possible.\n");
        }
        else
        {
            printf("The door cannot be opened.\n");
        }
    }
    return 0;
}