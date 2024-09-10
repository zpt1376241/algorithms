//#define DZY
#include<cstdio>
#include<cstring>
#include<iostream>
#include<iomanip>
using namespace std;
int n,k,m,a[50];
int go(int p,int d,int t)
{
    while(t--)
    {
        do{
            p=(p+d+n-1)%n+1;
        }while(a[p]==0);
    }
    return p;
}
int main()
{
    #ifdef DZY
    freopen("C:/test/in.txt","r",stdin);
    freopen("C:/test/out.txt","w",stdout);
    #endif
    while(scanf("%d %d %d",&n,&k,&m)&&n)
    {
        for(int i=1;i<=n;i++)   a[i]=1;
        int left=n;
        int p1=n,p2=1;
        while(left)
        {
            p1=go(p1,1,k);
            p2=go(p2,-1,m);
            cout<<setw(3)<<p1;
            left--;
            if(p1!=p2)
            {
                cout<<setw(3)<<p2;
                left--;
            }
            a[p1]=a[p2]=0;
            if(left)    cout<<",";
        }
        cout<<endl;
    }
}