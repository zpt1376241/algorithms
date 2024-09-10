#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int ans=0,a[15],t;
    for(int i=1;i<=10;i++)
        cin>>a[i];
    cin>>t;
    for(int i=1;i<=10;i++)
    {
        if(a[i]<=t+30)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}