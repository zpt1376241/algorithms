#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int q,x,y;
char a[110000];
void show(int n)
{
    for(int i=0;i<q;i++)
    {
        if(a[i]=='W')   x++;
        else if(a[i]=='L')  y++;
        if((x>=n||y>=n)&&abs(x-y)>=2)
        {
            cout<<x<<":"<<y<<endl;  
            x=0;y=0;
        }   
    }
    cout<<x<<":"<<y<<endl;
    x=0;y=0;
}
int main()
{
    char t;
    while(cin>>t&&t!='E')
        a[q++]=t;
    show(11);
    cout<<endl;
    show(21);
}