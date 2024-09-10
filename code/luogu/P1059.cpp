#include<cstdio>
#include<iostream>
using namespace std;
int n,ans;
int s[101],a[1001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        a[s[i]]++;
    }
    for(int i=1;i<=1000;i++)
    {
        if(a[i])
        ans++;
    }
    cout<<ans<<endl;;
    for(int i=1;i<=1000;i++)
    {
        if(a[i])
            cout<<i<<" "; 
    }
}