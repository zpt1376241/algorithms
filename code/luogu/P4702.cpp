#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int t,sum=0;
    vector<int> p;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        sum+=t;
    }
    if(sum&1)   cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
    return 0;
}