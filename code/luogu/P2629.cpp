#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;
    vector<int> a(2 * n + 1), sum(2 * n + 1);
    deque<int> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i + n] = a[i];
    }
    for (int i = 1; i <= 2 * n - 1; i++)
        sum[i] = sum[i - 1] + a[i];
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        while (!q.empty() && sum[q.back()] > sum[i])
            q.pop_back();
        q.push_back(i);
        if (i >= n)
        {
            while (!q.empty() && q.front() <= i - n)
                q.pop_front();
            if (sum[q.front()] - sum[i - n] >= 0)
                ans++;
        }
    }
    cout << ans << endl;
}