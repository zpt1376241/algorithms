#include<cstdio>
#include<iostream>
#include<cstring>
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
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(strcmp(s[j].na,s[j+1].na)>0)
            {
                st t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(s[i].ch-s[j].ch<=5&&s[i].ch-s[j].ch>=-5)
            {
                if(s[i].en-s[j].en<=5&&s[i].en-s[j].en>=-5)
                {
                    if(s[i].ma-s[j].ma<=5&&s[i].ma-s[j].ma>=-5)
                    {
                        if(s[i].sum-s[j].sum<=10&&s[i].sum-s[j].sum>=-10)
                        {
                            cout<<s[i].na<<" "<<s[j].na<<endl;
                        }
                    }
                }
            }
        }
    }
}