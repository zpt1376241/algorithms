#include<cstdio>
#include<iostream>
#include<iomanip>
using namespace std;
int n,r;
int ans[26];
void dfs(int dep)
{
    if(dep==r+1)
    {
        for(int i=1;i<=r;i++)
            cout<<setw(3)<<ans[i];
        cout<<endl;
        return;
    }
    for(int i=ans[dep-1]+1;i<=n;i++)
    {
        ans[dep]=i;
        dfs(dep+1);
    }
}
int main()
{
    cin>>n>>r;
    dfs(1);
}