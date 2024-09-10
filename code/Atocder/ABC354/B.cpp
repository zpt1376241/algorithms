#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,sum=0;
    cin>>n;
    vector<string> s;
    for(int i=1;i<=n;i++)
    {
        string t;
        cin>>t;
        s.push_back(t);
        int k;
        cin>>k;
        sum+=k;
    }
    sort(s.begin(),s.end());
    cout<<s[sum%s.size()]<<endl;


    return 0;
}