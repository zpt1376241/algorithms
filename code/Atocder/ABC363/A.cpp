#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int,int>
#define inf 0x3f3f3f3f
const int maxn =1e6+5;
const ll mod=998244353;
ll m=9223372036854775807;
void solve();
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    //cin >> T;
    //while(T--){
      //  solve();
    //}
    int n;
    cin >> n;
    cout << (n/100+1)* 100 - n << endl;

    return 0;
}