#include <iostream>
#include <bits/stdc++.h>
#define maxn 210
using namespace std;
int n, m;
int cnt;
int g[maxn][maxn];
char str[] = {'W', 'A', 'K', 'J', 'S', 'D'};
vector<char> ans;
int s[16][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 1},
    {0, 0, 1, 0},
    {0, 0, 1, 1},
    {0, 1, 0, 0},
    {0, 1, 0, 1},
    {0, 1, 1, 0},
    {0, 1, 1, 1},
    {1, 0, 0, 0},
    {1, 0, 0, 1},
    {1, 0, 1, 0},
    {1, 0, 1, 1},
    {1, 1, 0, 0},
    {1, 1, 0, 1},
    {1, 1, 1, 0},
    {1, 1, 1, 1},
};
void dfs(int x, int y)
{
    if (x >= 0 && x <= (1 + n) && y >= 0 && y <= (m + 1) && !g[x][y])
    {
        g[x][y] = -1; 
        for (int i = -1; i < 2; i++)
            for (int j = -1; j < 2; j++)
                dfs(x + i, y + j);
    }
}

void dfs2(int x, int y)
{
    if (x >= 0 && x <= (1 + n) && y >= 0 && y <= (m + 1) && g[x][y] != -1)
    {
        if (g[x][y] == 0)
        {
            cnt++;
            dfs(x, y); 
        }
        g[x][y] = -1; 
        for (int i = -1; i < 2; i++)
            for (int j = -1; j < 2; j++)
                dfs2(x + i, y + j);
    }
}

int main()
{
    char c;
    int k;
    int kase = 0;
    while (cin >> n >> m && n && m)
    {
        kase++;
        cnt = 0;
        ans.clear();
        memset(g, 0, sizeof(g));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> c;
                if (isdigit(c))
                    k = c - '0';
                else
                    k = c - 'a' + 10;
                for (int l = 0; l < 4; l++)
                {
                    g[i][4 * j + l + 1] = s[k][l];
                }
            }
        }
        m = m * 4;
        dfs(0, 0);
        for (int i = 0; i < n + 2; i++)
        {
            for (int j = 0; j < m + 2; j++)
            {
                if (g[i][j] != -1)
                {
                    cnt = 0;
                    dfs2(i, j);
                    ans.push_back(str[cnt]);
                }
            }
        }
        sort(ans.begin(), ans.end());
        cout << "Case " << kase << ": ";
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i];
        cout << endl;
    }
    return 0;
}