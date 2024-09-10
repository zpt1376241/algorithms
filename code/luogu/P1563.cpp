#include<cstdio>
#include<iostream>
using namespace std;
struct pe
{
    int flag;
    char na[15];
}s[100001];
int ans=0;
int n,m;
void  f(int x,int y,int i)
{
    if(x==0&&s[i].flag==0)  ans=(ans+n-y)%n;
    else if(x==0&&s[i].flag==1) ans=(ans+y)%n;
    else if(x==1&&s[i].flag==0) ans=(ans+y)%n;
    else if(x==1&&s[i].flag==1) ans=(ans+n-y)%n;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>s[i].flag>>s[i].na;
    int a,b;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        f(a,b,ans);
    }
    cout<<s[ans].na<<endl;
}