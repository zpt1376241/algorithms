#include<iostream>
#include<vector>
using namespace std;
int n,m,t;
int main()
{
    vector<int> a;

    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        a.push_back(t);
    }
    for(int i=1;i<=m;i++)
    {
        cin>>t;
        cout<<a[t-1]<<endl;
    }
    return 0;
}