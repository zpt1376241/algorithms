#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 15;
int ten[N], dp[N];
int cnt1[N], cnt2[N];
int num[N];
void init()
{
    ten[0] = 1;
    for (int i = 1; i <= N;i++)
    {
        dp[i] = i * ten[i - 1];
        ten[i] = 10 * ten[i - 1];
    }
}
void solve(int x, int *cnt)
{
    int len = 0;
    while(x)
    {
        num[++len] = x % 10;
        x /= 10;
    }
    for (int i = len; i >= 1;i--)
    {
        for (int j = 0; j <= 9;j++)
            cnt[j] += dp[i - 1] * num[i];
        for (int j = 0; j < num[i];j++)
            cnt[j] += ten[i - 1];
        int num2 = 0;
        for (int j = i - 1; j >= 1;j--)
            num2 = num2 * 10 + num[j];
        cnt[num[i]] += num2 + 1;
        cnt[0] -= ten[i - 1];
    }
}
signed main()
{
    init();
    int a, b;
    cin >> a >> b;
    solve(a - 1, cnt1), solve(b, cnt2);
    for (int i = 0; i <= 9;i++)
        cout << cnt2[i] - cnt1[i] << ' ';
    cout << endl;
}


