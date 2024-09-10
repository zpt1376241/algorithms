#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int a[2000000],n,m;
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m);
    for(int i=0;i<m;i++)
        cout<<a[i]<<" ";
}