#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int ac=10000;
int main()
{
    int n,q,a[ac],x,kase=0;
    while(scanf("%d %d",&n,&q)!=EOF&&n)
    {
        for(int i=0;i<n;i++)
            cin>>a[i];
        printf("CASE# %d:\n",++kase);
        sort(a,a+n);
        while(q--)
        {
            scanf("%d",&x);
            int s=lower_bound(a,a+n,x)-a;
            if(a[s]==x)
                printf("%d found at %d\n",x,s+1);
            else
                printf("%d not found\n",x);
        }
    }
} 