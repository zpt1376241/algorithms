#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define PII pair<int,int>
#define inf 0x3f3f3f3f
const int maxn =1e5+5;
const ll mod=998244353;
ll m=9223372036854775807;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin>>N;
    while(N--)
    {
        int k;  cin>>k;
        vector<int> cnt(k+1);
        bool flag=false;
        vector<pair<string,PII>> s(k+1);
        int r=0;
        for(int i=1;i<=k;i++)
        {
            cin>>s[i].first>>s[i].second.first;
            if(s[i].first!="add")   cin>>s[i].second.second;
        }
        for(int i=1;i<=k; )
        {
            if(cnt[i]>=256)
            {
                flag=true;
                break;
            }
            cnt[i]++;
            if(s[i].first=="add")
            {
                r=(r+s[i].second.first)%256;
                i++;
            }
            else if(s[i].first=="beq")
            {
                if(s[i].second.first==r)    i=s[i].second.second;
                else i++;
            }
            else if(s[i].first=="bne")
            {
                if(s[i].second.first!=r)    i=s[i].second.second;
                else i++;
            }
            else if(s[i].first=="blt")
            {
                if(s[i].second.first>r)    i=s[i].second.second;
                else i++;
            }
            else if(s[i].first=="bgt")
            {
                if(s[i].second.first<r)    i=s[i].second.second;
                else i++;
            }
        }
        if(flag)    cout<<"No"<<endl;
        else    cout<<"Yes"<<endl;
    }

    return 0;
}