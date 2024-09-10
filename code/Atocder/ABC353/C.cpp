#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull s=1e8;
ull f(ull x,ull y)
{
    return (x+y)%s;
}
ull a[300010];
int main()
{
    int n;
    cin>>n;
    ull ans=0,x=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        ans+=a[i]*(n-1);
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        int now=lower_bound(a+i+1,a+n+1,s-a[i])-a-1;
		x+=n-now;
    }
    cout<<ans-x*s<<endl;
}