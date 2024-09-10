#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int a[1001],b[1001],flag;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n-1;i++)
        b[i]=abs(a[i+1]-a[i]);
    for(int i=1;i<=n-2;i++)
    {
        for(int j=1;j<=n-1-i;j++)
        {
            if(b[j]>b[j+1])
                swap(b[j],b[j+1]);
        }
    }
    for(int i=1;i<=n-1;i++)
    {
        if(b[i]!=i)
            flag=1;
    }
    if(flag==1)
        cout<<"Not jolly";
    else
        cout<<"Jolly";
}