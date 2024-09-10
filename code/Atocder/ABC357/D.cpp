#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=998244353;
ll qpow(ll a,ll n)
{
    ll res=1;
    while(n)
    {
        if(n&1) res=1ll*res*a%mod;
        a=1ll*a*a%mod;
        n>>=1;
    }
    return res;
}
ll get_len(ll n)
{
    ll ans=0;
    while(n)
        ans++,n/=10;
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    ll n;  cin>>n;
    ll l=get_len(n);
    ll c1=qpow(10,n%(mod-1ll)*l%(mod-1ll))-1ll;
    ll c2=qpow(10,l)-1ll;
    c2=qpow(c2,mod-2ll);
    ll ans=1ll*n%mod*c1%mod*c2%mod;
    cout<<ans<<endl;

    return 0;
}