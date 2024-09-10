#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int a[N], sum[N];
deque<int> q;
int main()
{
    int n, m,ans=-N;
    cin >> n >> m;
    for (int i = 1; i <= n;i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    q.push_back(0);
    for (int i = 1; i <= n;i++)
    {
        while(q.front()+m<i)
            q.pop_front();
        ans = max(ans, sum[i] - sum[q.front()]);
        while(!q.empty()&&sum[q.back()]>sum[i])
            q.pop_back();
        q.push_back(i);
    }
    cout << ans << endl;
}