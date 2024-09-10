#include<bits/stdc++.h>
using namespace std;
int n,F;
vector<double> a;
int check(double mid)
{
    vector<double> s;
    for(int i=0;i<n;i++)
    {
        s.push_back(a[i]-mid);
        s[i]+=s[i-1];
    }
    double min_t=1e6,max_t=-1e6;
    for(int i=F-1;i<n;i++)
    {
        min_t=min(s[i-F],min_t);
        max_t=max(s[i]-min_t,max_t);
    }
    return max_t>0?1:0;
}
int main()
{
    cin>>n>>F;
    for(int i=1;i<=n;i++)
    {
        double t;
        cin>>t;
        a.push_back(t);
    }
    double l=-1e6,r=1e6;
    while(r-l>1e-5)
    {
    //    cout<<l<<" "<<r<<endl;
        double mid=(l+r)/2;
        if(check(mid))  l=mid;
        else r=mid;
    }
    cout<<(int)(r*1000)<<endl;
}