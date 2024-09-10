#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int s[105],flag=1;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int t;
        cin>>t;
        a.push_back(t);
    }
    for(int i=1;i<=n;i++)
    {
        int t;
        for(int j=1;j<=m;j++)
        {
            cin>>t;
            s[j]+=t;
        }
    }
    // cout<<"###"<<endl;
    // for(int i=1;i<=m;i++)
    // {
    //     cout<<s[i]<<" ";
    // }
    for(int i=1;i<=m;i++)
    {
        if(a[i-1]>s[i])
        {
            cout<<"No"<<endl;
            flag=0;
            break;
        }
    }
    if(flag)    cout<<"Yes"<<endl;
}