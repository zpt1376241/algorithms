#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,x=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ll t;
        cin>>t;
        x=x^t;
    }
    cout<<x<<' '<<0<<endl;
    return 0;
}