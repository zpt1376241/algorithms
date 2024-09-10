#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    // for(int i=1;i<=l-1;i++)
    //     cout<<i<<" ";
    // for(int i=r;i>=l;i--)
    //     cout<<i<<" ";
    // for(int i=r+1;i<=n;i++)
    //     cout<<i<<" ";
    vector<int> s(n+5);
    for(int i=1;i<=n;i++)
        s[i]=i;
    reverse(s.begin()+l,s.begin()+r+1);
    for(int i=1;i<=n;i++)
    {
        if(i!=1)    cout<<" ";
        cout<<s[i];
    }
    cout<<endl;
}