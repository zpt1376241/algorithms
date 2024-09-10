#include<cstdio>
#include<iostream>
using namespace std;
struct st
{
    char na[51];
    int ag,sc;
}s[1001];
int f(int n)
{
    if(n*1.2>600)  return n=600;
    else   return n=(int)(1.0*n*1.2);
}
void print(st t)
{
    cout<<t.na<<" ";
    cout<<t.ag+1<<" ";
    cout<<f(t.sc)<<endl;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>s[i].na>>s[i].ag>>s[i].sc;
    for(int i=1;i<=n;i++)
    {
        print(s[i]);
    }
}