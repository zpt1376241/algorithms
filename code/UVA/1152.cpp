#include<bits/stdc++.h>
using namespace std;
int a[4005],b[4005],c[4005],d[4005],sum[4005*4005];
int main()
{
    int n,k,fg=0;
    scanf("%d",&n);
    while(n--)
    {
        long long ans=0;
        scanf("%d",&k);
        for(int i=0;i<k;i++)
            scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
        fg=0;
        for(int i=0;i<k;i++)
            for(int j=0;j<k;j++)
                sum[fg++]=a[i]+b[j];
        sort(sum,sum+fg);
        for(int i=0;i<k;i++)
            for(int j=0;j<k;j++)
                ans+=upper_bound(sum,sum+fg,-c[i]-d[j])-lower_bound(sum,sum+fg,-c[i]-d[j]);
        printf("%lld\n",ans);
        if(n)   printf("\n");
    }
}