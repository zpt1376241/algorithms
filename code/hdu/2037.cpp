#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=100010;
struct Range
{
    int l,r;
    bool operator<(const Range& a)
    {
        return r<a.r;
    }
}range[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    while(cin>>n&&n)
    {
        for(int i=1;i<=n;i++)
            cin>>range[i].l>>range[i].r;
        sort(range+1,range+n+1);
        int ans=0,p=-2e9;
        for(int i=1;i<=n;i++)
        {
            if(p<=range[i].l)
            {
                ans++;
                p=range[i].r;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}