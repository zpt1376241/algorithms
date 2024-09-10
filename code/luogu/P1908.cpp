#include<cstdio>
#include<iostream>
using namespace std;
long long ans;
int n;
int r[510000],m[510000];
void f(int s,int t)
{
    if(s==t)    return;
    int mid=(s+t)/2;
    f(s,mid);
    f(mid+1,t);
    int i=s,j=mid+1,k=s;
    while(i<=mid&&j<=t)
    {
        if(m[i]<=m[j])
            r[k++]=m[i++];
        else
        {
            r[k++]=m[j++];
            ans+=mid-i+1;
        }
    }
    while(i<=mid)
        r[k++]=m[i++];
    while(j<=t)
        r[k++]=m[j++];
    for(int i=s;i<=t;i++)
        m[i]=r[i]; 
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>m[i];
    f(1,n);
    cout<<ans;
}