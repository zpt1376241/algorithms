#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n,k;
    cin>>n>>k;
    vector<int> p(n);
    vector<int> pos(n);
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        --p[i];
        pos[p[i]]=i;
    }
    set<int> s;
    for(int i=0;i<k;i++)
        s.insert(pos[i]);
    int ans=n+1;
    for (int i=k-1;i<n;i++)
    {
        ans=min(ans,*prev(s.end())-*s.begin());
        if(i<n-1)
        {
        s.insert(pos[i+1]);
        s.erase(pos[i-(k-1)]);
        }
    }
    cout<<ans<<endl;

    return 0;
}