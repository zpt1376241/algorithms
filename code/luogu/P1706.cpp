#include<cstdio>
#include<iostream>
#include<algorithm>
#include<iomanip>
int vis[25],ans[25];
int n;
using namespace std;
void dfs(int dep)
{
    if(dep==n+1)
    {
        for(int i=1;i<=n;i++)
            cout<<setw(5)<<ans[i];
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            ans[dep]=i;
            dfs(dep+1);
            vis[i]=0;
        }
    }
}
int main()
{
    cin>>n;
    dfs(1);
}