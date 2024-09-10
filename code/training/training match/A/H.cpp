#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int,int>
#define inf 0x3f3f3f3f
const int maxn =1e5+5;
const ll mod=998244353;
ll m=9223372036854775807;
void solve()
{
    string s;   cin>>s;

    ll ans=0,t=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i-1])    t+=2*i;
        else    t+=i;
        if(s[i]=='1')  t++;
        else    t+=2;
        ans+=t;   
    }
    cout<<ans<<endl;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;      cin>>N;
    while(N--)  solve();

    return 0;
}