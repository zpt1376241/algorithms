#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> s(n+1);
    vector<int> sum(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        sum[i]=sum[i-1]+s[i];
    }
    for(int i=1;i<=m;i++)
    {
        int l,r;
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }
}