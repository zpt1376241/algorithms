#include<bits/stdc++.h>
using namespace std;
const int N = 20010;
int s[N];
int d[N];   //Ȩֵ
int n, m, ans;
void init()
{
    for (int i = 0; i <= n;i++)
    {
        s[i] = i;
        d[i] = 0;
    }
}
int find(int x)
{
    if(x!=s[x])
    {
        int t = s[x];
        s[x] = find(s[x]);
        d[x] += d[t];
    }
    return s[x];
}
void merge(int a, int b, int v)
{
    int roota = find(a), rootb = find(b);
    if(roota==rootb)
    {
        if(d[a]-d[b]!=v)
            ans++;
    }
    else
    {
        s[roota] = rootb;
        d[roota] = d[b] + v - d[a];
    }
}
int main()
{
    while(~scanf("%d %d",&n,&m))
    {
        ans = 0;
        init();
        while(m--)
        {
            int a, b, v;
            scanf("%d %d %d", &a, &b, &v);
            a--;
            merge(a, b, v);
        }
        printf("%d\n", ans);
    }
}