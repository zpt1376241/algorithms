#include<cstdio>
#include<iostream>
using namespace std;
#define ll long long
ll  f(ll a)
{
    if(a!=0)    return a*f(a-1);
    else   return 1;
}
int main()
{
    ll  n;
    cin>>n;
    cout<<f(n);
}