#include<cstdio>
#include<iostream>
using namespace std;
int s[101][101];
int flag;
int f(int i,int j)
{
    if(s[i][j]==1)  return 0;
    int a=s[i-1][j-1]+s[i-1][j]+s[i-1][j+1];
    int b=s[i][j-1]+s[i][j+1];
    int c=s[i+1][j-1]+s[i+1][j]+s[i+1][j+1];
    flag=1;
    return a+b+c;
}
int main()
{
    int n,m;
    char t;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>t;
            if(t=='*')  s[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(f(i,j)==0&&flag==0)
                cout<<"*";
            else
            {
                cout<<f(i,j);
                flag=0;
            }
        }
        cout<<endl;
    }
}