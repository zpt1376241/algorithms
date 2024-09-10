#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef long long ll;
const int maxn = 100000 + 7, inf = 0x3f3f3f3f;
int n, T;
vector<int> son[maxn];
int dp(int u)
{
    if (son[u].empty())
        return 1;
    int len = (int)son[u].size();
    vector<int> d;
    for (int i = 0; i < len; i++)
    {
        d.push_back(dp(son[u][i]));
    }
    sort(d.begin(), d.end());
    int c = (len * T - 1) / 100 + 1;
    int ans = 0;
    for (int i = 0; i < c; i++)
        ans += d[i];
    return ans;
}
int main()
{
    while (~scanf("%d%d", &n, &T) && n && T)
    {
        for (int i = 1; i <= n; i++)
        {
            int u;
            scanf("%d", &u);
            son[u].push_back(i);
        }
        printf("%d\n", dp(0));
        for (int i = 0; i <= n; i++)
            son[i].clear();
    }
}