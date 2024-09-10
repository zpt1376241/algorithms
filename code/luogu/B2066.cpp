#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[n+1],b[n+1],c[n+1],m[n+1];
    double t,t1=0;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    memset(m,0,sizeof(m));
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i]>>c[i];
        m[i]=sqrt(a[i]*a[i]+b[i]*b[i]);
        t=m[i]/50*2+c[i]*1.5;
        t1+=t;
    }
    cout<<(int)(ceil(t1));
}