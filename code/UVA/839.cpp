#include<bits/stdc++.h>
using namespace std;
bool solve(int &m)
{
    int m1,d1,m2,d2;
    bool b1=true,b2=true;
    cin>>m1>>d1>>m2>>d2;
    if(!m1)     b1=solve(m1);
    if(!m2)     b2=solve(m2);
    m=m1+m2;
    return b1&&b2&&(m1*d1==m2*d2);
}
int main()
{
    int n,m;
    cin>>n;
    while(n--)
    {
        if(solve(m))    cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
        
        if(n)   cout<<endl;
    }
}