#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=100010;
struct cow
{
    int p,num;
    bool operator<(const cow& a)
    {
        return p<a.p;
    }
}Cow[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int s_num,n;
    cin>>s_num>>n;
    for(int i=1;i<=n;i++)
        cin>>Cow[i].p>>Cow[i].num;
    sort(Cow+1,Cow+n+1);
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(Cow[i].num<s_num)
        {
            ans+=Cow[i].p*Cow[i].num;
            s_num-=Cow[i].num;
        }
        else
        {
            ans+=s_num*Cow[i].p;
            s_num-=s_num;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}