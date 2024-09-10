#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int, int>
#define inf 0x3f3f3f3f
const int maxn = 1e6 + 5;
const ll mod = 998244353;
int a[100000], b[100000], c[100000];
void solve()
{

    stack<int> q;
    int n;     
    cin >> n;
    vector<int> a(n + 1), b(n + 1);
    int sum = 1;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i]; 
    for (int i = 1; i <= n; i++)
    {
        q.push(a[i]);   
        while ((q.top()) == b[sum]) 
        {
            q.pop(), sum++; 
            if (q.empty())
                break; 
        }
    }
    if (q.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}