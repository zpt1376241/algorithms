#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=100010;
struct range
{
    int l,r;
    bool operator<(const range& a)
    {
        return r<a.r;
    }
}Range[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int l,r;
        cin>>l>>r;
        Range[i]={l,r};
    }
    sort(Range+1,Range+n+1);
    int ans=0,now_r=-2e9;
    for(int i=1;i<=n;i++)
    {
        if(now_r<Range[i].l)
        {
            ans++;
            now_r=Range[i].r;
        }
    }
    cout<<ans<<endl;

    return 0;
}