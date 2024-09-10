// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// typedef long long ll;
// typedef unsigned long long ull;
// #define PII pair<int, int>
// #define inf 0x3f3f3f3f
// #define INF 0x7fffffff
// const int maxn = 1e6 + 5;
// const ll mod = 998244353;
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 1, x; i <= n;i++)
//     {
//         cin >> x;
//         v.insert(lower_bound(v.begin(), v.end(), x), x);
//         if(i%2==1)
//             cout << v[i / 2] << endl;
//     }
// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int T = 1;
//     // cin >> T;
//     while (T--)
//     {
//         solve();
//     }

//     return 0;
// }

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
void solve()
{
    int n, t;
    int mid = 0;
    priority_queue<int, vector<int>, greater<int> > p1;
    priority_queue<int, vector<int>, less<int> > p2;
    cin >> n;
    if(n>=1)
    {
        cin >> t;
        mid = t;
        cout << mid << endl;
    }
    for (int i = 2; i <= n;i++)
    {
        cin >> t;
        if(t>mid)
            p1.push(t);
        else
            p2.push(t);
        if(i%2==1)
        {
            while(p1.size()!=p2.size())
            {
                if(p1.size()<p2.size())
                {
                    p1.push(mid);
                    mid = p2.top();
                    p2.pop();
                }
                else
                {
                    p2.push(mid);
                    mid = p1.top();
                    p1.pop();
                }
            }
            cout << mid << endl;
        }    
    }
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