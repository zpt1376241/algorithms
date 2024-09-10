#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,m,t,sum,max=-1,min=11;
    double ans=0,p;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>t;
            sum+=t;
            if(t>max)   max=t;
            if(t<min)   min=t;
        }
        sum-=max;sum-=min;
        p=1.0*sum/(m-2);
        if(p>ans)   ans=p;
        sum=0;max=-1;min=11;
    }
    printf("%.02lf",ans);
}