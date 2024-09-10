#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int a[1001],b[1001],c[1001];
int main()
{
    char a0[1001],b0[1001];
    cin>>a0>>b0;
    for(int i=1;i<=strlen(a0);i++)
        a[i]=a0[strlen(a0)-i]-'0';
    for(int i=1;i<=strlen(b0);i++)
        b[i]=b0[strlen(b0)-i]-'0';
    int len=1,p=0,x;
    while((len<=strlen(a0))||(len<=strlen(b0)))
    {
        x=a[len]+b[len];
        c[len]=(x+p)%10;
        p=(x+p)/10;
        len++;
    }
    c[len]=p;
    while(c[len]==0&&len>1)
        len--;
    for(int i=len;i>=1;i--)
    {
        cout<<c[i];
    }
}