#include<bits/stdc++.h>
using namespace std;
const int maxn = 100;
int n, cnt, d[maxn], best;
bool g[maxn][maxn];
pair<int, int> k[maxn];
map<pair<int, int>, int> h;
void make_block(int a, int b, int c)
{
    pair<int, int> t = make_pair(a, b);
    if (h.count(t))
        h[t] = max(h[t], c);
    else
        h[t] = c, k[cnt++] = t;
    t = make_pair(a, c);
    if (h.count(t))
        h[t] = max(h[t], b);
    else
        h[t] = b, k[cnt++] = t;
    t = make_pair(b, c);
    if (h.count(t))
        h[t] = max(h[t], a);
    else
        h[t] = a, k[cnt++] = t;
    return;
}
int dp(int i)
{
    int &ans = d[i];
    if (ans != -1)
        return ans;
    ans = h[k[i]];
    for (int j = 0; j < cnt; ++j)
        if (g[i][j])
            ans = max(ans, dp(j) + h[k[i]]);
    return ans;
}
int main()
{
    int t = 0;
    while (cin >> n, n)
    {
        cnt = best = 0;
        h.clear();
        memset(g, 0, sizeof(g));
        memset(d, -1, sizeof(d));
        for (int i = 0; i < n; ++i)
        {
            int a, b, c;
            cin >> a >> b >> c;
            if (a > b)
                swap(a, b);
            if (a > c)
                swap(a, c);
            if (b > c)
                swap(b, c);
            make_block(a, b, c);
        }
        sort(k, k + cnt, [](const pair<int, int> a, const pair<int, int> b)
             { return a.first == b.first ? a.second < b.second : a.first < b.first; });
        for (int i = 0; i < cnt; ++i)
            for (int j = 0; j < cnt; ++j)
                g[i][j] = k[i].first > k[j].first && k[i].second > k[j].second;
        for (int i = 0; i < cnt; ++i)
            best = max(best, dp(i));
        cout << "Case " << ++t << ": maximum height = " << best << endl;
    }
    return 0;
}