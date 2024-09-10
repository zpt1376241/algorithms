#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int s[501][501],t[501][501];
void f(int x,int y,int r,int z)
{
    memset(t,0,sizeof(t));
    for(int i=x-r;i<=x+r;i++)
            for(int j=y-r;j<=y+r;j++)
                t[i][j]=s[i][j];
    if(z==1)
    {
        int k=x-r,p=y+r;
        for(int i=x-r;i<=x+r;i++)
        {
            for(int j=y-r;j<=y+r;j++)
            {
                    s[i][j]=t[k][p];
                    k++;
            }
            k=x-r;p--;
        }
    }
    else if(z==0)
    {
        int k=x+r,p=y-r;
        for(int i=x-r;i<=x+r;i++)
        {
            for(int j=y-r;j<=y+r;j++)
            {
                s[i][j]=t[k][p];
                k--;
            }
            k=x+r;p++;
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1,temp=0;i<=n;i++)
        for(int j=1;j<=n;j++)
            s[i][j]=++temp;
    /*
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<s[i][j];
            if(j!=n)    cout<<" ";
            else cout<<endl;
        }
    }
    cout<<endl;
    */
    int x,y,r,z;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y>>r>>z;
        f(x,y,r,z);
        /*
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<s[i][j];
                if(j!=n)    cout<<" ";
                else cout<<endl;
            }
        }
        cout<<endl;
        */
    }   
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<s[i][j];
            if(j!=n)    cout<<" ";
            else cout<<endl;
        }
    }
}