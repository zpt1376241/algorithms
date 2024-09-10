#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,t=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%02d",++t);
        }
        cout<<endl;
    }
    cout<<endl;
    t=0;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<"  ";
        }
        for(int k=1;k<=i;k++)
        {
            printf("%02d",++t);
        }
        cout<<endl;
    }
}