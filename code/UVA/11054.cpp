#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,k,ans=0;
    while(cin>>n&&n)
    {
        ans=0;k=0;a=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            ans+=abs(k);
            k+=a;
        }
        cout<<ans<<endl;
    }
}