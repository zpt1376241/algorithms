#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    ll n,m;
    cin>>n>>m;
    vector<ll> p(n+10),q(m+10);
    for(ll i=0;i<n;i++)
        cin>>p[i];
    for(ll i=0;i<m;i++)
        cin>>q[i];
    sort(p.begin(),p.end());
    sort(q.begin(),q.end());
    ll ans=0,t=0;
    for(ll i=0;i<m;i++)
    {
        for(ll j=t;j<n;j++)
        {
            if(p[j]>=q[i])
            {
                ans+=p[j];
                p[j]=0;
                t=j+1;
                break;
            }
        }
    }
    if(ans)
        cout<<ans<<endl;
    else
        cout<<-1<<endl;

    return 0;
}