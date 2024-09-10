#include<iostream>
#include<cstdio>
using namespace std;
int n,a[5005][5005];
int len=1;
void f(int k)
{
    for(int i=1;i<=len;i++)
    {
        a[k][i]+=a[k-1][i]+a[k-2][i];
        if(a[k][i]>=10)
        {
            a[k][i+1]=a[k][i]/10;
            a[k][i]%=10;
        }
    }
    if(a[k][len+1])   len++;
}
int main()
{
    a[1][1]=1;a[2][1]=2;
    cin>>n;
    for(int i=3;i<=n;i++)
        f(i);
    for(int i=len;i>=1;i--)
        cout<<a[n][i];
}