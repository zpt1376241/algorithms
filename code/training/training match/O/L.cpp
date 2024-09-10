#include <bits/stdc++.h>
#define sz(a) a.size()
using namespace std;
const int N = 2e5 + 5;
vector<vector<int>> mp(N);
vector<bool> jg(N);
int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        jg[i] = false;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        auto it_a = find(mp[a].begin(), mp[a].end(), b);
        if (it_a != mp[a].end())
            mp[a].erase(it_a);
        else
            mp[a].push_back(b);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < mp[i].size(); i++)
            jg[mp[i][j]] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!jg[i])
            ans++;
    }
    cout << ans;
}