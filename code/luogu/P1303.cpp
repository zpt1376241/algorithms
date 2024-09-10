#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char a1[2001],a2[2001];
int a[2001],b[2001],c[40001];
int x;
int main()
{
    cin>>a1>>a2;
    for(int i=0;i<=strlen(a1)-1;i++)
        a[strlen(a1)-i]=a1[i]-'0';
    for(int i=0;i<=strlen(a2)-1;i++)
        b[strlen(a2)-i]=a2[i]-'0';
    for(int i=1;i<=strlen(a1);i++)
    {
        x=0;
        for(int j=1;j<=strlen(a2);j++)
        {
            c[i+j-1]=a[i]*b[j]+x+c[i+j-1];
            x=c[i+j-1]/10;
            c[i+j-1]%=10;
        }
        c[i+strlen(a2)]=x;
    }
    int len=strlen(a1)+strlen(a2);
    while(c[len]==0&&len>1)
        len--;
    for(int i=len;i>=1;i--)
        cout<<c[i];
}