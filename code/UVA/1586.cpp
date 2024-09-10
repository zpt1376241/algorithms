#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char s[1001];
int main()
{
    int n,num,flag,flag2;
    double p,ans;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        ans=0;
        int len=strlen(s);
        for(int j=0;j<len;j++)
        {
            flag=0;flag2=0;
            if(isalpha(s[j]))
            {
                if(s[j]=='C')   p=12.01;
                else if(s[j]=='H')   p=1.008;
                else if(s[j]=='O')   p=16.00;
                else if(s[j]=='N')   p=14.01;
                flag=1;
            }
            else if(isdigit(s[j]))
            {
                flag2=1;
                if(isdigit(s[j+1]))
                {
                    num=(s[j]-'0')*10+s[j+1]-'0';
                    j++;
                }
                else
                {
                    num=s[j]-'0';
                }
            }
            if(flag==1)
            {
                if(isdigit(s[j+1])) continue;
                else ans+=p;
            }
            if(flag2==1)
            {
                ans+=p*num;
            }
        }
        printf("%.3lf\n",ans);
    }
}