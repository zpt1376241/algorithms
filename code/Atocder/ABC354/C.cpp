#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct ca
{
    int a,c;
    int k;
}s[200005];
bool cmp(ca m,ca n){return m.a>n.a;}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i].a>>s[i].c;
        s[i].k=i;
    }
    sort(s+1,s+n+1,cmp);
    vector<int> ans;
    ll t=1e9+1;
    for(int i=1;i<=n;i++)
    {
        if(s[i].c<t)
        {
            t=s[i].c;
            ans.push_back(s[i].k);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}