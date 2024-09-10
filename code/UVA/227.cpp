#include<cstdio>
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
char s[101][101],cmd1[1001],cmd2[1001],m[1001],temp[1001];
int flag1,flag2;
int A(int a,int b)
{
    if(a-1<1)
    {
        return 1;
    }
    char t=s[a][b];
    s[a][b]=s[a-1][b];
    s[a-1][b]=t;
    flag1=a-1;
    return 0;
}
int L(int a,int b)
{
    if(b-1<1)
    {
        return 1;
    }
    char t=s[a][b];
    s[a][b]=s[a][b-1];
    s[a][b-1]=t;
    flag2=b-1;
    return 0;
}
int B(int a,int b)
{
    if(a+1>5)
    {
        return 1;
    }
    char t=s[a][b];
    s[a][b]=s[a+1][b];
    s[a+1][b]=t;
    flag1=a+1;
    return 0;
}
int R(int a,int b)
{
    if(b+1>5)
    {
        return 1;
    }
    char t=s[a][b];
    s[a][b]=s[a][b+1];
    s[a][b+1]=t;
    flag2=b+1;
    return 0;
}
int main()
{
    int n=0,flag,len,i,j,k;
    while(1)
    {
        flag=0;flag1=0;flag2=0;
        memset(s,0,sizeof(s));
        memset(cmd1,0,sizeof(cmd1));
        memset(cmd2,0,sizeof(cmd2));
        if(n!=0)
            getchar();
        gets(m);
        if(m[0]=='Z')   break;
        if(strlen(m)==4)
        {
                m[4]=' ';
        }
        for(k=0;k<5;k++)
        {
            if(isspace(m[k]))
            {
            flag1=1;flag2=k+1;
            }
            s[1][k+1]=m[k];
        }
        for(i=2;i<=5;i++)
        {
            memset(m,0,sizeof(m));
            gets(m);
            if(strlen(m)==4)
            {
                m[4]=' ';
            }
            for(k=0;k<5;k++)
            {
                if(isspace(m[k]))
                {
                    flag1=i;flag2=k+1;
                }
                s[i][k+1]=m[k];
            }    
        }
        n++;
        cin>>cmd1;
        while(1)
        {
            len=strlen(cmd1);
            if(cmd1[len-1]=='0') break;
            else
            {
                cin>>cmd2;
                strcat(cmd1,cmd2);
            }
        }
        for(k=0;k<len;k++)
        {
            if(cmd1[k]=='A')     flag=A(flag1,flag2);
            else if(cmd1[k]=='L')     flag=L(flag1,flag2);
            else if(cmd1[k]=='B')     flag=B(flag1,flag2);
            else if(cmd1[k]=='R')     flag=R(flag1,flag2);
            if(flag==1) break;
        }
        if(n>1) cout<<endl;
        cout<<"Puzzle #"<<n<<":"<<endl;
        if(flag==1)
        cout<<"This puzzle has no final configuration."<<endl;
        else
        {
            for(int i=1;i<=5;i++)
                for(int j=1;j<=5;j++)
                {
                    cout<<s[i][j];
                    if(j==5)    cout<<endl;
                    else    cout<<" ";
                }
        }
   }
}