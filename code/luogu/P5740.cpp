#include<cstdio>
#include<iostream>
using namespace std;
struct st
{
    char na[10];
    int ch,ma,en,sum;
}s[1001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i].na;
        cin>>s[i].ch>>s[i].ma>>s[i].en;
        s[i].sum=s[i].ch+s[i].en+s[i].ma;
    }
    st t;
    t.sum=-1;
    for(int i=1;i<=n;i++)
    {
        if(s[i].sum>t.sum)
            t=s[i];
    }
    cout<<t.na<<" "<<t.ch<<" "<<t.ma<<" "<<t.en;
}