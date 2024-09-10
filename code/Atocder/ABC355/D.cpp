#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    ll n;
    cin>>n;
    ll l[n+3]={},r[n+3]={};
    for(int i=0;i<n;i++)
        cin>>l[i]>>r[i];
    sort(l,l+n);
    sort(r,r+n);
    ll ans=1LL*n*(n-1)/2;
    for(ll i=0,j=0;i<n;i++)
    {
        while(j<n&&r[j]<l[i])
            j++;
        ans-=j;
    }
    cout<<ans<<endl;

    return 0;   
}