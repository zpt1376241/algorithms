#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int s[N],h[N];
int n, m, r;
int x[N], y[N], z[N];
void init()
{
    for (int i = 0; i <= n+1;i++)
    {
        s[i] = i;
        h[i] = 0;
    }
}
int find(int x)
{
    if(s[x]!=x)
        s[x] = find(s[x]);
    return s[x];
}
void merge(int a,int b)
{
    a = find(a);
    b = find(b);
    if(h[a]==h[b])
    {
        h[a]++;
        s[b] = a;
    }
    else
    {
        if(h[a]<h[b])
            s[a] = b;
        else
            s[b] = a;
    }
}
double dist(double x, double y, double z, double a, double b, double c)
{
    return sqrt((x - a) * (x - a) + (y - b) * (y - b) + (z - c) * (z - c));
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        cin >> n >> m >> r;
        init();
        for (int i = 1; i <= n;i++)
        {
            cin >> x[i] >> y[i] >> z[i];
            if (z[i] + r >= m)
                merge(i, n + 1);
            if (z[i] - r <= 0)
                merge(0, i);
            for (int j = 1; j < i;j++)
            {
                if(2*r>=dist(x[j],y[j],z[j],x[i],y[i],z[i]))
                    merge(i, j);
            }
        }
        if(find(0)==find(n+1))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}