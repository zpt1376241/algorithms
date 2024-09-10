#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int n;
void guess(char *a,char *b,int l1,int l2,int *cnt)
{
    for(int i=0;i<l1;i++)
    {
        int flag1=0,flag2=0;
        int j;
        for(j=0;j<l2;j++)
        {
            if(b[i]==a[j])
            {
                flag2=1;
                flag1=1;
                a[j]=' ';
            }
            if(flag2==1)
            {
                for(int k=i+1;k<strlen(b);k++)
                {
                    if(b[k]==b[i])
                        b[k]='0';
                }
            }
        }
        if(!flag1)  (*cnt)++;
        if(*cnt==7) return;
    }
}
int main()
{
    //freopen("C:/test/in.txt","r",stdin);
    //freopen("C:/test/out.txt","w",stdout);
    char a[501],b[501];
    while(scanf("%d %s %s",&n,a,b)==3&&n)
    {
        int l1=strlen(b);
        int l2=strlen(a);
        int cnt=0;
        int flag2=0;
        guess(a,b,l1,l2,&cnt);
        for(int i=0;i<l2;i++)
        {
            if(a[i]!=' ')
            {
                flag2=1;
                break;
            }
        }
        printf("Round %d\n",n);
        if(flag2==0&&cnt<7) printf("You win.\n");
        else if(flag2==1&&cnt==7)    printf("You lose.\n");
        else if(flag2==1&&cnt<7) printf("You chickened out.\n");
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
    }
}
