#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
double a,b;
int p[4];
int main()
{
    int n;
    int m;
    int ans;
    while(scanf("%d",&n)!=EOF)
    {
        ans=8000000;
        for(int i=1;i<=3;i++)
        {
            cin>>a>>b;
            m=ceil(1.0*n/a);
            p[i]=m*b;
            if(p[i]<ans)    ans=p[i];
        }
        cout<<ans<<endl;
    }
}
