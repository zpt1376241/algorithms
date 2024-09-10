#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    set<int> s;
    cin>>n>>x>>y>>z;
    if(x>y) swap(x,y);
    for(int i=x;i<=y;i++)
        s.insert(i);
    if(s.count(z))  cout<<"Yes"<<endl;
    else    cout<<"No"<<endl;
}