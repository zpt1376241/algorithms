#include<cstdio>
#include<iostream>
using namespace std;
struct st
{
    int id,sca,scb;
    int sc;
}s[1001];
int f(st t)
{
    if(t.sca+t.scb>140&&t.sc>=800)   return 1;
    else return 0;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i].id>>s[i].sca>>s[i].scb;
        s[i].sc=s[i].sca*7+s[i].scb*3;
    }
    for(int i=1;i<=n;i++)
    {
        if(f(s[i])) cout<<"Excellent"<<endl;
        else    cout<<"Not excellent"<<endl;
    }
}