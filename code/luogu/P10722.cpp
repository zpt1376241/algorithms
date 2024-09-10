#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
bool flag[N];
struct node
{
    int l, r;
    bool val;
} tree[N];
void dfs(int node)
{
    if (!tree[node].l)
        return;
    int ll = tree[node].l, rr = tree[node].r;
    if (flag[node])
    {
        flag[ll] ^= 1;
        flag[rr] ^= 1;
    }
    dfs(ll);
    if (rr)
        dfs(rr);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int t;
        cin >> t;
        if (!tree[t].l)
            tree[t].l = i;
        else
            tree[t].r = i;
    }
    for (int i = 1; i <= n; i++)
    {
        char t;
        cin >> t;
        tree[i].val = (t ^ '0');
    }
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int k;
        cin >> k;
        flag[k] ^= 1;
    }
    dfs(1);
    for (int i = 1; i <= n; i++)
        cout << (tree[i].val ^ flag[i]);
    cout << endl;
}