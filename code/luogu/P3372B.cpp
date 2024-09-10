#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
int a[N];
int tree[N << 2];
int tag[N << 2];
int ls(int p) { return p << 1; }
int rs(int p) { return p << 1 | 1; }
void pushup(int p)
{
    tree[p] = tree[ls(p)] + tree[rs(p)];
}
void build(int p, int pl, int pr)
{
    tag[p] = 0;
    if (pl == pr)
    {
        tree[p] = a[pl];
        return;
    }
    int mid = (pl + pr) >> 1;
    build(ls(p), pl, mid);
    build(rs(p), mid + 1, pr);
    // 递归对左右区间建树
    pushup(p);
}
void addtag(int p, int pl, int pr, int d)
{
    tag[p] += d;
    tree[p] += d * (pr - pl + 1);
}
void pushdown(int p, int pl, int pr)
{
    if (tag[p])
    {
        int mid = (pl + pr) >> 1;
        addtag(ls(p), pl, mid, tag[p]);
        addtag(rs(p), mid + 1, pr, tag[p]);
        tag[p] = 0;
    }
}
void update(int l, int r, int p, int pl, int pr, int d)
{
    if (l <= pl && pr <= r)
    {
        addtag(p, pl, pr, d);
        return;
    }
    pushdown(p, pl, pr);
    // 如果不能覆盖，把tag传给子树
    int mid = (pl + pr) >> 1;
    if (l <= mid)
        update(l, r, ls(p), pl, mid, d);
    if (r > mid)
        update(l, r, rs(p), mid + 1, pr, d);
    pushup(p);
}
int query(int l, int r, int p, int pl, int pr)
{
    if (l <= pl && pr <= r)
        return tree[p];
    pushdown(p, pl, pr);
    int res = 0;
    int mid = (pl + pr) >> 1;
    if (l <= mid)
        res += query(l, r, ls(p), pl, mid);
    if (r > mid)
        res += query(l, r, rs(p), mid + 1, pr);
    return res;
}
signed main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);
    while (m--)
    {
        int op, l, r, d;
        cin >> op;
        if (op == 1)
        {
            cin >> l >> r >> d;
            update(l, r, 1, 1, n, d);
        }
        else
        {
            cin >> l >> r;
            cout << query(l, r, 1, 1, n) << endl;
        }
    }
    return 0;
}