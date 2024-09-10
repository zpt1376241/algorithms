#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int s[N],h[N];
int n, m;
void init()
{
    for (int i = 1; i <= n;i++)
    {
        s[i] = i;
        h[i] = 0;
    }
}
int find(int x)
{
    if(s[x]!=x)
        x = find(s[x]);
    return s[x];
}
void merge(int x,int y)
{
    x = find(x);
    y = find(y);
    if(h[x]==h[y])
    {
        h[x]++;
        s[y] = x;
    }
    else
    {
        if(h[x]<h[y])
            s[x] = y;
        else
            s[y] = x;
    }
}
bool check()
{
    int cnt=0;
    for (int i = 1; i <= n;i++)
    {
        if(s[i]==i)
            cnt++;
        if(cnt>=2)
            return false;
    }
    return true;
}
struct f
{
    int a, b, t;
} ss[N];
bool cmp(const f &a, const f &b)
{
    return a.t < b.t;
}
int main()
{
    cin >> n >> m;
    init();
    for (int i = 1; i <= m;i++)
        cin >> ss[i].a >> ss[i].b >> ss[i].t;
    sort(ss + 1, ss + m + 1, cmp);
    int ans = -N;
    for (int i = 1; i <= m;i++)
    {
        merge(ss[i].a, ss[i].b);
        ans = max(ans, ss[i].t);
        if(check())
        {
            cout << ans << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}