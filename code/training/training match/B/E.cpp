#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int,int>
#define inf 0x3f3f3f3f
const int maxn =1e6+5;
const ll mod=998244353;
ll m=9223372036854775807;
void solve();
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    if(s[s.length()-1]!='O')
    {
        cout<<"INVALID"<<endl;
        return 0;
    }
    for(int i=0;i<(int)s.length()-1;i++)
    {
        if(s[i]=='O'&&s[i+1]=='O')
        {
            cout<<"INVALID"<<endl;
            return 0;
        }
    }
    long double ans=0;
    for(int i=4; ;i++)
    {
        ans=(long double)(pow(2,i)-1)/3;
        if(ans!=(ll)ans)    continue;

        for(int i=s.length()-2;i>=0;i--)
        {
            if(s[i]=='E')   ans*=2;
            else if(s[i]=='O')  ans=(ans-1)/3;

            if(ans!=(ll) ans)   break;
        }
        
        if(ans!=(ll) ans)   continue;
        else break;
    }
    cout<<ans<<endl;
    
    return 0;
}