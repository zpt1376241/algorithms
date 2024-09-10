#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 5;
int h[maxn], cnt;
struct
{
    int to, ne;
    int w;
} e[maxn];
void add(int u, int v, int w)
{
    cnt++;
    e[cnt].to = v;
    e[cnt].w = w;
    e[cnt].ne = h[u];
    h[u] = cnt;
}
int main()
{
    for (int i = h[1]; i; i=e[i].ne)
    {

    }
}

struct edge
{
    int to, w;
};
vector<edge> v[maxn];
void add_(int from, int to, int w)
{
    v[from].push_back({to, w});
}