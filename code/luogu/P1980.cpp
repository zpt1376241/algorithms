#include<cstdio>
#include<iostream>
using namespace std;
int a[10];
int main()
{
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>0;j/=10)
        {
            int t=j%10;
            a[t]++;
        }
    }
    cout<<a[x]<<endl;;
}