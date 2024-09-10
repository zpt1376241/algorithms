#include<cstdio>
#include<iostream>
#include<math.h>
#include<string.h>
int s[100000];
using namespace std;
int isans(int a)
{
    if(a<=1)    return 0;
    if(a==2)    return 1;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,i,j;
    int flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>s[i];
    flag=0;
    for(int i=0;i<n;i++)
    {
        if((isans(s[i])==1)&&flag==0)
        {
            flag=1;
            printf("%d",s[i]);
        }
        else if(isans(s[i])==1&&flag==1)
        {
            printf(" %d",s[i]);
        }
    }
    return 0;
}