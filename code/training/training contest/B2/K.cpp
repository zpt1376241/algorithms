#include <bits/stdc++.h>
using namespace std;
const int N = 101;
int w[N], c[N];
bool vis[N];
int n, C;
int ans = 0;
int s[N];
void dfs(int u, int p)
{
    if (p >= C)
    {
        ans = max(ans, w[u] + ans);
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if(c[i]+p<=C&&!vis[i])
        {
            vis[i] = true;
            dfs(u + 1, p+c[i]);
            vis[i] = false;
        }
    }
}

int main()
{
    cin >> n >> C;
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    for (int i = 1; i <= n; i++)
        cin >> w[i];
    dfs(1, 0);
    cout << ans << endl;

    return 0;
}
