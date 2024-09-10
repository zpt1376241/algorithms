#include <bits/stdc++.h>
using namespace std;
const int N = 10010;
#define lowbit(x) ((x) & -(x))
int tree[N], n, m;
void update(int x, int v)
{
    for (int i = x; i <= n; i += lowbit(x))
        tree[i] += v;
}
int sum(int x)
{
    int ans = 0;
    for (int i = x; i; i -= lowbit(x))
        ans += tree[i];
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        update(i, a[i]);
    }
    int op, st, ed ,v;
    for (int i = 1; i <= m; i++)
    {
        cin >> op;
        if(op==1)
        {
            cin >> st >> ed >> v;
            update(st, v);
            update(ed + 1, -v);
            cout << sum(ed) - sum(st - 1) << endl;
        }
    }
}