#include<bits/stdc++.h>
using namespace std;
int a[200010];
int main()
{
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=2;i<=n;i++)
    {
        if(a[i]>a[1])
        {
            ans=i;
            break;
        }
    }
    if(ans==0)  ans=-1;
    cout<<ans<<endl;
    
}