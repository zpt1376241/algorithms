#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    vector<ll> s(n+1);
    for(ll i=0;i<n;i++)
        cin>>s[i];
    ll ans=s[0];
    ll maxn=s[0];
    for(int i=0;i<n;i++)
    {
        if(s[i]>maxn)   maxn=s[i];
        ans+=ans;
        cout<<ans<<" ";
    }    
   return 0;
}