#include<bits/stdc++.h>
using namespace std;
char s[100010];
int nxt[100010];
int last,t;
int main()
{
    while(scanf("%s",s+1)==1)
    {
        t=last=0;
        nxt[0]=0;
        int n=strlen(s+1);
        for(int i=1;i<=n;i++)
        {
            char ch=s[i];
            if(ch=='[') t=0;
            else if(ch==']')    t=last;
            else
            {
                nxt[i]=nxt[t];
                nxt[t]=i;
                if(t==last) last=i;
                t=i;
            } 
        }
        for(int i=nxt[0];i!=0;i=nxt[i])
            printf("%c",s[i]);
        printf("\n");
    }
}