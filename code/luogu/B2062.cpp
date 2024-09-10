#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    long long a,n,aa=1;
    cin>>a>>n;
    //cout<<pow(a,n)<<endl;
    for(int i=1;i<=n;i++){
        aa*=a;
    }
    cout<<aa;
}