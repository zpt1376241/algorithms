//#define ABC
#define dzy 60
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
typedef struct
{
    char ch[2];
    int ah[100];
    int ex1[2],ex2[2];
}com;
com commend[dzy];
int a[dzy][dzy];
int wt[2];
int n,m;    //n行m列
int n0,m0;        //进行指令后，n0行m0列
int cnt,flag,fg=0;
int r1,c1,r2,c2;    ///
void print()
{
    for(int i=1;i<=n0;i++)
    {
        for(int j=1;j<=m0;j++)
        {
            cout<<a[i][j];
            if(j==m0)   cout<<endl;
            else    cout<<" ";
        }
    }
    cout<<endl;
}
void del(com commend)       //删除行或者列
{
    if(commend.ch[1]=='R')      //行
    {
        for(int i=1;i<=commend.ah[0];i++)
        {
            for(int j=commend.ah[i]-r1;j<=n0+r2;j++)
            {
                for(int k=1;k<=m0+c2;k++)
                a[j][k]=a[j+1][k];
            }
            for(int k=1;k<=m0;k++)
                a[n0][k]=0;
            n0--;r1++;
        }
    }
    else if(commend.ch[1]=='C')     //列
    {
        for(int i=1;i<=commend.ah[0];i++)
        {
            for(int j=commend.ah[i]-c1;j<=m0+c2;j++)
            {
                for(int k=1;k<=n0+r2;k++)
                a[k][j]=a[k][j+1];
            }
            for(int k=1;k<=n0+r2;k++)
                a[k][m0]=0;
            m0--;c1++;
        }
    }
    //print();
}
void ins(com commend)       //插入行或者列
{
    if(commend.ch[1]=='R')      //行
    {
        for(int i=1;i<=commend.ah[0];i++)
        {
            for(int j=n0+r2;j>=commend.ah[i]+r2;j--)
            {
                for(int k=1;k<=m0+c2;k++)
                    a[j+1][k]=a[j][k];
            }
            for(int k=1;k<=m0;k++)
                a[commend.ah[i]+r2][k]=0;
            n0++;r2++;
            //print();
        }
    }
    else if(commend.ch[1]=='C')    //列
    {
        for(int i=1;i<=commend.ah[0];i++)
        {
            for(int j=m0+c2;j>=commend.ah[i]+c2;j--)
            {
                for(int k=1;k<=n0;k++)
                    a[k][j+1]=a[k][j];
            }
            for(int k=1;k<=n0;k++)
                a[k][commend.ah[i]+c2]=0;
            m0++;c2++;
           // print();
        }
    }
}
int main()
{
    #ifdef  ABC
    freopen("C:/test/in.txt","r",stdin);
    freopen("C:/test/out.txt","w",stdout);
    #endif
    while(scanf("%d %d",&n,&m)==2&&n)
    {
        if(fg==1)
            cout<<endl;
        fg=1;
        memset(commend,0,sizeof(commend));
        memset(a,0,sizeof(a));
        n0=n;m0=m;r1=0;c1=0;r2=0,c2=0;
        int num=1;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                a[i][j]=num++;
       // print();
        int k;
        cin>>k;
        for(int i=1;i<=k;i++)
        {
            cin>>commend[i].ch;
            if(commend[i].ch[0]=='D'||commend[i].ch[0]=='I')
            {
                cin>>commend[i].ah[0];
                for(int j=1;j<=commend[i].ah[0];j++)
                    cin>>commend[i].ah[j];
            }
            else
            {
                cin>>commend[i].ex1[0]>>commend[i].ex1[1];
                cin>>commend[i].ex2[0]>>commend[i].ex2[1];
            }
        }
        for(int i=1;i<=k;i++)
        {
            if(commend[i].ch[0]=='D')
                del(commend[i]);        //删除行或者列
            else if(commend[i].ch[0]=='I')
                ins(commend[i]);        //插入行或者列
            else swap(a[commend[i].ex1[0]][commend[i].ex1[1]],a[commend[i].ex2[0]][commend[i].ex2[1]]);
        }
       // print();
        int s;
        cin>>s;
        cout<<"Spreadsheet #"<<++cnt<<endl;
        for(int p=1;p<=s;p++)
        {
            cin>>wt[0]>>wt[1];
            if(wt[0]-1<0)   wt[0]=1;
            flag=0;
            int i,j;
            for(i=1;i<=n0;i++)
            {
                for(j=1;j<=m0;j++)
                {    
                    if(a[i][j]==(wt[0]-1)*m+wt[1])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1) break;
            }
            cout<<"Cell data in ("<<wt[0]<<","<<wt[1]<<") ";
            if(flag==1) cout<<"moved to ("<<i<<","<<j<<")"<<endl;
            else cout<<"GONE"<<endl;
        }
    }
}