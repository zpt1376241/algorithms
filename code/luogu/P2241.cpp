#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long n,m,sum=0,sum0=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            sum+=min(i,j);
            sum0+=i*j;
        }
    }
    cout<<sum<<" "<<sum0-sum;
}