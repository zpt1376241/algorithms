#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fastPow(ll a,ll n,ll mod)
{
    ll ans=1%mod;
    a%=mod;
    while(n)
    {
        if(n&1) ans=(ans*a)%mod;
        a=(a*a)%mod;
        n>>=1;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a,b,p;
    cin>>a>>b>>p;
    cout<<fastPow(a,b,p)<<endl;;
    return 0;
}