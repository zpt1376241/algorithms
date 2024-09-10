#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        vector<long long>
            dp(n, LLONG_MAX);
        dp[0] = 0;

        for (int i = 1; i < n; ++i)
        {
            for (int j = 0; j <= min(i, m); ++j)
            {
                if (i - j - 1 >= 0)
                {
                    dp[i] = min(dp[i], dp[i - j - 1] + a[i - j]);
                }
            }
        }

        long long min_defense = LLONG_MAX;
        for (int i = 0; i < n; ++i)
        {
            min_defense = min(min_defense, dp[i]);
        }

        cout << min_defense << endl;
    }
    return 0;
}
