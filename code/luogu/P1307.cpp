#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char a[100];
int main()
{
    cin>>a;
    int l=strlen(a),t,flag=0;
    if(l==1&&a[0]=='0')
    {
        cout<<'0'<<endl;
        return 0;
    }
    if(a[0]=='-')
    {
        cout<<'-';
        t=1;
    }
    else t=0;
    if(a[l-1]!='0') cout<<a[l-1];
    for(int i=l-2;i>=t;i--)
    {
        if(a[i]!='0')
        {
            flag=1;
        }
        if(flag==1)
        {
            cout<<a[i];
        }
    }
    cout<<endl;
    return 0;
}