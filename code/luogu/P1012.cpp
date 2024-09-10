#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(const string &a,const string &b)
{
    return (a+b)>(b+a);
}
string s[50];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>s[i];
    sort(s+1,s+n+1,cmp);
    for(int i=1;i<=n;i++)
        cout<<s[i];
}