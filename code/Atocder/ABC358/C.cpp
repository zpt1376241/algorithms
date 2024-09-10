#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp(vector<string> &s,ll n,ll m)
{
    vector<ll> k(n);
    for(ll i=0;i<n;i++)
    {
        ll p=0;
        for(ll j=0;j<m;j++)
        {
            if(s[i][j]=='o')
                p|=(1<<j);
        }
        k[i]=p;
    }
    vector<ll> dp(1<<m,LONG_LONG_MAX);
    dp[0]=0;
    for (ll p=0;p<(1<<m);++p)
    {
        if(dp[p]==LONG_LONG_MAX) continue;
        for(ll i=0;i<n;++i)
        {
            ll q=p|k[i];
            dp[q]=min(dp[q],dp[p]+1);
        }
    }
    return dp[(1<<m)-1];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll n,m;
    cin>>n>>m;
    vector<string> s(n+3);
    for(ll i=0;i<n;i++)
        cin>>s[i];
    cout<<dp(s,n,m)<<endl;
    return 0;
}