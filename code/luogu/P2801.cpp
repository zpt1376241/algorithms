#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int block, t;
int n, q;
int a[N], b[N],st[N], ed[N], pos[N];
void init()
{
    block = sqrt(n);
    int t = n / block;
    if (n % block)
        t++;
    for (int i = 1; i <= t;i++)
    {
        st[i] = (i - 1) * block + 1;
        ed[i] = i * block;
    }
    ed[t] = n;
    for (int i = 1; i <= n;i++)
        pos[i] = (i - 1) / block + 1;
}
void change(int l,int r,int d)
{

}
int main()
{
}