#include <bits/stdc++.h>
#define sz(a) a.size()
#define ll long long
using namespace std;
const int N = 10000;
void solve()
{
    long long n, cnt = 0;
    cin >> n;
    while (1)
    {
        if (n <= 3)
        {
            cnt += n;
            break;
        }
        else if (n % 2 == 0)
        {
            n /= 2;
            cnt++;
        }
        else if (n % 2 == 1)
        {
            n = n / 2 + 1;
            cnt++;
        }
    }
    cout << cnt;
}
int main()
{
    int tcase = 1;
    // cin >> tcase;
    while (tcase--)
        solve();
    return 0;
}