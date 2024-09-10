#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=100010;
struct range
{
    int l,r;
    bool operator< (const range &a) const
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
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        Range[i]={l,r};
    }
    sort(Range,Range+n);
    int ans=0,s=-2e9;
    for(int i=0;i<n;i++)
    {
        if(Range[i].l>s)
        {
            ans++;
            s=Range[i].r;
        }
    }
    cout<<ans<<endl;

    return 0;
}