#include <iostream>
#include <map>
#include <vector>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m;
        map<int, int> ma;
        map<int, bool> mb;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            ma[x]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            ma[x]++;
            mb[x] = true;
        }
        vector<int> v;
        v.push_back(0);
        int sum = 0;
        for (auto [x, y] : ma)
        {
            if (mb[x] != true)
            {
                sum += y;
            }
            else
            {
                v.push_back(sum);
            }
        }
        v.push_back(sum);
        int ans = 0;
        for (int i = 0; i < v.size() - 1; i++)
        {
            ans = max(ans, v[i + 1] - v[i]);
        }
        if (ans != 0)
            cout << ans << endl;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}