#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    ll n,t,ans=0;
    cin>>n>>t;
    ll last=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>ans;
        if(last>ans)
        {
            ans+=(last-ans);
        }
        ans+=t;
        cout<<ans<<endl;
        last=ans;
    }
    


    return 0;
}