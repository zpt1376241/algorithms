#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define INF 0x7fffffff
const int maxn = 1e6 + 5;
const ll mod = 998244353;
int kace = 0, T = 1;
void solve()
{
    int n;
    cin >> n;
    int maxsum = -INF;
    int start = 1, end = 1, p = 1;
    int sum = 0;
    for (int i = 1; i <= n;i++)
    {
        int t;
        cin >> t;
        sum += t;
        if(sum>maxsum)
        {
            maxsum = sum;
            start = p;
            end = i;
        }
        if(sum<0)
        {
            sum = 0;
            p = i + 1;
        }
    }
    cout << "Case " << ++kace << ":" << endl;
    cout << maxsum << " " << start << " " << end << endl;
    if(T!=0)
        cout << endl;
}
signed main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    //int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}