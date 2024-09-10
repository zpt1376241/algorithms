#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,ans=0;
    cin>>n;
    vector<int> s(2*n+1);
    for(int i=0;i<2*n;i++)
        cin>>s[i];
    for(int i=0;i<2*n-1;i++)
    {
        if(s[i]==s[i+2])
            ans++;
    }
    cout<<ans<<endl;
    
    return 0;
}