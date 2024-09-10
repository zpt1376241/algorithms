#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int,int>
#define inf 0x3f3f3f3f
const int maxn =1e5+5;
const ll mod=998244353;
ll m=9223372036854775807;
void solve();
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll a,b,sum=0;
    for(int i=1;i<=5;i++)
    {
        cin>>a>>b;
        sum+=a*b;
    }
    sum/=5;
    int x,y;
    cin>>x>>y;
    cout<<x*sum/y;

    return 0;
}