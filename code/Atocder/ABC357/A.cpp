#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll n,m,ans=0;
    cin>>n>>m;
    while(n--)
    {
        int t;
        cin>>t;
        if(m>=t)
            ans++;
        m-=t;
    }
    cout<<ans<<endl;
    return 0;
}