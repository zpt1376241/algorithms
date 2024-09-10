#include<iostream>
#include<cstdio>
using namespace std;
int n,k;
long long ans;
int a[30];
bool IsPrime(int n)
{
    int i;
    if(n<2||(n!=2&&n%2==0))
        return 0;
    else
    {
        for(i=3;i*i<=n;i+=2)
        {
            if(n%i==0)
                return 0;
        }
        return 1;
    }
}
void dfs(int dep,int sum,int startx)
{
    if(dep==k)
    {
        if(IsPrime(sum))
            ans++;
        return;
    }
    for(int i=startx;i<n;i++)
        dfs(dep+1,sum+a[i],i+1);
    return;
}
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    dfs(0,0,0);
    printf("%d\n",ans);
}