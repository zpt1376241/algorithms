#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll a,b,n;
    ll sum=0;
    cin>>n;
    ll mx=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        sum+=a;
        mx=max(mx,b-a);
    }
    cout<<mx+sum<<endl;
    return 0;
}