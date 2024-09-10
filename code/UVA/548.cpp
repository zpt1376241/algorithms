#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int max_=100010;
int in_order[max_],post_order[max_],lch[max_],rch[max_];
int n;
bool read_list(int *a)
{
    string line;
    if(!getline(cin,line))   return false;
    stringstream ss(line);
    n=0;
    int x;
    while(ss>>x)  a[n++]=x;
    return n>0;
}
int build(int l1,int r1,int l2,int r2)
{
    if(l1>r1)   return 0;
    int root=post_order[r2];
    int p=l1;
    while(in_order[p]!=root)  p++;
    int cnt=p-l1;
    lch[root]=build(l1,p-1,l2,l2+cnt-1);
    rch[root]=build(p+1,r1,l2+cnt,r2-1);
    return root;
}
int ans,sum;
void dfs(int u,int _sum)
{
    _sum+=u;
    if(!lch[u]&&!rch[u])
    {
        if(_sum<sum||(_sum==sum&&u<ans))
        {
            ans=u;
            sum=_sum;
        }
    }
    if(lch[u])  dfs(lch[u],_sum);
    if(rch[u])  dfs(rch[u],_sum);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while(read_list(in_order))
    {
        read_list(post_order);
        build(0,n-1,0,n-1);
        sum=10000000;
        dfs(post_order[n-1],0);
        cout<<ans<<endl;
    }
    
    return 0;
}