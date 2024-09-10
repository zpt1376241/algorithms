#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool a(int n)//检查质数
{
    if(n==2)
        return 1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
bool b(int n)//检查回文
{
    int k=1,m[20];
    while(n>0)
    {
        m[k]=n%10;
        n/=10;
        k++;
    }
    for(int i=1;i<=k/2;i++)
    {
        if(m[i]!=m[k-i])
            return 0;
    }
    return 1;
}
bool c(int n)//检查位数
{
    if((1000<=n&&n<=9999)||(100000<=n&&n<=999999))
        return 0;
    return 1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    if(n==2)    printf("2\n");
    if(n%2==0)  n++;
    m=min(9999999,m);
    for(int i=n;i<=m;i+=2)
    {
        if(c(i)==0) continue;
        if(b(i)==0) continue;
        if(a(i)==0) continue;
        printf("%d\n", i);
    }
}