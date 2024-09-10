#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<int> s;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        s.push_back(t);
    }
    sort(s.begin(),s.end());
    int ans=0;
    ans+=s[n-1]*s[n-1];
    for(int l=1,r=n-1;l<=n; )
    {
        ans+=(s[l]-s[r])*(s[l++]-s[r]);
        if(l<=r)    ans+=(s[l]-s[r])*(s[l]*s[r--]);
    }
    
    cout<<ans<<endl;
    
    return 0;
}