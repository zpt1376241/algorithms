#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    set<int> a;
    vector<int> s;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n+m;i++)
    {
        int t;
        cin>>t;
        s.push_back(t);
        if(i<=n)    a.insert(t);
    }
    sort(s.begin(),s.end());
    for(int i=0;i<n+m-1;i++)
    {
        if(a.count(s[i])&&a.count(s[i+1]))
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}