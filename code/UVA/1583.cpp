#include<cstdio>
#include<iostream>
using namespace std;
int a[100001],st[100001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=100000;i++)
    {
        int t=i;
        int sum=i;
        while(t>0)
        {
            sum+=(t%10);
            t/=10;
        }
        if(sum>100000)  continue;
        if(st[sum]==0||i<st[sum])   st[sum]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        printf("%d\n",st[a[i]]);
    }
}