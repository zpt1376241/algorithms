#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int arr[N];
int sum, m;
void solve()
{
    sum = 0;
    memset(arr, 0, sizeof arr);
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr, arr + m);
    if (m <= 2)
        cout << 0 << endl;
    else
    {
        for (int i = 0; i < m - 2; i++)
            sum += arr[i];
        cout << sum << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}