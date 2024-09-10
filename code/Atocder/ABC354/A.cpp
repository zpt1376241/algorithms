#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,ans=0,h=0;
    cin>>n;
    while(n>=h)
    {
        h+=pow(2,ans++);
    }
    cout<<ans<<endl;

    return 0;
}