#include<cstdio>
#include<iostream>
using namespace std;
int a[5005][5005];
int len=1;
void f(int k)
{
    for(int i=1;i<=len;i++)
    {
        a[k][i]+=a[k-1][i]+a[k-2][i];
        if(a[k][i]>=10)
        {
            a[k][i+1]+=a[k][i]/10;
            a[k][i]%=10;
        }
    }
    if(a[k][len+1]) len++;
}
int main()
{
    a[1][1]=1;a[2][1]=2;
    int m,n;
    cin>>m>>n;
    for(int i=3;i<=n-m;i++)
        f(i);
    for(int i=len;i>=1;i--)
        cout<<a[n-m][i];
}