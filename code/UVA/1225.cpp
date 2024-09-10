#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a[10]={0};
    int n,m,temp;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        memset(a,0,sizeof(a));
        cin>>m;
        for(int j=1;j<=m;j++)
        {
            int t=j;
            if(t<=9)
            {
                a[t]++;
                continue;
            }
            while(t!=0)
            {
                temp=t%10;
                a[temp]++;
                t/=10;
            }
        }
        cout<<a[0];
        for(int p=1;p<=9;p++)
        {
            printf(" %d",a[p]);
        }
        printf("\n");
    }
}