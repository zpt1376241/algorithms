#include <bits/stdc++.h>
using namespace std;
#define N 1000010
int maxx[N], minx[N], s[N], n;
int main()
{
    cin >> n;
    maxx[0] = 0;
    vector<int> s1;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        maxx[i] = max(maxx[i - 1], s[i]);
    }
    minx[n + 1] = 1000001;
    for (int i = n; i >= 1; i--)
    {
        minx[i] = min(minx[i + 1], s[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (s[i] >= maxx[i - 1] && s[i] < minx[i + 1])
        {
            s1.push_back(s[i]);
        }
    }

    cout << s1.size();
    for (int i = 0; i < min((int)s1.size(), 100); i++)
        cout << ' ' << s1[i];

    return 0;
}