#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        int ans = 0, now=0;
        for (int j = i, cnt = 1; cnt <= n; cnt++)
        {
            if(j>n)
                j -= n;
            now += v[j];
            if(now>=m&&cnt!=n)
            {
                ans++;
                now = 0;
            }
            j++;
        }
        cout << ans << " ";
    }
}