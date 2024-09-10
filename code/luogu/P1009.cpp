#include<cstdio>
#include<iostream>
using namespace std;
int a[1005],b[1005];
int main()
{
    a[0]=1;b[0]=1;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=100;j++)
        {
            b[j]*=i;
        }
        for(int j=0;j<=100;j++)
        {
            if(b[j]>9)
            {
                b[j+1]+=b[j]/10;
                b[j]%=10;
            }
        }
        for(int j=0;j<=100;j++)
        {
            a[j]+=b[j];
            if(a[j]>9)
            {
                a[j+1]+=a[j]/10;
                a[j]%=10;
            }
        }
    }
    int x;
    for(x=100;x>0&&a[x]==0;x--);
    for( ;x>=0;x--)
        cout<<a[x];
}