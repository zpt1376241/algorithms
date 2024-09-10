#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const int mod = 998244353;

vector<int> s[10];
void solve()
{
    for (int i = 1; i <= 9;i++)
        s[i].clear();
    s[2].push_back(1);
    s[3].push_back(2);
    s[4].push_back(3);

    for (int ii = 1; ii <= 12;ii++)
    {
        int n, m;
        cin >> n >> m;
        int pos, p;
        for (int i = 1; i <= 9;i++)
        {
            bool ok = false;
            for (int j = 0; j < s[i].size();j++)
            {
                if(s[i][j]==n)
                {
                    pos = i;
                    p = j;
                    ok = true;
                    break;
                }
            }
            if(ok)
                break;
        }

        if(p==s[pos].size()-1)
        {
            s[pos + m].push_back(s[pos].back());
            s[pos].pop_back();
        }
        else
        {
            stack<int> t;
            int d = s[pos].size() - p;
            while(d--)
            {
                t.push(s[pos].back());
                s[pos].pop_back();
            }
            while(!t.empty())
            {
                s[pos + m].push_back(t.top());
                t.pop();
            }
        }
    }
    if (s[9].size() == 3)
        cout << 'Y' << endl;
    else
        cout << 'N' << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}