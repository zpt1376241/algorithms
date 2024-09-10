#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 200010;
int s[N], d[N];
void init()
{
    for (int i = 1; i <= N;i++)
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
void merge(int a,int b,int v)
{
    int roota = find(a), rootb = find(b);
    if(roota!=rootb)
    {
        s[rootb] = roota;
        d[rootb] = d[a] + v - d[b];
    }
}
signed main()
{
    int n, m, q;
    cin >> n >> m >> q;
    init();
    while(m--)
    {
        int a, b, v;
        cin >> a >> b >> v;
        a--;
        merge(a, b, v);
    }
    while(q--)
    {
        int a, b;
        cin >> a >> b;
        a--;
        if(find(a)!=find(b))
        {
            cout << "UNKNOWN" << endl;
            continue;
        }
        cout << d[b] - d[a] << endl;
    }
}