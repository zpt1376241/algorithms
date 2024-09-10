#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
bool cmp(pair<PII, double> a, pair<PII, double> b)
{
    return a.second > b.second;
}
void solve()
{
    int T, n;
    cin >> T >> n;
    vector<pair<PII, double>> s(n);
    for (int i = 0; i < T; i++)
    {
        cin >> s[i].first.first >> s[i].first.second;
        s[i].second = 1.0 * s[i].first.second / s[i].first.first;

        //cout << s[i].first.first << ' ' << s[i].first.second << ' ' << s[i].second << endl;
    }
    sort(s.begin(), s.end(), cmp);

    double ans = 0;
    for (int i = 0; i < T; i++)
    {
        if (n < s[i].first.first)
        {
            ans += 1.0 * s[i].second * n;
            break;
        }
        else
            ans += s[i].first.second, n -= s[i].first.first;
        //cout << "n: " << n << "ans: " << ans << endl;
    }
    printf("%.2lf\n", ans);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}