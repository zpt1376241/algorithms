#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char s[1001][1001],m[10001],m1[10001];
int a[5];//A,C,G,T
int max(int a[])
{
    int maxnum=-1,k=0,i,num=0;
    char temp[5];
    char pp[5]={0,'A','C','G','T'};
    for(i=1;i<=4;i++)
    {
        if(a[i]>maxnum)
        {
            num=0;
            memset(temp,0,sizeof(temp));
            maxnum=a[i];
            k=i;
            temp[num]=pp[i];
            num++;
        }
        if(a[i]==maxnum)
        {
            temp[num]=pp[i];
            num++;
        }
    }
    if(strlen(temp)!=1)
    {
        if(temp[0]=='A')    return 1;
        else if(temp[0]=='C')    return 2;
        else if(temp[0]=='G')    return 3;
        else if(temp[0]=='T')    return 4;
    }
    else return k;
}
int main()
{
    int n,j,k,flag,num;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        num=0;
        memset(a,0,sizeof(a));
        memset(s,0,sizeof(s));
        memset(m,0,sizeof(m));
        scanf("%d %d",&j,&k);
        for(int p=1;p<=j;p++)
        {
            scanf("%s",m1);
            for(int q=1;q<=k;q++)
            {
                s[p][q]=m1[q-1];
            }
        }
        for(int q=1;q<=k;q++)
        {
            flag=0;
            for(int p=1;p<=j;p++)
            {
                if(s[p][q]=='A')    a[1]++;
                else if(s[p][q]=='C')    a[2]++;
                else if(s[p][q]=='G')    a[3]++;
                else if(s[p][q]=='T')    a[4]++;
                if(p==j)    flag=max(a);
            }
            if(flag!=0)
            {
                memset(a,0,sizeof(a));
                if(flag==1) m[q]='A';
                else if(flag==2)    m[q]='C';
                else if(flag==3)    m[q]='G';
                else if(flag==4)    m[q]='T';
            }       
        }
        for(int q=1;q<=k;q++)
        {
            for(int p=1;p<=j;p++)
            {
                if(s[p][q]!=m[q])
                    num++;
            }
        }
        for(int nn=1;nn<=k;nn++)
            cout<<m[nn];
        cout<<endl;
        cout<<num<<endl;    
    }
}