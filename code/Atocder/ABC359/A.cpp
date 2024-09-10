#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int ans=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="Takahashi")
            ans++;
    }
    cout<<ans<<endl;
    
    return 0;
}