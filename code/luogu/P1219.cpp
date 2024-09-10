#include<bits/stdc++.h>
using namespace std;
int n,ans;
const int maxn=1000;
vector<int> s;
bool col[maxn],dg[maxn],udg[maxn]; //列， 主对角线， 副对角线
void dfs(int u)
{
    if(u==n)
    {
        ans++;
        if(ans<=3&&s.size()==n)
        {
            for(int i=0;i<n;i++)  cout<<s[i]<<' ';
            cout<<endl;
        }
        return ;
    }
    for(int i=1;i<=n;i++)
        if(!col[i]&&!dg[u+i-1]&&!udg[u-i+n])     //y=u,  x=i
        {
            s.push_back(i);
            col[i]=dg[u+i-1]=udg[u-i+n]=true;
            dfs(u+1);
            col[i]=dg[u+i-1]=udg[u-i+n]=false;
            s.pop_back();
        }
}
int main()
{
    cin.tie(0); cout.tie(0);
    cin>>n;
    dfs(0);
    cout<<ans;
}