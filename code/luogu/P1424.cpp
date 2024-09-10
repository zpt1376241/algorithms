#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    int p=6-x;
    if(p<0) p=0;
    n-=8-x;
    if(n<0) n=0;
    int p1=n-(n/7)*7;
    if(p1>5) p1=5;
    int ans=250*(p+n/7*5+p1);
    cout<<ans<<endl;
}