#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PII pair<int, int>
#define inf 0x3f3f3f3f
#define lowbit(x) ((x) & (-x))
const int maxn = 1e6 + 5;
const int mod = 998244353;

bool f(const vector<int> &A, int N, int M, int x)
{
    int tot = 0;
    for (int i = 0; i < N; ++i)
    {
        tot += min(x, A[i]);
        if (tot > M)
            return false;
    }
    return tot <= M;
}

void solve()
{
    int N, M, sum = 0;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
        sum += A[i];
    }

    if (sum <= M)
    {
        cout << "infinite" << endl;
        return;
    }

    int l = 0, r = *max_element(A.begin(), A.end());
    int ans = 0;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (f(A, N, M, mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
