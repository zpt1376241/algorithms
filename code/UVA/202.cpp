//#define LOCAL
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
int a,b;
int m[150000],n[150000];
using namespace std;
int main()
{
    #ifdef LOCAL
    freopen("C:/test/in.txt","r",stdin);
    freopen("C:/test/out.txt","w",stdout);
    #endif
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        memset(m,-1,sizeof(m));
        int c=a%b;  c*=10;
        int cnt=0;
        while(m[c]==-1)
        {
            n[cnt]=c/b;
            m[c]=cnt;
            c%=b;c*=10;
            cnt++;
        }
        int s=m[c];
        printf("%d/%d = %d.", a, b, a/b);
        for(int i=0;i<s;i++)
            cout<<n[i];
        cout<<"(";
        if(cnt-s<=50)
        {
            for(int i=s;i<cnt;i++)
                cout<<n[i];
        }
        else 
        {
            for(int i=s;i<s+50;i++)
                cout<<n[i];
            cout<<"...";
        }
        cout<<")"<<endl;
        cout<<"   "<<cnt-s;
        cout<<" = number of digits in repeating cycle"<<endl<<endl;
    }
}