#include<bits/stdc++.h>
using namespace std;
const int N=100010;
int path[N];
bool st[N];
int n;
void dfs(int u)
{
    if(u==n)
    {
        for(int i=0;i<n;i++)
            cout<<path[i]<<' ';
        cout<<endl;
        return ;
    }
    for(int i=1;i<=n;i++)
        if(!st[i])
        {
            path[u]=i;
            st[i]=!st[i];
            dfs(u+1);
            st[i]=!st[i];
        }
}
int main()
{
    cin>>n;
    dfs(0);
}