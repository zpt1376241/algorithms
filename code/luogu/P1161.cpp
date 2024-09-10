#include<bits/stdc++.h>
using namespace std;
int m[500000];
int f(double a,int t)
{
    double n;
    n=a*t;
    if(n-(int)(a*t)!=0) return (int)(a*t);
    else return n;
}
int main()
{
    int n,t;
    double a;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>t;
        for(int p=1;p<=t;p++){
            if(m[f(a,p)]==0)    m[f(a,p)]=1;
            else if(m[f(a,p)]==1)   m[f(a,p)]=0;
        }
    }
    for(int i=1; ;i++){
        if(m[i]==1){
            cout<<i;
            break;
        }
    }
    return 0;
}