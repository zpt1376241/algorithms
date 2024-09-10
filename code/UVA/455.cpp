#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char s[10001],t[10001],temp[10001];
int main()
{
    int n,len1,len2,ans;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%s",s);
        len1=strlen(s);
        ans=0;
        for(int p=0;p<len1;p++)
        {
            len2=0;ans=0;
            memset(t,0,sizeof(t));
            strncpy(t,s,p+1);
            len2=strlen(t);
            ans=len2;
            strcpy(temp,t);
            for( ;len2<len1; )
            {
                strcat(t,temp);
                //cout<<t<<endl;
                len2=strlen(t);
            }
            if(strcmp(t,s)==0)
            {
                break;
            }
        }
        cout<<ans<<endl;
        if(i<n) cout<<endl;
    }
}