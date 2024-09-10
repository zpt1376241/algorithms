#include<cstdio>
#include<iostream>
using namespace std;
int a[20001];
int main()
{
    int n,b;
    cin>>n>>b;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(a[j]<a[j+1])
                swap(a[j],a[j+1]);
        }
    }
    int i,sum=0;
    for(i=1;sum<b;i++)
        sum+=a[i];
    cout<<i-1;

}