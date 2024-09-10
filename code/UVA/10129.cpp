#include <stdio.h>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
const int maxn = 100;
int G[maxn][maxn], vis[maxn], in[maxn], out[maxn], T, n;
void dfs(int u) // 用dfs判断是否为连通图
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
        memset(vis, 1, sizeof(vis)); // 注意 ， vis的初始标记是 1；
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
            vis[r] = vis[t] = 0; // 取消标记 ， 用dfs时再将经过的点标记为1
        }
        int p = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, flag = 0;
        for (int i = 0; i < 26; i++)
        {
            if (in[i] == out[i]) // 出度 = 入度 处于中间
            {
                continue;
            }
            if (in[i] == out[i] + 1) // 起始点
            {
                cnt1++;
            }
            else if (out[i] == in[i] + 1)
            {
                cnt2++;
            }
            else
            {
                cnt3++; // 不符合
            }
        }
        if (cnt3 > 0)
        {
            printf("The door cannot be opened.\n");
            continue;
        }
        if (cnt1 == 1 && cnt2 == 1 || cnt1 == 0 && cnt2 == 0) // 有且仅有俩个点的度数为奇数
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        dfs(p);
        for (int i = 0; i < 26; i++) // 循环一遍 ， 如果有vis[i]=0则表示不是连通图
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